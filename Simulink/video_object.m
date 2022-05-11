classdef video_object < handle
    properties
        %Camera variables
        camera_h
        camera_adaptor_name
        camera_device_id
        camera_format
        camera_color_space
        imgin
        
        % Image filtering variables
        lb_hsv_y
        ub_hsv_y
        lb_hsv_b
        ub_hsv_b
        lb_hsv_r
        ub_hsv_r
        
        lb_hsv
        ub_hsv
        color
        
        % Blob filtering settings
        area
        centroid
        b_box
        ecc
        orientation
        
        % SIMULINK Realtime -> external mode
        roi_markers
        roi_boxes
        
        Ibw_org
        Ibw_fil
        
        centroid_markers
        centroid_boxes
        
        % Blob analysis variables
        blob_eccentricity_max
        blob_h
        
        % Object detection settings
        detect_markers
        detect_boxes
        detect_dis_markers
        number_of_objects
    end
    
    methods
        % Initialize the objects you want to detect and store all variables
        function obj = video_object(lb_hsv, ub_hsv, color)
            obj.lb_hsv = lb_hsv;
            obj.ub_hsv = ub_hsv;
            obj.color  = color;
            
            obj.area     = [];
            obj.centroid = [];
            obj.b_box    = [];
            obj.ecc      = [];
            
            obj.roi_markers       = [];
            obj.roi_boxes         = [];
            obj.centroid_markers  = [];
            obj.centroid_boxes    = [];
            
            obj.Ibw_org     = [];
            obj.Ibw_fil     = [];
            obj.roi_markers = [];
        end
        
        % Connect to the camera and store all variables
        function obj = camera_setting(obj, adaptor_name_in, device_id_in, format_in, color_space_in, ROI)
            obj.camera_h                      = imaq.VideoDevice(adaptor_name_in,device_id_in,format_in);
            obj.camera_h.DeviceProperties.ExposureMode = 'manual';
            obj.camera_h.DeviceProperties.WhiteBalanceMode = 'manual';
            obj.camera_h.DeviceProperties.Exposure = -4;
            obj.camera_h.DeviceProperties.Sharpness = 1;
            obj.camera_h.DeviceProperties.Saturation = 80;
            obj.camera_h.DeviceProperties.Gamma = 14;
            obj.camera_h.DeviceProperties.Gain = 0;
            obj.camera_h.DeviceProperties.Contrast = 40;
            obj.camera_h.ROI = ROI;
            obj.camera_h.ReturnedColorSpace   = color_space_in;
            obj.camera_adaptor_name           = adaptor_name_in;
            obj.camera_device_id              = device_id_in;
            obj.camera_format                 = format_in;
            obj.camera_color_space            = color_space_in;
        end
        
        % Initialize number of objects, distance between objects etc.
        function obj = object_setting(obj, detect_markers, detect_boxes, detect_dis_markers, number_of_objects)
            obj.detect_markers      = detect_markers;
            obj.detect_boxes        = detect_boxes;
            obj.detect_dis_markers  = detect_dis_markers;
            obj.number_of_objects   = number_of_objects;
        end
        
        function delete(obj)
            obj.camera_h.release();
        end
        
        % Set the blob parameters
        function obj = set_blob_variable(obj, min_blob_area_in, max_blob_area_in, blob_eccentricity_max_in)
            obj.blob_eccentricity_max = blob_eccentricity_max_in;
            obj.blob_h = vision.BlobAnalysis('AreaOutputPort', true, ... % Return the objects area
                'CentroidOutputPort', true, ...             % Return the coordinates of the objects centroid
                'BoundingBoxOutputPort', true, ...          % Return the coordinates of the objects bouding boxes
                'MajorAxisLengthOutputPort', false,...      % do not return major axis
                'MinorAxisLengthOutputPort', false,...      % do not return minor axis
                'OrientationOutputPort', true,...           % do not return orientation
                'EccentricityOutputPort', true,...          % return excentricities
                'MinimumBlobArea', min_blob_area_in, ...    % Set the objects minimum area
                'MaximumBlobArea', max_blob_area_in, ...    % Set the objects maximum area
                'MaximumCount', 10);                       % Set the maximum amount of objects
        end
        
        % Take a snapshot of the scene
        function [obj, imgin]        = take_snapshot(obj)
            imgin = obj.camera_h.step();
        end
        
        % Outputs the boolean version of the input image
        function [obj, Ibw_disk, Ibw_org]  = boolean_image(obj, plot_boolean, lb, ub, roi_image_in)
            Ihsv = rgb2hsv(roi_image_in);
            if lb < ub
                Ibw_org = (Ihsv(:,:,1) >= lb) & (Ihsv(:,:,1) <= ub);
                Ibw_org = (Ihsv(:,:,1) >= lb) & (Ihsv(:,:,1) <= ub) & (Ihsv(:,:,2) >= 0.1) & (Ihsv(:,:,2) <= 1);
            else
                Ibw_red_1 = (Ihsv(:,:,1) >= lb) & (Ihsv(:,:,1) <= 1.000)& (Ihsv(:,:,2) >= 0.7) & (Ihsv(:,:,2) <= 1)& (Ihsv(:,:,3) >= 0.7) & (Ihsv(:,:,3) <= 1);
                Ibw_red_2 = (Ihsv(:,:,1) >= 0.000) & (Ihsv(:,:,1) <= ub)& (Ihsv(:,:,2) >= 0.7) & (Ihsv(:,:,2) <= 1)& (Ihsv(:,:,3) >= 0.7) & (Ihsv(:,:,3) <= 1);
%                 Ibw_org_2 = (Ihsv(:,:,2) >= 0.1) & (Ihsv(:,:,2) <= 1);
                Ibw_org = Ibw_red_1+Ibw_red_2;
                Ibw_org = logical(mod(Ibw_org,2));
            end
            
            % Remove noisy pixels,
            diskElem = strel('disk', 5);
            Ibw_disk = imopen(Ibw_org,diskElem);
            
           
            if plot_boolean == 1
                 % Combine boolean version with original color
                Icolor = single(Ibw_disk).*roi_image_in;
                % Plot the boolean images
                figure(); axis on
                subplot(1,3,1)
                imshow(roi_image_in)
                title('Original Image')
                subplot(1,3,2)
                imshow(Ibw_org)
                title('Boolean Image')
                subplot(1,3,3)
                imshow(Ibw_disk)
                title('Disk image')
            elseif plot_boolean == 2
                Icolor = single(Ibw_disk).*roi_image_in;
                figure(5); axis on
                imshow(Icolor);
            end
        end
        
        % Perform the blob analysis
        function [obj, area, centroid, b_box, ecc, orientation] = perform_blob_analysis(obj, plot_boolean)
            [area,centroid,b_box,ecc,orientation] = obj.blob_h.step(plot_boolean);
        end
        
        % Perform the object detection
        function [obj, x, y,area, centroid, b_box, ecc, orientation] = perform_object_detection(obj, lb, ub, plots, file_name_simulink)
            imgin = obj.camera_h.step();
            [obj, Ibw_org, Ibw_fil]           = boolean_image(obj, 0, lb , ub, imgin);
            [obj, area, centroid, b_box, ecc, orientation] = perform_blob_analysis(obj, Ibw_org);
            
            % Returns the center points of the dots
            x = centroid(:,1);
            y = centroid(:,2);           
            
            
            if plots == 1
                Ishape_1 = insertShape(imgin,'circle',round([centroid,50*ones(length(centroid(:,1)),1)]),'LineWidth',5,'color', 'green');
                Ishape_1 = insertShape(Ishape_1,'rectangle',b_box,'LineWidth',5,'color', 'yellow');
                h_10 = figure(10);
                imshow(Ishape_1)
                if ishandle ( h_10 ) == false
                    delete(h_10)
                    set_param(file_name_simulink + "/Controller/Plot",'Value',"0") %send position to Simulink
                end 
            end
        end
    end
end
