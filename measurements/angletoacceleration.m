velo = [];
for out = 1:length(output)-1
    velo(out) = output(out+1)-output(out);
end
velo(length(output)) = 0;

for out = 1:length(output)-1
    accel(out) = velo(out+1)-velo(out);
end

accel(length(output)) = 0;



tfestimate(Input,accel,1000,[],[],2048)
