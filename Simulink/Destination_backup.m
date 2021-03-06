function [X_rad_target, Z_rad_target, R_rad_target] = Destination(x_target,y_target,z_target)
 
%convert to cylindrical coordinates
Radius = sqrt(x_target^2+y_target^2);
phi = atan(y_target/x_target);

%assign stepperz to correct quadrant of unit circle
if x_target<0 && y_target<0
    R_rad_target = phi - pi;
elseif x_target<0
    R_rad_target = phi + pi;
else
    R_rad_target = phi;
end

%define symbolic functions theta1 and thetaa 2
syms t_1 t_2 t_3 t_4                                                                   

%define known lengths of the arm
l_24 = 130; l_45 = 120; l_13 = 80;
l_35 = 130; l_46 = 120+65; l_12 = 165;
h = 81;

%define possible ranges
lowerX = -2; upperX = 2;


eqn1 = l_24*cos(t_2) + l_46*cos(t_4) == Radius;      	                                %eqn1 equates the width of the arm to the desired radius
eqn2 = h + l_12 + l_24*sin(t_2) + l_46*sin(t_4) == z_target;                               %eqn2 equates the height of the arm to the desired height

B = vpasolve(eqn1,eqn2,[t_2 t_4], [1;1]);                                           %solve both equations simultaneously to find theta2 and theta4

eqn3 = l_24*cos(double(B.t_2)) + l_45*cos(double(B.t_4)) == l_13*cos(t_1) + l_35*cos(t_3);              %eqn3 solves for the width of both arms
eqn4 = l_12 + l_24*sin(double(B.t_2)) + l_45*sin(double(B.t_4)) == l_13*sin(t_1) + l_35*sin(t_3);       %eqn4 solves for the height of both arms

S_lower = vpasolve(eqn3,eqn4,[t_1 t_3],[lowerX upperX; -2 2]);                                         %solve both equations simultaneously to find theta1 and theta2 
%S_upper = vpasolve(eqn3,eqn4,[t_1 t_3],[(S_lower.t_1+eps) upperX; -2 2]);

%convert symbolic variables into final numerical values
X_rad_target(1,1) = wrapToPi(double(S_lower.t_1));
%if isempty(S_upper.t_1) == 0
 %   X_rad_target(2,1) = double(S_upper.t_1);
%end
Z_rad_target = wrapToPi(double(B.t_2));
R_rad_target = wrapToPi(R_rad_target);
end