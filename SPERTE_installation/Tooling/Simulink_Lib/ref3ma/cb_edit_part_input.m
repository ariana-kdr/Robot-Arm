function cb_edit_part_input()

global check_ref_part

hdl_edit_part_accept=findobj(gcf,'Tag','tag_edit_part_accept');
hdl_edit_part_autocheck=findobj(gcf,'Tag','tag_edit_part_autocheck');

check_ref_part=1;
set(hdl_edit_part_accept,'Enable','off');

if get(hdl_edit_part_autocheck,'Value')
  cb_edit_part_check;
end
