function [stepper1, stepper2, stepperz] = Destination(x,z,y)

%convert to cylindrical coordinates
r = sqrt(x^2+z^2);
phi = atan(z/x);

%assign stepperz to correct quadrant of unit circle
if x<0 & z<0
    stepperz = phi - pi;
elseif x<0
    stepperz = phi + pi;
else
    stepperz = phi;
end

%define symbolic functions theta1 and thetha 2
syms t_1 t_2 t_3 t_4                                                                   

%define known lengths of the arm
l_24 = 130; l_45 = 120; l_13 = 80;
l_35 = 130; l_46 = 120+65; l_12 = 165;
h = 81;

eqn1 = l_24*cos(t_2) + l_46*cos(t_4) == r;      	                                %eqn1 equates the width of the arm to the desired radius
eqn2 = h + l_12 + l_24*sin(t_2) + l_46*sin(t_4) == y;                               %eqn2 equates the height of the arm to the desired height

B = vpasolve(eqn1,eqn2,[t_2 t_4], [1;1]);                                           %solve both equations simultaneously to find theta2 and theta4

eqn3 = l_24*cos(double(B.t_2)) + l_45*cos(double(B.t_4)) == l_13*cos(t_1) + l_35*cos(t_3);              %eqn3 solves for the width of both arms
eqn4 = l_12 + l_24*sin(double(B.t_2)) + l_45*sin(double(B.t_4)) == l_13*sin(t_1) + l_35*sin(t_3);       %eqn4 solves for the height of both arms

S = vpasolve(eqn3,eqn4,[t_1 t_3],[1; 0.5]);                                         %solve both equations simultaneously to find theta1 and theta2 

%convert symbolic variables into final numerical values
stepper1 = double(S.t_1);               
stepper2 = double(B.t_2);