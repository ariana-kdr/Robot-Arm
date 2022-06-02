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
file_name_simulink = 'Robot_Student_2021_v1';

% Calibration values robot-arm setup
camera_calibration_x_pixels = 358.3444;
camera_calibration_y_pixels = 686.7430;
camera_calibration_pixels_per_mm = 5.6043; 
camera_calibration_ROI = [ 1 70 1080 710];

%% Startup and specify variables
imaqreset

% Specify the HSV upper and lower bounds (in this case only the H-value)
% Download the Slider_app to determine and save the HSV values

hsv_y = 0.166; % middle value heu yellow colour
hsv_b = 0.588; % middle value hue blue colour
hsv_r = 0.715; % middle value hue red colour
hsv_p = 0.861; % middle value hue pink colour

hue_range = 0.1; % range for hue values of the same colour 

lb_hsv_y     = hsv_y - hue_range; % lower bound yellow spot
ub_hsv_y     = hsv_y + hue_range; % upper bound yellow spot

lb_hsv_r     = hsv_r - hue_range; % lower bound red spot
ub_hsv_r     = hsv_r + hue_range; % upper bound red spot

lb_hsv_b     = hsv_b - hue_range; % lower bound blue spot
ub_hsv_b     = hsv_b + hue_range; % upper bound blue spot

lb_hsv_p     = hsv_p - hue_range; % lower bound yellow spot
ub_hsv_p     = hsv_p + hue_range; % upper bound yellow spot

if exist('vidobj','var')
    vidobj.delete();
    pause(1)
end
warning ('off','all');

% Create a matrix with the corresponding values
color_space_settings = [lb_hsv_y, ub_hsv_y;
    lb_hsv_r, ub_hsv_r;
    lb_hsv_b, ub_hsv_b;
    lb_hsv_p, ub_hsv_p];

% Blob Analysis settings
% Minimum area for the blob analysis in pixels per colored block
% This is to avoid blob analysis when the block is not fully in the frame
min_blob_area_red = round((48*camera_calibration_pixels_per_mm)^2*0.5); 
min_blob_area_blue = round((58*camera_calibration_pixels_per_mm)^2*0.5);
min_blob_area_yellow = round((25*camera_calibration_pixels_per_mm)^2*0.5);

% Create a matrix with the corresponding values
min_blob_area_all_colors = [min_blob_area_red; min_blob_area_blue; min_blob_area_yellow];

max_blob_area = round((90*camera_calibration_pixels_per_mm)^2*0.5);  % Maximum area for the blob analysis in pixels
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
    % no longer needed wanted_color = str2double(get_param(file_name_simulink + "/Controller/Color",'Value'));
    plot_detection = str2double(get_param(file_name_simulink + "/Controller/Plot",'Value'));
    stop_detection = str2double(get_param(file_name_simulink + "/Controller/Stop",'Value'));
    
    %YELLOW - color 1
    % Set the correct blob variables
    vidobj = vidobj.set_blob_variable(min_blob_area_all_colors(1), max_blob_area, blob_eccentricity_max);
    % Perform the object detection specified in video_object.m
    [vidobj, y_position_pixel, x_position_pixel, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
        = vidobj.perform_object_detection(color_space_settings(1,1),color_space_settings(1,2),plot_detection,file_name_simulink);
    
    %RED- color2
    % Set the correct blob variables
    vidobj = vidobj.set_blob_variable(min_blob_area_all_colors(2), max_blob_area, blob_eccentricity_max);
    % Perform the object detection specified in video_object.m
    [vidobj, y_position_pixel2, x_position_pixel2, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
        = vidobj.perform_object_detection(color_space_settings(2,1),color_space_settings(2,2),plot_detection,file_name_simulink);
    
    %blue - color3
    % Set the correct blob variables
     vidobj = vidobj.set_blob_variable(min_blob_area_all_colors(3), max_blob_area, blob_eccentricity_max);
    % Perform the object detection specified in video_object.m
    [vidobj, y_position_pixel3, x_position_pixel3, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
        = vidobj.perform_object_detection(color_space_settings(3,1),color_space_settings(3,2),plot_detection,file_name_simulink);
    
    % Stop object detection loop
    if stop_detection == 1
        set_param(file_name_simulink + "/Controller/Stop",'Value',"0")
        return
    end
    
    % Convert pixel position of camera to centre of robot using
    %postions for yellow
    x_position_mm_yel =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    y_position_mm_yel = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    %positions for red
    x_position_mm_red =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel2/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    y_position_mm_red = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel2/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    %positions for blue
    x_position_mm_blue =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel3/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    y_position_mm_blue = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel3/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
    
    %Where coordinates of blocks are stored with their corresponding color. 
    % [x, y, color] where color is a number, 1 is yellow, 2 is blue, 3 is red
    coordinates = zeros(8,3);
    N_blocks = 0;
    
    % For each color there is checked if there are 1 or 2 blocks of that
    % color found. When blocks are found the coordinates and color is added
    % to the coordinates array
    %yellow
    if length(x_position_mm_yel) > 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_yel(1), y_position_mm_yel(1), 1];
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_yel(2), y_position_mm_yel(2), 1];
    elseif length(x_position_mm_yel) == 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks, :) = [x_position_mm_yel(1), y_position_mm_yel(1), 1];
    end
    
    % blue
    if length(x_position_mm_blue) > 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_blue(1), y_position_mm_blue(1), 2];
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_blue(2), y_position_mm_blue(2), 2];
    elseif length(x_position_mm_blue) == 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks, :) = [x_position_mm_blue(1), y_position_mm_blue(1), 2];
    end
    
    % red
    if length(x_position_mm_red) > 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_red(1), y_position_mm_red(1), 3];
        N_blocks = N_blocks +1;
        coordinates(N_blocks,:) = [x_position_mm_red(2), y_position_mm_red(2), 3];
    elseif length(x_position_mm_red) == 1
        N_blocks = N_blocks +1;
        coordinates(N_blocks, :) = [x_position_mm_red(1), y_position_mm_red(1), 3];
    end

    % The order of the measured blocks are ordered on their x value. The
    % block with the lowest x value goes first. If you want to sort on the y
    % value, change 1 to 2. If you want the highest number first you change
    % ascend to descend.
    sortrows(coordinates,1, "ascend")
    
    % The coordinates and color of two blocks and the number of blocks is
    % send to simulink. 
    % order: x coordinate, y coordinate, color etcetera
    set_param(file_name_simulink + "/Controller/Camera/[x,y,nproducts]",'Value',...
        "["+coordinates(1,1)+","+coordinates(1,2)+","+coordinates(1,3)+","+coordinates(2,1)+","+coordinates(2,2)+coordinates(2,3)+","+N_blocks+"]");

    
    % Pause to avoid laptop from freezing
    pause(0.05);
    
end
