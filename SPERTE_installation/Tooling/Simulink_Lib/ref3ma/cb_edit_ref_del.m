function cb_edit_ref_del()

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

hdl_tag_edit_ref_status=findobj('Tag','tag_edit_ref_status');
set(hdl_tag_edit_ref_status,'ForegroundColor',[1 0 0]);
set(hdl_tag_edit_ref_status,'String','Click at part to be deleted');

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

main_enable('repeat','on');
main_enable('jogmode','on');
main_enable('load','on');
main_enable('save','on');
main_enable('new','on');
main_enable('add','on');
main_enable('edit','on');
main_enable('del','on');
main_enable('accept','on');

irowbak=irow;
irow=i;

% delete row irow from refdesign

if irowbak==1
  cb_edit_ref_new;
else

  bakje=refdesign;
  refdesign=zeros(irowbak-1,7);
  k=1;
  for i=1:irowbak
    if i~=irow
      for j=1:7
        refdesign(k,j)=bakje(i,j);
      end
      k=k+1;
    end
  end

  irow=irowbak;

% one row was deleted
  irow=irow-1;

  if irow==1
    main_enable('new','off');
    main_enable('edit','off');
    main_enable('del','off');
    main_enable('accept','off');
  end

  show_ref;
end

set(hdl_tag_edit_ref_status,'ForegroundColor',[0 0.75 0]);
set(hdl_tag_edit_ref_status,'String','Waiting for button to be pressed');
