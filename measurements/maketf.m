window = hann(2048); 
noverlap = 2048/2;
nfft = 2048;
fs = 2048;

 
[tf_R, f] = tfestimate(InputR,outputR,window,noverlap,nfft,fs);
[tf_X, f] = tfestimate(InputX,outputX,window,noverlap,nfft,fs);
[tf_Z, f] = tfestimate(InputZ,outputZ,window,noverlap,nfft,fs);

Frd_R = frd(tf_R, f);
Frd_X = frd(tf_X, f);
Frd_Z = frd(tf_Z, f);

opts = bodeoptions;
opts.PhaseWrapping = 'on';

figure(1)
bode(Frd_R, opts)
title('Frequency response motor R')
figure(2)
bode(Frd_X, opts)
title('Frequency response motor X')
figure(3)
bode(Frd_Z, opts)
title('Frequency response motor Z')
 

