
clf;

disp('   Busy plotting reference trajectory...');

nref=size(ref,1);
iref=1;

for iref=1:nref,
  t0=ref(iref,2);
  if iref<nref
    te=ref(iref+1,2);
  else
    te=t0+3;
  end
  x0=ref(iref,1);
  xe=ref(iref,3);
  tdes=ref(iref,4);
  vdes=ref(iref,5);
  jerk=ref(iref,6);
  p2p_ini(x0,t0,xe,tdes,vdes,jerk);

  t=t0:0.01:te;
  nrt=max(size(t));

  r=zeros(nrt,1);
  v=zeros(nrt,1);
  a=zeros(nrt,1);

  for i=1:nrt,
    [r(i),v(i),a(i)]=p2p_get(t(i));
  end

  subplot(3,1,1)
  plot(t,r);
  if iref==1
    ylabel('Pos');
    title('3rd degree setpoint and time derivatives');
    grid on;
    hold on;
  end

  subplot(3,1,2);
  plot(t,v);
  if iref==1
    ylabel('Vel');
    grid on;
    hold on;
  end

  subplot(3,1,3);
  plot(t,a);
  if iref==1
    xlabel('Time   [s]');
    ylabel('Acc');
    grid on;
    hold on;
  end
end
shg;


