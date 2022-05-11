function cb_edit_ref_jogmode()

clear refdesign;

global irow refdesign
global partexist

main_enable('repeat','off');
main_enable('jogmode','off');
main_enable('load','off');
main_enable('save','off');
main_enable('new','off');
main_enable('add','off');
main_enable('edit','off');
main_enable('del','off');
main_enable('accept','off');

partexist=0;
irow=1;

% initialize refdesign matrix

% t0, te, x0, xe, vel, acc, jerk

refdesign(1,1)=0.0;
refdesign(1,2)=0.0;
refdesign(1,3)=0.0;
refdesign(1,5)=1.0;
refdesign(1,6)=1000.0;
refdesign(1,7)=10000.0;

r3g_jogmode;
cr_jogmode;
