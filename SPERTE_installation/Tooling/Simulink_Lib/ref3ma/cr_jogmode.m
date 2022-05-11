function cr_jogmode()

global irow refdesign

% get handles

hdl_jogmode_t0=findobj(gcf,'Tag','tag_jogmode_t0');
hdl_jogmode_x0=findobj(gcf,'Tag','tag_jogmode_x0');
hdl_jogmode_vel=findobj(gcf,'Tag','tag_jogmode_vel');

% set values

set(hdl_jogmode_t0,'String',num2str(refdesign(irow,1)));
set(hdl_jogmode_x0,'String',num2str(refdesign(irow,3)));
set(hdl_jogmode_vel,'String',num2str(refdesign(irow,5)));
