startx = 19;
time = outputstep.time - startx;
plot(time, outputstep.signals.values)
hold on
plot(time, inputstep.signals.values)
legend("Response", "Step input")


ylim([-0.1 0.4]) %change to correct positions
xlim([0.5 1.5]) %change to correct positions


title("Step response motor X")  %Change to correct motor
ylabel("angle (radians)")
xlabel("time (seconds)")


%title("Sine wave following motor R")  %Change to correct motor
% ylabel("angle (radians)")
% xlabel("time (seconds)")