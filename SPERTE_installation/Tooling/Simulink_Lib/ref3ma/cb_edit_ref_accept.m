
global irow refdesign irepeat
global ref_part
global axis_id

if irow>1

% if repeat add extra row

  hdl_edit_ref_repeat=findobj('Tag','tag_edit_ref_repeat');
  irepeat=get(hdl_edit_ref_repeat,'Value');
  if irepeat
    ref_part=[ref_part; 0.0 -1.0 0.0 0.0 0.0 0.0];
    save ref_part.mat ref_part;
  end
  save r3gbak irow refdesign irepeat;
end

close(gcf);

if exist('axis_id','var')
  load ref_part.mat;
  eval(sprintf('ref_part%d=ref_part;',axis_id));
  eval(sprintf('save ref_part%d ref_part%d;',axis_id,axis_id));

  eval(sprintf('irow%d=irow;',axis_id));
  eval(sprintf('refdesign%d=refdesign;',axis_id));
  eval(sprintf('irepeat%d=irepeat;',axis_id));
  eval(sprintf('save r3gbak%d irow%d refdesign%d irepeat%d;',axis_id,axis_id,axis_id,axis_id));
end

