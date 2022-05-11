function measurement = SPERTE_Measure_And_Collect(p,N_signals,N_samples,ModelName,ShowFigure)
%% SPERTE_Measure_And_Collect(p,N_signals,N_samples,ModelName,ShowFigure)
% Perform a new measurement and collect the resulting file
% Input Arguments
% (required) p = raspi() object
% (required) N_signals = number of signals, e.g., N_signals = 3
% (optional) N_samples = number of sampels to measure, default N_samples = 4000
% (optional) ModelName = model to get measurements form, default ModelName = gcs
% (optional) ShowFigure = show the new measurement in a new figure, default
% ShowFigure = 0
%
% Output arguments
% measurement = matrix of [N_samples,N_signals,N_measurements] of measurement data

% Copyright (C) 2021 Enzo Evers
% see www.enzoevers.nl for contact details
% 
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3
end