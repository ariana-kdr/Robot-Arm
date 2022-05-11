function [camera_calibration_x_pixels,camera_calibration_y_pixels,camera_calibration_pixels_per_mm,camera_calibration_ROI,robot_calibration_r,robot_calibration_x, robot_calibration_z] = Calibrate_Robot_Settings(number_robot,matrix_calibration)
camera_calibration_x_pixels = matrix_calibration(number_robot,1);
camera_calibration_y_pixels = matrix_calibration(number_robot,2);
camera_calibration_pixels_per_mm = matrix_calibration(number_robot,3);
camera_calibration_ROI = [matrix_calibration(number_robot,4),matrix_calibration(number_robot,5),matrix_calibration(number_robot,6),matrix_calibration(number_robot,7)];
robot_calibration_r = matrix_calibration(number_robot,8);
robot_calibration_x = matrix_calibration(number_robot,9);
robot_calibration_z = matrix_calibration(number_robot,10);