function cb_edit_part_accept()

global irow irowbak refdesign
global check_ref_part
global partexist

if check_ref_part==1
  cb_edit_part_check;
end

if ~partexist
  irow=irow+1;

% initialize next row

  refdesign(irow,1)=refdesign(irow-1,2);
  refdesign(irow,2)=0.0;
  refdesign(irow,3)=refdesign(irow-1,4);
  refdesign(irow,4)=refdesign(irow,3)+1.0;
  refdesign(irow,5)=refdesign(irow-1,5);
  refdesign(irow,6)=refdesign(irow-1,6);
  refdesign(irow,7)=refdesign(irow-1,7);
else
  if irowbak>irow

%   correct for possibly shorter or longer part duration

    dt=refdesign(irow,2)-refdesign(irow+1,1);
    for i=irow+1:irowbak
      refdesign(i,1)=refdesign(i,1)+dt;
      refdesign(i,2)=refdesign(i,2)+dt;
    end
  end
end

close (gcf);

main_enable('repeat','on');
main_enable('jogmode','on');
main_enable('load','on');
main_enable('save','on');
main_enable('new','on');
main_enable('add','on');
main_enable('edit','on');
main_enable('del','on');
main_enable('accept','on');

hdl_edit_ref_axes_ref=findobj('Tag','tag_edit_ref_axes_ref');
axes(hdl_edit_ref_axes_ref);

if partexist
  irow=irowbak;
end
show_ref;

partexist=0;
