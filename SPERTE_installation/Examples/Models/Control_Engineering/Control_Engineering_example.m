% Copyright (C) 2021 Max van Meer
% see www.maxvanmeer.nl for contact details
%
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3

% How many samples to measure?
N_samples = 40e3;

% Model should be Reference_model_Control_Engineering or change it if you renamed the
% model
ModelName = 'Reference_model_Control_Engineering';
% Check if the model is running, makes no sense to measure otherwise.
if ~strcmp(get_param(ModelName,'SimulationStatus'),'external')
   warning('The model is not running, can not perform a measurement.');
   return
end
% Get the noise block
BlockPaths = find_system(ModelName);
% Get the correct string
Index_noise = find(contains(BlockPaths,'Noise'));
% If we have more than 1 index, this means duplicate blocks, should not
% happen! Give a warning, and then try to trigger the first.
if length(Index_noise) > 1
    warning('There appear to be duplicate noise blocks in your model. Please remove all duplicate blocks.');
    Index_noise = Index_noise(1);
end

fprintf(['Starting measurement with white noise on the disturbance.\n',...
    'If you are planning on doing an FRF measurement, \n',...
    'think carefully about the signals you need and consider open/closed loop.\n']);

% Set the variance of the noise to 0.1
set_param(BlockPaths{Index_noise},'variance','0.1');
pause(0.1);

% Do the measurement
% How many signals do you need to record?
N_signals = 2;
measurement = SPERTE_Measure_And_Collect(p,N_signals,N_samples,ModelName);
pause(0.1);

% Turn of the noise
set_param(BlockPaths{Index_noise},'variance','0')

% By default the two signals being logged into the Measurement Block 
% are d and y
% Input
d = measurement(:,1);
% Output
y = measurement(:,2);

% Plot the measurement
figure(1); clf(1);
stairs(d); hold on; stairs(y);
xlabel('Time [s]'); ylabel('Signal [volt,rad]');



