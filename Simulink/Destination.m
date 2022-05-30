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
%syms t_1 t_2 t_3 t_4                                                                   

%define known lengths of the arm
l_24 = 130; l_45 = 120; l_13 = 80;
l_35 = 130; l_46 = 120+65; l_12 = 165;
h = 81;

%define possible ranges
lowerX = -0.5; upperX = 0.5;

%B = vpasolve(eqn1,eqn2,[t_2 t_4], [1;1]);                                           %solve both equations simultaneously to find theta2 and theta4
%S_lower = vpasolve(eqn3,eqn4,[t_1 t_3],[lowerX upperX; -2 2]);                                         %solve both equations simultaneously to find theta1 and theta2 
%S_upper = vpasolve(eqn3,eqn4,[t_1 t_3],[(S_lower.t_1+eps) upperX; -2 2]);

function F1 = root22d(x)
F1(1) = l_24*cos(x(1)) + l_46*cos(x(2)) - Radius;      	                                %eqn1 equates the width of the arm to the desired radius
F1(2) = h + l_12 + l_24*sin(x(1)) + l_46*sin(x(2)) - z_target;                               %eqn2 equates the height of the arm to the desired height
end

fun = @root22d;
x0 =[0,0];
x = fsolve(fun,x0);
B = x;

function F2 = root23d(x1)
F2(1) = l_24*cos(double(x(1))) + l_45*cos(double(x(2))) - l_13*cos(x1(1)) - l_35*cos(x1(2));              %eqn3 solves for the width of both arms
F2(2) = l_12 + l_24*sin(double(x(1))) + l_45*sin(double(x(2))) - l_13*sin(x1(1)) - l_35*sin(x1(2));       %eqn4 solves for the height of both arms
end

fun = @root23d;
x0 = [lowerX, upperX];
S_lower = fsolve(fun,x0);
x1 = [(S_lower(1)), upperX];
S_upper = fsolve(fun,x1);

%convert symbolic variables into final numerical values
X_rad_target(1,1) = double(S_lower(1));
if isempty(S_upper(1)) == 0
    X_rad_target(2,1) = double(S_upper(1));
end
Z_rad_target = double(B(1));
end
