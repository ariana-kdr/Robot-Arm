%% camera
% This script opens the camera on your laptop and does a blob analysis to
% detect the blocks. Three colors can be chosen to be detected; red, yellow
% and blue. The position coordinates of these blocks are send to Simulink,
% which is running on the Raspberry Pi. Maximal 2 blocks can be detected
% and send per color.
%
% 2022 - 3BYX0P CBL Systems and control project
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

if ~exist('file_name_simulink','var')
    robot_number = input('What is your Robot number?: ');
    file_name_simulink = get_param(bdroot, 'Name');
    load('calibration_matrix.mat');
    [camera_calibration_x_pixels,camera_calibration_y_pixels,camera_calibration_pixels_per_mm,camera_calibration_ROI,robot_calibration_r,robot_calibration_x, robot_calibration_z] = Calibrate_Robot_Settings(robot_number,calibration)
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
min_blob_area_red = 2000;
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
% Loop over object detection
while true
    tic
    wanted_color = str2double(get_param(file_name_simulink + "/Controller/Color",'Value'));
    plot_detection = str2double(get_param(file_name_simulink + "/Controller/Plot",'Value'));
    vidobj = vidobj.set_blob_variable(min_blob_area_all_colors(wanted_color), max_blob_area, blob_eccentricity_max);
    stop_detection = str2double(get_param(file_name_simulink + "/Controller/Stop",'Value'));
    % STOP detection when Stop parameter is 1 in Simulink
    if stop_detection == 1
        set_param(file_name_simulink + "/Controller/Stop",'Value',"0")
        return
    end
    
    % Perform the object detection specified in video_object.m
    [vidobj, y_position_pixel, x_position_pixel, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
        = vidobj.perform_object_detection(color_space_settings(wanted_color,1),color_space_settings(wanted_color,2),plot_detection,file_name_simulink);
    

    % Convert pixel position of camera to centre of robot using
    x_position_mm =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    y_position_mm = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    
    % Send position to simulink
    if length(x_position_mm) > 1
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "["+num2str(x_position_mm(1))+","+num2str(y_position_mm(1))+","+num2str(x_position_mm(2))+","+num2str(y_position_mm(2))+","+num2str(length(x_position_mm))+"]")
    elseif length(x_position_mm) == 1
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "["+num2str(x_position_mm(1))+","+num2str(y_position_mm(1))+",0,0,"+num2str(length(x_position_mm))+"]")
    else
        set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
            "[0,0,0,0,0]")
    end
    x1 = toc;
    pause(max(0, 0.2 - x1));
end
