%% camera_calibration
% This script calibrates the camera with the robot-arm using the 3D printed
% plate. This script outputs the pixels per mm and the position of the
% detected red dot.
%
% 2022 - 3BYX0P CBL Systems and control project

close all
clear

%% Startup and specify variables
% This region of interest is determined manually.
if ~exist('camera_calibration_ROI','var')
    robot_number = input('What is your Robot number?: ');
    file_name_simulink = get_param(bdroot, 'Name');
    load('calibration_matrix.mat');
    [camera_calibration_x_pixels,camera_calibration_y_pixels,camera_calibration_pixels_per_mm,camera_calibration_ROI,robot_calibration_r,robot_calibration_x, robot_calibration_z] = Calibrate_Robot_Settings(robot_number,calibration);
end
% camera_calibration_ROI = [1 70 1080 710];

imaqreset

% Specify the HSV upper and lower bounds (in this case only the H-value)
% Download the Slider_app to determine and save the HSV values
lb_hsv_r     = 0.989; % lower bound red spot
ub_hsv_r     = 0.124; % upper bound red spot

if exist('vidobj','var')
    vidobj.delete();
    pause(1)
end
warning ('off','all');

% Blob Analysis settings
min_blob_area = 2000;           % Minimum area for the blob analysis in pixels for the red dots
max_blob_area = 3000;           % Maximum area for the blob analysis in pixels
blob_eccentricity_max = 0.8;    % Specify the eccentricity threshold

%% Camera variables
% Variables to open the camera, currently only for Windows
adapter_name  = 'winvideo';
device_id     =  2;
format        = 'RGB24_1280x960';
color_space   = 'rgb';

% Camera initialization
vidobj = video_object(lb_hsv_r, ub_hsv_r, 'red');
vidobj = vidobj.camera_setting(adapter_name, device_id, format, color_space, camera_calibration_ROI);
vidobj = vidobj.set_blob_variable(min_blob_area, max_blob_area, blob_eccentricity_max);

%% Blob detection red dots and get the calibration values
% Perform the object detection specified in video_object.m
[vidobj, y_position_pixel, x_position_pixel, area_1, centroid_1, b_box_1, ecc_1, orientation_1]...
    = vidobj.perform_object_detection(lb_hsv_r,ub_hsv_r,1);

%Calculate pixel per mm
y_distance_between_red_points = abs(y_position_pixel(1) - y_position_pixel(2));
camera_calibration_pixels_per_mm = y_distance_between_red_points/60

% Find the maximal value of the y_position to get the right red dot pixel for calibration
max_index = find(y_position_pixel==max(y_position_pixel));
camera_calibration_x_pixels = x_position_pixel(max_index)
camera_calibration_y_pixels = y_position_pixel(max_index)
