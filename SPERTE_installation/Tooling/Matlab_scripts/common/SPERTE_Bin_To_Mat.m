function results = SPERTE_Bin_To_Mat(file_list,N_signals,delete_file,precision)
%% result = SPERTE_Bin_To_Mat(file,N_signals,delete_file,precision)
% Convert a .bin measurement to .mat
%
% Input Arguments
% (required) file_list = list of filename, e.g., 'filescope0.bin' or cell array of [N_names x 1]
% (required) N_signals = number of signals, e.g., N_signals = 3
% (optional) delete_file = delete the .bin file? default delete_file = 0
% (optional) precision = numerical precision of the .bin file, default precision = 'single'
%
% Output arguments
% result = matrix of [N_samples,N_signals,N_measurements] of measurement data

% Copyright (C) 2021 Enzo Evers
% see www.enzoevers.nl for contact details
% 
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3
end