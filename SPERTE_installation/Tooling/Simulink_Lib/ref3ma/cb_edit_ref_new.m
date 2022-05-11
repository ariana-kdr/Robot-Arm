function cb_edit_ref_new()

global irow refdesign irepeat

% reinitialize variables
irow=1;
refdesign(1,1)=0.0;
refdesign(1,2)=0.0;
refdesign(1,3)=0.0;
refdesign(1,4)=1.0;
refdesign(1,5)=0.5;
refdesign(1,6)=1.0;
refdesign(1,7)=10.0;
hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
set(hdl_edit_ref_repeat,'Value',0);

main_enable('save','off');
main_enable('new','off');
main_enable('edit','off');
main_enable('del','off');
main_enable('accept','off');

% clear axes
cla;

