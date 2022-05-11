function SPERTE_postGenFunc(h,buildInfo)
%% SPERTEpostGenFunc(h,buildInfo)
% Adds the EC lib to the linker flags
%
% WARNING - There is never a need to call this function yourself. It is
% automatically added when you use SPERTE_New_Model.m
% Through set_param(gcs,'PostCodeGenCommand','SPERTE_postGenFunc(h,buildInfo)');
%
% Input Arguments
% (required) h
% (required) buildInfo

% Copyright (C) 2021 Enzo Evers
% see www.enzoevers.nl for contact details
% 
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3

% Add here a function to be called before Makefile generation
codertarget.postCodeGenHookCommand(h)
linkFlags={'-lec'};
addLinkFlags(buildInfo,linkFlags);
% save('SPERTEbuildInfo.mat','buildInfo','h');