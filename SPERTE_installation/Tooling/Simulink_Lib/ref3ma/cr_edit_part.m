function cr_edit_part()

global irow refdesign

% get handles

hdl_edit_part_t0=findobj(gcf,'Tag','tag_edit_part_t0');
hdl_edit_part_te=findobj(gcf,'Tag','tag_edit_part_te');
hdl_edit_part_x0=findobj(gcf,'Tag','tag_edit_part_x0');
hdl_edit_part_xe=findobj(gcf,'Tag','tag_edit_part_xe');
hdl_edit_part_vel=findobj(gcf,'Tag','tag_edit_part_vel');
hdl_edit_part_acc=findobj(gcf,'Tag','tag_edit_part_acc');
hdl_edit_part_jerk=findobj(gcf,'Tag','tag_edit_part_jerk');
hdl_edit_part_label_status=findobj(gcf,'Tag','tag_edit_part_label_status');
hdl_edit_part_accept=findobj(gcf,'Tag','tag_edit_part_accept');
hdl_edit_part_autocheck=findobj(gcf,'Tag','tag_edit_part_autocheck');

% set values

set(hdl_edit_part_t0,'String',num2str(refdesign(irow,1)));
set(hdl_edit_part_te,'String',' ');
set(hdl_edit_part_x0,'String',num2str(refdesign(irow,3)));
set(hdl_edit_part_xe,'String',num2str(refdesign(irow,4)));
set(hdl_edit_part_vel,'String',num2str(refdesign(irow,5)));
set(hdl_edit_part_acc,'String',num2str(refdesign(irow,6)));
set(hdl_edit_part_jerk,'String',num2str(refdesign(irow,7)));
set(hdl_edit_part_label_status,'String','Status: waiting for input');
set(hdl_edit_part_accept,'Enable','off');
set(hdl_edit_part_autocheck,'Value',1);

cb_edit_part_check;
