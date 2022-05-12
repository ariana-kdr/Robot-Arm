function [r6] = Position(t_1,t_2,phi)

%define symbolic functions theta1 and thetha 2
syms t_3 t_4                                                                   

%define known lengths of the arm
l_24 = 130; l_45 = 120; l_13 = 80;
l_35 = 130; l_46 = 120+65; l_12 = 165;
h = 81;

eqn1 = l_24*cos(t_2) + l_45*cos(t_4) == l_13*cos(t_1) + l_35*cos(t_3);              %eqn1 solves for the width of both arms
eqn2 = l_12 + l_24*sin(t_2) + l_45*sin(t_4) == l_13*sin(t_1) + l_35*sin(t_3);       %eqn2 solves for the height of both arms

S = vpasolve(eqn1,eqn2,[t_3 t_4],[-1; -1]);                                          %solve both equations simultaneously to find theta1 and theta2 

r6 = vpa([l_24*cos(t_2) + l_46*cos(S.t_4); l_24*sin(t_2) + l_46*sin(S.t_4)+h+l_12; phi]);         %find the position vector