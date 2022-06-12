%Returns different order approximation of transfer function for sys_p
%Change which plant variable is used with sys_p
%Workplace variables are used in simulink to easily change plants
%Make sure to use the right PID controller when switching plants. 

%Set Bode plot to wrapped
opts_bode = bodeoptions('cstprefs');
opts_bode.PhaseWrapping = 'on';

%Force transfer function to be stable
opts_tf = tfestOptions;
opts_tf.EnforceStability = 1;

sys_p = sys_X_II;
%sys_p_inv = sys_R_II_inv;

%sys_1 = tfest(sys_p,1,opts_tf);
sys_2 = tfest(sys_p,2,opts_tf);
sys_3 = tfest(sys_p,3,opts_tf);

tf_lowpass = tf(500*pi,[1 500*pi]);
%sys_Z_II_FF = sys_3 \ tf_lowpass;
sys_3_2 = sys_3 \ tf_lowpass;

%step(sys_1,sys_2,sys_3,sys_10,10)

%bode(inv(sys_p),sys_4_inv,sys_4_2,opts_bode)
%legend('source','previous 4nd order','proper 4th order')

bode(inv(sys_p),sys_3_2,opts_bode)
legend('source','proper 3rd order')

%[r,p,k] = residue(cell2mat(sys_4_2.Numerator),cell2mat(sys_4_2.Denominator));
%sys_4_inv = tf(r(1),[1,-p(1)]);