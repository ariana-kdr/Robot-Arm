function cb_edit_ref_save()

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

hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
irepeat=get(hdl_edit_ref_repeat,'Value');

% ask file name
[filename,pathname]=uiputfile('*.r3g', 'Save');
pathname=sprintf('%s%s%s',char(39),pathname,char(39));

if filename~=0
%   check filename for extension

  l=max(size(filename));
  isdot=filename(max(1,l-3));
  if strcmp(isdot,'.')
    filename=filename(1:l-4);
  end

% store present path
  present_path=cd;
  present_path=sprintf('%s%s%s',char(39),present_path,char(39));

% change path and write file
  eval(sprintf('cd %s',pathname));
  eval(sprintf('save %s.r3g irow refdesign irepeat',filename));

% restore path
  eval(sprintf('cd %s',present_path));
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
