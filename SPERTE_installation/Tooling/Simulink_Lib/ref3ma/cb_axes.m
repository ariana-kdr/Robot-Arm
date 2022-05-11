function cb_axes(iaxis)

global irow refdesign irepeat
global ref_part
global axis_id;

global irow1 refdesign1 irepeat1
global irow2 refdesign2 irepeat2
global irow3 refdesign3 irepeat3
global irow4 refdesign4 irepeat4
global irow5 refdesign5 irepeat5
global irow6 refdesign6 irepeat6
global irow7 refdesign7 irepeat7
global irow8 refdesign8 irepeat8

axis_id=str2num(iaxis);

irow=1;
refdesign(1,1)=0.0;
refdesign(1,2)=0.0;
refdesign(1,3)=0.0;
refdesign(1,4)=1.0;
refdesign(1,5)=0.5;
refdesign(1,6)=1.0;
refdesign(1,7)=10.0;

for i=1:8
  if exist(sprintf('ref_part%d.mat',i),'file')
    eval(sprintf('load ref_part%d.mat',i));
    if i==axis_id
      eval(sprintf('ref_part=ref_part%d;',axis_id));
    end
  end
end

for i=1:8
  if exist(sprintf('r3gbak%d.mat',i),'file')
    eval(sprintf('load r3gbak%d.mat',i));
    if (i==axis_id)
      eval(sprintf('irow=irow%d;',axis_id));
      eval(sprintf('refdesign=refdesign%d;',axis_id));
      eval(sprintf('irepeat=irepeat%d;',axis_id));
    end
  end
end

close(gcf);

r3g_main;
