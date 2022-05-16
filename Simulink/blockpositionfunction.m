
%% take from simulink, moment of detection 
function [T, X_position_Block_mm, Y_position_Block_mm, Zstandard_block_mm] = blockposition(T, x,y,z)

%Known constant values from the camera
X_position_Block_mm = 10;
Y_position_Block_mm= 130;
Zstandard_block_mm= 50; %meassure blocks to obtain

%known conveyorvelocity
Conveyorvelocity= 20 ;% mm/s

T=input('enter value of T'); % take T from model
                                        %solve both equations simultaneously to find theta1 and theta2 

%Final values
x= X_position_Block_mm + T * Conveyorvelocity
y= Y_position_Block_mm
z=Zstandard_block_mm
%print blockposition
end



