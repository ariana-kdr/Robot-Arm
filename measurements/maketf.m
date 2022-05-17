figure()
[h, hz] = tfestimate(Input,output,50,[],[],2048)
sys = frd(h,hz)
bode(sys)