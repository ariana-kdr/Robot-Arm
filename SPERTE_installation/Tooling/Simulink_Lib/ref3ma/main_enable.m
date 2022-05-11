function main_enable(control_name,control_enable)

switch control_name
case 'repeat'
  hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
  set(hdl_edit_ref_repeat,'Enable',control_enable);
case 'jogmode'
  hdl_edit_ref_jogmode=findobj('Tag','tag_edit_ref_jogmode');
  set(hdl_edit_ref_jogmode,'Enable',control_enable);
case 'load'
  hdl_edit_ref_load=findobj('Tag','tag_edit_ref_load');
  set(hdl_edit_ref_load,'Enable',control_enable);
case 'save'
  hdl_edit_ref_save=findobj('Tag','tag_edit_ref_save');
  set(hdl_edit_ref_save,'Enable',control_enable);
case 'new'
  hdl_edit_ref_new=findobj('Tag','tag_edit_ref_new');
  set(hdl_edit_ref_new,'Enable',control_enable);
case 'add'
  hdl_edit_ref_add=findobj('Tag','tag_edit_ref_add');
  set(hdl_edit_ref_add,'Enable',control_enable);
case 'edit'
  hdl_edit_ref_edit=findobj('Tag','tag_edit_ref_edit');
  set(hdl_edit_ref_edit,'Enable',control_enable);
case 'del'
  hdl_edit_ref_del=findobj('Tag','tag_edit_ref_del');
  set(hdl_edit_ref_del,'Enable',control_enable);
case 'accept'
  hdl_edit_ref_accept=findobj('Tag','tag_edit_ref_accept');
  set(hdl_edit_ref_accept,'Enable',control_enable);
end
