function blkStruct = slblocks
% This function specifies that the library should appear
% in the Library Browser
% and be cached in the browser repository
 
% Copyright (C) 2021 Enzo Evers
% see www.enzoevers.nl for contact details
%
% Control Systems Technology group
% Departement of Mechanical Engineering
% Eindhoven University of Technology
% 
% SPERTE is licensed under the GNU GPLv3

Browser.Library = 'sperte_lib';
% 'sperte_lib' is the name of the library

Browser.Name = 'SPERTE project library';

blkStruct.Browser = Browser;