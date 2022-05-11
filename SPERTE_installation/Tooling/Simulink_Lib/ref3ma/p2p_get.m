function [qref,vref,aref]=p2p_get(t)

global delta gamma jerk idir xstrt;

global t0 t1 t2 t3 t4 t5 t6 t7
global s0 s1 s2 s3 s4 s5 s6 s7
global v0 v1 v2 v3 v4 v5 v6 v7
global a0 a1 a2 a3 a4 a5 a6 a7

% compute reference trajectory

if t<=t0
   aref=0;
   vref=0;
   qref=s0;
elseif t<=t1
   aref=jerk*(t-t0);
   vref=0.5*jerk*(t-t0)^2;
   qref=s0+1/6*jerk*(t-t0)^3;
elseif t<=t2
   aref=a1;
   vref=v1+a1*(t-t1);
   qref=s1+v1*(t-t1)+0.5*a1*(t-t1)^2;
elseif t<=t3
   aref=a2-jerk*(t-t2);
   vref=v2+a2*(t-t2)-0.5*jerk*(t-t2)^2;
   qref=s2+v2*(t-t2)+0.5*a2*(t-t2)^2-1/6*jerk*(t-t2)^3;
elseif t<=t4
   aref=0;
   vref=v3;
   qref=s3+v3*(t-t3);
elseif t<=t5
   aref=-jerk*(t-t4);
   vref=v4-0.5*jerk*(t-t4)^2;
   qref=s4+v4*(t-t4)-1/6*jerk*(t-t4)^3;
elseif t<=t6
   aref=a5;
   vref=v5+a5*(t-t5);
   qref=s5+v5*(t-t5)+0.5*a5*(t-t5)^2;
elseif t<=t7
   aref=a6+jerk*(t-t6);
   vref=v6+a6*(t-t6)+0.5*jerk*(t-t6)^2;
   qref=s6+v6*(t-t6)+0.5*a6*(t-t6)^2+1/6*jerk*(t-t6)^3;
else
   aref=0;
   vref=0;
   qref=s7;
end

if idir==-1
   aref=-aref;
   vref=-vref;
   qref=-qref;
end

qref=qref+xstrt;