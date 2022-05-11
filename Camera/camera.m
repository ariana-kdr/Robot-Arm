%% camera
% This script opens the camera on your laptop and does a blob analysis to
% detect the blocks. Three colors can be chosen to be detected; red, yellow
% and blue. The position coordinates of these blocks are send to Simulink,
% which is running on the Raspberry Pi. Maximal 2 blocks can be detected
% and send per color.
%
% 2022 - 3BYX0P CBL Systems and control project

close all
%% FILL IN THESE VALUES FOR EVERY DIFFERENT ROBOT-ARM SETUP AND MODEL
% File name of the Simulink model to send the position coordinates toxq
file_name_simulink = 'Robotarm_Master_MAX';

% Calibration values robot-arm setup
camera_calibration_x_pixels = 358.3444;
camera_calibration_y_pixels = 686.7430;
camera_calibration_pixels_per_mm = 5.6043; 
camera_calibration_ROI = [ 1 70 1080 710];

%% Startup and specify variables
imaqreset

% Specify the HSV upper and lower bounds (in this case only the H-value)
% Download the Slider_app to determine and save the HSV values
lb_hsv_r     = 0.989; % lower bound red spot
ub_hsv_r     = 0.124; % upper bound red spot

lb_hsv_b     = 0.479; % lower bound blue spot
ub_hsv_b     = 0.656; % upper bound blue spot

lb_hsv_y     = 0.126; % lower bound yellow spot
ub_hsv_y     = 0.237; % upper bound yellow spot

if exist('vidobj','var')
    vidobj.delete();
    pause(1)
end
warning ('off','all');

% Create a matrix with the corresponding values
color_space_settings = [lb_hsv_r, ub_hsv_r;
    lb_hsv_b, ub_hsv_b;
    lb_hsv_y, ub_hsv_y];

% Blob Analysis settings
% Minimum area for the blob analysis in pixels per colored block
% This is to avoid blob analysis when the block is not fully in the frame
min_blob_area_red = round((50*camera_calibration_pixels_per_mm)^2*0.5); 
min_blob_area_blue = round((60*camera_calibration_pixels_per_mm)^2*0.5);
min_blob_area_yellow = round((30*camera_calibration_pixels_per_mm)^2*0.5);

% Create a matrix with the corresponding values
min_blob_area_all_colors = [min_blob_area_red; min_blob_area_blue; min_blob_area_yellow];

max_blob_area = 500000000;                                   % Maximum area for the blob analysis in pixels
blob_eccentricity_max = 0.8;                                 % Specify the eccentricity threshold

%% Camera variables
% Variables to open the camera, currently only for Windows
adapter_name  = 'winvideo';
device_id     =  2;
format        = 'RGB24_1280x960';
color_space   = 'rgb';

% Camera initialization
vidobj = video_object(lb_hsv_r, ub_hsv_r, 'red');
vidobj = vidobj.camera_setting(adapter_name, device_id, format, color_space, camera_calibration_ROI);

%% Object detection at 5 Hz
% Loop over object detection, please note that there is some delay in between
% shooting a picture and 

while true
    
    %Get all the parameters from Simulink
    wanted_color = str2double(get_param(file_name_simulink + "/Controller/Color",'Value'));
    plot_detection = str2double(get_param(file_name_simulink + "/Controller/Plot",'Value'));
    stop_detection = str2double(get_param(file_name_simulink + "/Controller/Stop",'Value'));
    
    % Set the correct blob variables
    vidobj = vidobj.set_blob_variable(min_blob_area_all_colors(wanted_color), max_blob_area, blob_eccentricity_max);
    
    % Perform the object detection specified in video_object.m
    [vidobj, y_position_pixel, x_position_pixel, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
        = vidobj.perform_object_detection(color_space_settings(wanted_color,1),color_space_settings(wanted_color,2),plot_detection,file_name_simulink);
    
    % Stop object detection loop
    if stop_detection == 1
        set_param(file_name_simulink + "/Controller/Stop",'Value',"0")
        return
    end
    
    % Convert pixel position of camera to centre of robot using
    x_position_mm =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    y_position_mm = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    
    % Send position and number of detected objects to Simulink, with a maximum of 2 position values
    if length(x_position_mm) > 1
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "["+num2str(x_position_mm(1))+","+num2str(y_position_mm(1))+","+num2str(x_position_mm(2))+","+num2str(y_position_mm(2))+","+num2str(length(x_position_mm))+"]")
    elseif length(x_position_mm) == 1
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "["+num2str(x_position_mm(1))+","+num2str(y_position_mm(1))+","+num2str(0)+","+num2str(0)+","+num2str(length(x_position_mm))+"]")
    else
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "["+num2str(0)+","+num2str(0)+","+num2str(0)+","+num2str(0)+","+num2str(0)+"]")
    end
    
    % Pause to avoid laptop from freezing
    pause(0.05);
end
