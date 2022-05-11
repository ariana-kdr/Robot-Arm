
global irow refdesign
global ref_part

if irow>1
  ref=zeros(irow-1,6);
  for i=1:irow-1
    ref(i,1)=refdesign(i,3);
    ref(i,2)=refdesign(i,1);
    ref(i,3)=refdesign(i,4);
    ref(i,4)=refdesign(i,5);

    vel=refdesign(i,5);
    acc=refdesign(i,6);
    jerk=refdesign(i,7);

    ttt=vel-(acc*acc)/jerk;
    dt=2.0*acc/jerk+ttt/acc;

    ref(i,5)=dt;
    ref(i,6)=refdesign(i,7);
  end

  ref_part=ref;
  save ref_part.mat ref_part;
  [t,x,y]=sim('edit_part',[0.0 refdesign(irow-1,2)]);
  cla;
  line(t,y(:,3));
  grid on;
  xlabel('t [s]');
  ylabel('pos [m or rad]');
else
  cla;
end