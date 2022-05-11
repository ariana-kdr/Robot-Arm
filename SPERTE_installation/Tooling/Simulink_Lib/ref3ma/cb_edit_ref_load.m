function cb_edit_ref_load()

global irow refdesign

main_enable('repeat','off');
main_enable('jogmode','off');
main_enable('load','off');
main_enable('save','off');
main_enable('new','off');
main_enable('add','off');
main_enable('edit','off');
main_enable('del','off');
main_enable('accept','off');

% ask file name
[filename,pathname]=uigetfile('*.r3g', 'Load');
pathname=sprintf('%s%s%s',char(39),pathname,char(39));

if filename~=0
% store present path
  present_path=cd;
  present_path=sprintf('%s%s%s',char(39),present_path,char(39));

% change path and read file
  eval(sprintf('cd %s',pathname));
  if filename~=0
    eval(sprintf('load -mat %s irow refdesign irepeat',filename))
  end

% restore path
  eval(sprintf('cd %s',present_path));

  show_ref;

  if irepeat
    hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
    set(hdl_edit_ref_repeat,'Value',1);
  else
    hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
    set(hdl_edit_ref_repeat,'Value',0);
  end
end

main_enable('repeat','on');
main_enable('jogmode','on');
main_enable('load','on');
main_enable('save','on');
main_enable('new','on');
main_enable('add','on');
main_enable('edit','on');
main_enable('del','on');
main_enable('accept','on');
