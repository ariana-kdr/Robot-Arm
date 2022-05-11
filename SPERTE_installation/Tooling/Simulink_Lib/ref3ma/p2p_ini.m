function []=p2p_ini(xstart,tstart,xend,vdes,tdes,maxjerk)

global delta gamma jerk idir xstrt;

global t0 t1 t2 t3 t4 t5 t6 t7
global s0 s1 s2 s3 s4 s5 s6 s7
global v0 v1 v2 v3 v4 v5 v6 v7
global a0 a1 a2 a3 a4 a5 a6 a7

disp=xend-xstart;
if disp>=0
   idir=1;
else
   idir=-1;
end

disp=abs(disp);
vdes=abs(vdes);
jerk=abs(maxjerk);

% compute jerk period delta

det=tdes^2*jerk^2-4*jerk*vdes;

if det<0
   disp('desired velocity can not be reached!')
   disp('increase jerk and/or tdes.')
else
   delta=(tdes*jerk-sqrt(det))/(2*jerk);
   
   % compute acceleration period gamma
   
   gamma=tdes-2*delta;
   
   % compute switching times
   
   t0=tstart;
	t1=t0+delta;
	t2=t1+gamma;
	t3=t2+delta;
   
   % compute t4
     
   t4=t3+(disp-2*jerk*delta^3-3*jerk*delta^2*gamma-jerk*delta*gamma^2)/vdes;
   if t4<t3
     disp('desired velocity too high for displacement!')
     disp('decrease desired velocity.')
	else    
     t5=t4+delta;
	  t6=t5+gamma;
	  t7=t6+delta;   
   
     % compute reference values at switching times   
     
     xstrt=xstart;
     s0=0;
     
     a1=jerk*(t1-t0);
     v1=0.5*jerk*(t1-t0)^2;
     s1=s0+1/6*jerk*(t1-t0)^3;
   
  	  a2=a1;
     v2=v1+a1*(t2-t1);
     s2=s1+v1*(t2-t1)+0.5*a1*(t2-t1)^2;
   
     a3=a2-jerk*(t3-t2);
     v3=v2+a2*(t3-t2)-0.5*jerk*(t3-t2)^2;
     s3=s2+v2*(t3-t2)+0.5*a2*(t3-t2)^2-1/6*jerk*(t3-t2)^3;

     a4=0;
     v4=v3;
     s4=s3+v3*(t4-t3);
   
     a5=-jerk*(t5-t4);
     v5=v4-0.5*jerk*(t5-t4)^2;
     s5=s4+v4*(t5-t4)-1/6*jerk*(t5-t4)^3;
   
     a6=a5;
     v6=v5+a5*(t6-t5);
     s6=s5+v5*(t6-t5)+0.5*a5*(t6-t5)^2;
   
     a7=a6+jerk*(t7-t6);
     v7=v6+a6*(t7-t6)+0.5*jerk*(t7-t6)^2;
     s7=s6+v6*(t7-t6)+0.5*a6*(t7-t6)^2+1/6*jerk*(t7-t6)^3;
  end
end
