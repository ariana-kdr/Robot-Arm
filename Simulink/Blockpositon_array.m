 %%output x and y position from camera 
 %x_position_mm =  (160+camera_calibration_x_pixels/camera_calibration_pixels_per_mm)-x_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
 %y_position_mm = -(150-camera_calibration_y_pixels/camera_calibration_pixels_per_mm)-y_position_pixel/camera_calibration_pixels_per_mm; % pixels to mm from centre robot
 
 %%values send to simulink
 %%[x,y,nproducts]
 
 %%values obtained to be obtained from simulink
 Conveyorvelocity= 20; %mm/s
 Frequency= 5; % hz
 X_position_mm= 120; %mm
 Y_position_mm = 130; %mm
 
 %%values to measure
 Lengthconveyor = 350; %mm
 Zstandard = 55; %mm
 
 
 T=(0:1/Frequency: round(Lengthconveyor/Conveyorvelocity+Frequency))
 T= T.';
 ColomnsZandy= ones(1+Frequency*round(Lengthconveyor/Conveyorvelocity+Frequency) , 1)
 %%determining position of block center over time
% T = 0 + 1/5  %camera meassures in 5 hz, so T in steps of 1/5 Seconds 
 %Xblock= x_position_mm + conveyorvelocity * T
 %Yblock = y_position_mm
 %Zstandard=60 %mm
 X_position_Block_mm= X_position_mm+Conveyorvelocity.*T;
 Zstandard_block_mm = ColomnsZandy .*Zstandard;
 Y_position_Block_mm = ColomnsZandy .* Y_position_mm;
 
 Positionblock= [T X_position_Block_mm Y_position_Block_mm Zstandard_block_mm]