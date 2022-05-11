function fConvertGUI2R12(vGUIFileName)


%fConvertGUI2R12 convert a m/mat GUI to a m/fig GUI
%
%  fConvertGUI2R12(vGUIFileName)
%
%  Function for converting a m/mat GUI to a m/fig GUI.
%
%  Example: fConvertGUI2R12('MyGUI');
%
%  Author:     Dipl.-Ing. Andr€ Manfred Strobel
%  Copyright:  1999-2000 by DaimlerChrysler AG, FT1/AK
%  Matlab:     5.3, R11 (Win)
%  Date:       2000/08/15 11:00
%  Version:    001.00 * Released * / beta / alpha
%  Release:    Release 1.00


% define constants
cLeading = ['R12_']; % leading symbols in new name


% if not already open, open the GUI
try
 % open GUI
 eval(vGUIFileName);
catch
 % ADD_COMMENT_HERE
 error(['GUI couln''t be opened. Please use name with full path if necessary.'])
end % of try
vFigureHandle = gcf; % get handle to the new figure
if isempty(get(vFigureHandle, 'filename'))
 % the new figure was closed already
 close(gcf); % close the figure that was created during gcf command
 error(['Can''t convert figures that automatically close during the initialization callback. Please remove this callback and insert it again after the conversion.'])
end % of if


% convert the GUI
saveas(vFigureHandle, [cLeading, vGUIFileName], 'mfig'); % convert the
figure


% close the GUI
close(vFigureHandle);


% end of fConvertGUI2R12