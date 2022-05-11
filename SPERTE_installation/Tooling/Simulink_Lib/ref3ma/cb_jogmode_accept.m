function cb_jogmode_accept()

global ref_part

hdl_jogmode_t0=findobj(gcf,'Tag','tag_jogmode_t0');
hdl_jogmode_x0=findobj(gcf,'Tag','tag_jogmode_x0');
hdl_jogmode_vel=findobj(gcf,'Tag','tag_jogmode_vel');

t0=str2num(get(hdl_jogmode_t0,'String'));
if t0<0
  t0=0;
  set(hdl_jogmode_t0,'String',num2str(t0));
end

x0=str2num(get(hdl_jogmode_x0,'String'));

vel=str2num(get(hdl_jogmode_vel,'String'));
if vel==0
  disp('Zero velocity not allowed, set to one.');
  vel=1.0;
end
ref_part=zeros(1,6);
ref_part(1,3)=1e10*sign(vel);
if vel<0
  vel=abs(vel);
  set(hdl_jogmode_vel,'String',num2str(vel));
end

ref_part(1,1)=x0;
ref_part(1,2)=t0;
ref_part(1,4)=vel;
ref_part(1,5)=0.1;
ref_part(1,6)=100000;

close(gcf);
close(gcf);
