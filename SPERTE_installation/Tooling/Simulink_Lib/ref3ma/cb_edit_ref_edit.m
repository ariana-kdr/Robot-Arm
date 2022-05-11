function cb_edit_ref_edit()

global irow irowbak refdesign
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

hdl_tag_edit_ref_status=findobj('Tag','tag_edit_ref_status');
set(hdl_tag_edit_ref_status,'ForegroundColor',[1 0 0]);
set(hdl_tag_edit_ref_status,'String','Click at part to be edited');

[tm ym]=ginput(1);
notfound=1;
i=1;
while notfound & (i<irow)
  if tm<refdesign(i,2)
    notfound=0;
  else
    i=i+1;
  end
end

irowbak=irow;
irow=i;
partexist=1;
cb_edit_ref_add;

set(hdl_tag_edit_ref_status,'ForegroundColor',[0 0.75 0]);
set(hdl_tag_edit_ref_status,'String','Waiting for button to be pressed');