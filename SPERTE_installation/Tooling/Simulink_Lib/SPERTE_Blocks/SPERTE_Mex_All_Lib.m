function SPERTE_Mex_All_Lib()
% SPERTE_Mex_All_Lib
%
% Input Arguments
% None
%
% Output arguments
% None
 
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
% Change to the script folder
cd(lib_install_dir);

% Add the sfunctions to path
addpath(genpath('./sfunctions/'));
% Change to it
cd(strcat(lib_install_dir,'/sfunctions/'));
% Mex all
cfiles = dir('./*.c');
for nf = 1:length(cfiles)
    filename = cfiles(nf).name;
    eval(['mex ', filename,' -silent']);
end
% Go back to previous folder
cd(current_dir)
end
