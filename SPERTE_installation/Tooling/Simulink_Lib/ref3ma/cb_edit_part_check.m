function cb_edit_part_check()

global irow refdesign
global t0 te x0 xe vel acc jerk
global check_ref_part

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

% check user input

t0=str2num(get(hdl_edit_part_t0,'String'));
if t0<0
  t0=0;
  set(hdl_edit_part_t0,'String',num2str(t0));
end

x0=str2num(get(hdl_edit_part_x0,'String'));

xe=str2num(get(hdl_edit_part_xe,'String'));

vel=str2num(get(hdl_edit_part_vel,'String'));
if vel<0
  vel=abs(vel);
  set(hdl_edit_part_vel,'String',num2str(vel));
end

acc=str2num(get(hdl_edit_part_acc,'String'));
if acc<0
  acc=abs(acc);
  set(hdl_edit_part_acc,'String',num2str(acc));
end

jerk=str2num(get(hdl_edit_part_jerk,'String'));
if jerk<0
  jerk=abs(jerk);
  set(hdl_edit_part_jerk,'String',num2str(jerk));
end

% check if displacement is non-zero

if abs(xe-x0)>0.0

  ischedule=0;
  iready=0;

% check if acc can be reached

  while iready==0
    ttt=vel-(acc*acc)/jerk;
    if ttt>=0.0
      dt=2.0*acc/jerk+ttt/acc;
      iready=1;
    else
      acc=(floor(acc*0.999e4))/1e4;

      if ischedule==0
        set(hdl_edit_part_label_status,'ForegroundColor',[1 0 0]);
        set(hdl_edit_part_label_status,'String','Re-computing acceleration');
        disp('Acceleration too high for velocity.');
        ischedule=1;
      end
    end

    if iready==1

%     compute te

      iready=0;

      det=dt*dt*jerk*jerk-4.0*jerk*vel;
      if det<0.0
        det=0.d0;
      end
      delta=(dt*jerk-sqrt(det))/(2.0*jerk);
      gamma=dt-2.0*delta;
   
      dx=abs(xe-x0)-2.0*jerk*delta*delta*delta-3.0*jerk*delta*delta*gamma-jerk*delta*gamma*gamma;
 
      if dx>=0.0
        te=t0+2.0*dt+dx/vel;
        iready=1;
      else
        vel=(floor(vel*0.999e4))/1e4;
        if ischedule==0
          set(hdl_edit_part_label_status,'ForegroundColor',[1 0 0]);
          set(hdl_edit_part_label_status,'String','Re-computing velocity');
          disp('Velocity too high for displacement.')
          ischedule=1;
        end
      end
    end
  end

  refdesign(irow,1)=t0;
  refdesign(irow,2)=te;
  refdesign(irow,3)=x0;
  refdesign(irow,4)=xe;
  refdesign(irow,5)=vel;
  refdesign(irow,6)=acc;
  refdesign(irow,7)=jerk;

  set(hdl_edit_part_te,'String',num2str(te));
  set(hdl_edit_part_acc,'String',num2str(acc));
  set(hdl_edit_part_vel,'String',num2str(vel));

% mark the present setting 'checked'

  check_ref_part=0;
  set(hdl_edit_part_accept,'Enable','on');

% fill ref_part variable for visualization

  ref_part=zeros(1,6);
  ref_part(1,1)=x0;
  ref_part(1,2)=0.0;
  ref_part(1,3)=xe;
  ref_part(1,4)=vel;
  ref_part(1,5)=dt;
  ref_part(1,6)=jerk;
  save ref_part.mat ref_part;

% simulate ref3 simulink model

  set(hdl_edit_part_label_status,'ForegroundColor',[0 0.75 0]);
  set(hdl_edit_part_label_status,'String','Computing part');
  [t,x,y]=sim('edit_part',[0.0 te-t0]);
  t=t+t0;

% show result

% activate pos-axes

  hdl_edit_part_axes_pos=findobj(gcf,'Tag', 'tag_edit_part_axes_pos');
  axes(hdl_edit_part_axes_pos);

  cla;
  line(t,y(:,3));
  grid on;
  xlabel('t [s]');
  ylabel('pos [m or rad]');

% activate vel-axes

  hdl_edit_part_axes_vel=findobj(gcf,'Tag', 'tag_edit_part_axes_vel');
  axes(hdl_edit_part_axes_vel);

  cla;
  line(t,y(:,2));
  grid on;
  xlabel('t [s]');
  ylabel('vel [m/s or rad/s]');

% activate acc-axes

  hdl_edit_part_axes_acc=findobj(gcf,'Tag', 'tag_edit_part_axes_acc');
  axes(hdl_edit_part_axes_acc);

  cla;
  line(t,y(:,1));
  grid on;
  xlabel('t [s]');
  ylabel('acc [m/s^{2} or rad/s^{2}]');

% activate jerk-axes

  hdl_edit_part_axes_jerk=findobj(gcf,'Tag', 'tag_edit_part_axes_jerk');
  axes(hdl_edit_part_axes_jerk);

  cla;
  jt=diff(y(:,1));
  jt_end=jt(end);
  jt=[jt; jt_end]/(t(2)-t(1));
  line(t,jt);
  grid on;
  xlabel('t [s]');
  ylabel('jerk [m/s^{3} or rad/s^{3}]');
end

set(hdl_edit_part_label_status,'String','Waiting for input');
