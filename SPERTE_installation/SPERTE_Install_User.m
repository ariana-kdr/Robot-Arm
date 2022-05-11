function SPERTE_Install_User()
%% SPERTE_Install_User()
% Install the required files to connect to a SPERTE setup and make
% compatible models
%
% Inputs:
% none

% Copyright (C) 2021 Enzo Evers
% see www.enzoevers.nl for contact details
% 
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3

% Get the current dir
current_dir = pwd;
mfilepath = mfilename('fullpath');
[lib_install_dir,name,ext]  = fileparts(mfilepath);
% Change to the install script folder
cd(lib_install_dir)

% Check if Matlab is at least 9.5 / 2018b
if verLessThan('MATLAB','9.5')
    error('Your Matlab installation is outdated, please install at least R2018b');
end

% Opening the progress bar
wb = waitbar(0,'Installing the SPERTE Tooling.');
% Add the tooling
addpath(genpath('./Tooling/'));
% Add the examples
addpath(genpath('./Examples/'));
% Saving the path to make it permanent
savepath;

% Mexing message
waitbar(1/5,wb,'Compiling the Reference Generator.');
% Mex the REF3
cd('./Tooling/Simulink_Lib/ref3ma/')
mex 'ref3.c' -silent
mex 'ref3b.c' -silent
% Re-save the R2018b mdl
waitbar(2/5,wb,'Saving simulink models to correct version.');
load_system('edit_part_R2018b.mdl');
save_system('edit_part_R2018b','./edit_part.mdl');
close_system('edit_part_R2018b',0);
% Change to the install script folder
cd(lib_install_dir)

% Install the SPERTE Simulink lib and mex the dctools
waitbar(3/5,wb,'Installing the simulink library (This can take a few minutes).');
try bdclose('all'); catch, end
SPERTE_Install_Simulink_Library()
try bdclose('all'); catch, end

waitbar(5/5,wb,'Installation completed.');
try close(wb); catch, end

% Go back to previous folder
cd(current_dir)
disp('SPERTE Installation completed.');
end

