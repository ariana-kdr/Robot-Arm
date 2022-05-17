  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_Student_2021_v1_P)
    ;%
      section.nData     = 257;
      section.data(257)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScaled
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScal_p
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScal_i
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_P.CompareToConstant_const
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_P.ReferenceR_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_P.Suck_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_P.Blow_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_P.Angle_Y0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_P.Conveyor_Y0
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_Student_2021_v1_P.Vacuum_Y0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_Student_2021_v1_P.Blowsuck_Y0
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_Student_2021_v1_P.xynproducts_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Robot_Student_2021_v1_P.ReferenceX_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 17;
	
	  ;% Robot_Student_2021_v1_P.FeedfowardZ_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 18;
	
	  ;% Robot_Student_2021_v1_P.ReferenceZ_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 19;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 20;
	
	  ;% Robot_Student_2021_v1_P.FeedfowardX_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 21;
	
	  ;% Robot_Student_2021_v1_P.RandomNumber_Mean
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 22;
	
	  ;% Robot_Student_2021_v1_P.RandomNumber_StdDev
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 23;
	
	  ;% Robot_Student_2021_v1_P.RandomNumber_Seed
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_g
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 25;
	
	  ;% Robot_Student_2021_v1_P.FeedfowardR_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 26;
	
	  ;% Robot_Student_2021_v1_P.Discreteintegrator_gainval
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 27;
	
	  ;% Robot_Student_2021_v1_P.Discreteintegrator_IC
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 28;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_gq
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 29;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P1_Size
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 30;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P1
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 32;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P2_Size
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 33;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P2
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 35;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 36;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 38;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 39;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 41;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 42;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 44;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 45;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 47;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 48;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 50;
	
	  ;% Robot_Student_2021_v1_P.Conveyorspeedmms_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 51;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 52;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 53;
	
	  ;% Robot_Student_2021_v1_P.ReferenceVacuumbar_Value
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 54;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_b
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 55;
	
	  ;% Robot_Student_2021_v1_P.Color_Value
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 56;
	
	  ;% Robot_Student_2021_v1_P.Plot_Value
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 57;
	
	  ;% Robot_Student_2021_v1_P.Stop_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 58;
	
	  ;% Robot_Student_2021_v1_P.Gain5_Gain
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 59;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch2_Threshold
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 60;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch1_Threshold
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 61;
	
	  ;% Robot_Student_2021_v1_P.Kfc_Gain
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 62;
	
	  ;% Robot_Student_2021_v1_P.Kfa_Gain
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 63;
	
	  ;% Robot_Student_2021_v1_P.Kfv_Gain
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 64;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat_i
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 65;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat_m
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 66;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 67;
	
	  ;% Robot_Student_2021_v1_P.Kfc_Gain_b
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 68;
	
	  ;% Robot_Student_2021_v1_P.Kfa_Gain_g
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 69;
	
	  ;% Robot_Student_2021_v1_P.Kfv_Gain_c
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 70;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_o
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 71;
	
	  ;% Robot_Student_2021_v1_P.Kfc_Gain_g
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 72;
	
	  ;% Robot_Student_2021_v1_P.Kfa_Gain_j
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 73;
	
	  ;% Robot_Student_2021_v1_P.Kfv_Gain_f
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 74;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_j
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 75;
	
	  ;% Robot_Student_2021_v1_P.SFunction_P1_Size
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 76;
	
	  ;% Robot_Student_2021_v1_P.SFunction_P1
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 78;
	
	  ;% Robot_Student_2021_v1_P.SFunction_P2_Size
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 79;
	
	  ;% Robot_Student_2021_v1_P.SFunction_P2
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 81;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1_Size
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 82;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 84;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_p
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 85;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_c
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 86;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1_Size_o
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 87;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1_i
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 89;
	
	  ;% Robot_Student_2021_v1_P.Gain2_Gain
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 90;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1_Size_m
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 91;
	
	  ;% Robot_Student_2021_v1_P.ec_Ebox_P1_e
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 93;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_d
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 94;
	
	  ;% Robot_Student_2021_v1_P.Gain3_Gain
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 95;
	
	  ;% Robot_Student_2021_v1_P.Gain6_Gain
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 96;
	
	  ;% Robot_Student_2021_v1_P.Constant_Value
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 97;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainval
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 98;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 99;
	
	  ;% Robot_Student_2021_v1_P.Constant1_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 100;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_b
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 101;
	
	  ;% Robot_Student_2021_v1_P.Constant_Value_g
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 102;
	
	  ;% Robot_Student_2021_v1_P.UnitDelay_InitialCondition
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 103;
	
	  ;% Robot_Student_2021_v1_P.set_robot_calibration_r_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 104;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_a
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 105;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_i
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 106;
	
	  ;% Robot_Student_2021_v1_P.Constant1_Value_c
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 107;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_i
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 108;
	
	  ;% Robot_Student_2021_v1_P.Constant_Value_n
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 109;
	
	  ;% Robot_Student_2021_v1_P.set_robot_calibration_x_Value
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 110;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainv_ip
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 111;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_d
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 112;
	
	  ;% Robot_Student_2021_v1_P.Constant1_Value_e
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 113;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_n
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 114;
	
	  ;% Robot_Student_2021_v1_P.Constant_Value_p
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 115;
	
	  ;% Robot_Student_2021_v1_P.set_robot_calibration_z_Value
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 116;
	
	  ;% Robot_Student_2021_v1_P.EnableVentiel_Value
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 117;
	
	  ;% Robot_Student_2021_v1_P.Constant1_Value_f
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 125;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_j
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 126;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_ph
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 127;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1_Size
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 128;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 130;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2_Size
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 131;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 133;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_p
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 134;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_c
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 136;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_p
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 137;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_i
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 139;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_c
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 140;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_m
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 142;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_f
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 143;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_m
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 145;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_g
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 146;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_l
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 148;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_ju
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 149;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_n
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 150;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_p
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 152;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_b
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 153;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_o
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 155;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_d
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 156;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_c
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 158;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_p
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 159;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_d
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 161;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_gi
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 162;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_n
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 164;
	
	  ;% Robot_Student_2021_v1_P.Voltagemiddle_Value
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 165;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_h
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 166;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1_Size_c
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 167;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1_h
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 169;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2_Size_j
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 170;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2_c
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 172;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_ph
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 173;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_f
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 175;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_l
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 176;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_p
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 178;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_j
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 179;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_f
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 181;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_m
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 182;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_do
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 184;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_i
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 185;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_nr
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 187;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_d
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 188;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_b
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 189;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_j
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 191;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_o
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 192;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_b
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 194;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_a
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 195;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_g
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 197;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_i
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 198;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_db
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 200;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_j
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 201;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_ns
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 203;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat_k
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 204;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat_i
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 205;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat_j
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 206;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat_f
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 207;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_ps
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 208;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_d
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 209;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1_Size_j
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 210;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P1_d
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 212;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2_Size_n
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 213;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator_P2_f
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 215;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_o
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 216;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_g
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 218;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_o4
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 219;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_e
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 221;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_l
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 222;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_mc
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 224;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_g
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 225;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_a
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 227;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_p
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 228;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_o
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 230;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_pq
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 231;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_f
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 232;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_h
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 234;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_d
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 235;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_l
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 237;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_p
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 238;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_l
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 240;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_d
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 241;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_g
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 243;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_k
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 244;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_f
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 246;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_c
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 247;
	
	  ;% Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_f
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 248;
	
	  ;% Robot_Student_2021_v1_P.Gain1_Gain_p
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 249;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P1_Size_e
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 250;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P1_e
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 252;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P2_Size_i
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 253;
	
	  ;% Robot_Student_2021_v1_P.Dctintegrator3_P2_a
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 255;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_ph
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 256;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P1_j
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 258;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_p0
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 259;
	
	  ;% Robot_Student_2021_v1_P.Dct1lowpass_P2_p
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 261;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_Size_pu
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 262;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P1_je
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 264;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_Size_n
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 265;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P2_m
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 267;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_Size_f
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 268;
	
	  ;% Robot_Student_2021_v1_P.Dctleadlag_P3_i
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 270;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_c
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 271;
	
	  ;% Robot_Student_2021_v1_P.Gain4_Gain
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 272;
	
	  ;% Robot_Student_2021_v1_P.Saturation1_UpperSat
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 273;
	
	  ;% Robot_Student_2021_v1_P.Saturation1_LowerSat
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 274;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat_g
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 275;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat_g
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 276;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_m
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 277;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch1_Threshol_k
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 278;
	
	  ;% Robot_Student_2021_v1_P.Saturation2_UpperSat
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 279;
	
	  ;% Robot_Student_2021_v1_P.Saturation2_LowerSat
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 280;
	
	  ;% Robot_Student_2021_v1_P.Saturation_UpperSat_a
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 281;
	
	  ;% Robot_Student_2021_v1_P.Saturation_LowerSat_c
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 282;
	
	  ;% Robot_Student_2021_v1_P.UnitDelay1_InitialCondition
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 283;
	
	  ;% Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_f
	  section.data(219).logicalSrcIdx = 218;
	  section.data(219).dtTransOffset = 284;
	
	  ;% Robot_Student_2021_v1_P.Gain_Gain_l
	  section.data(220).logicalSrcIdx = 219;
	  section.data(220).dtTransOffset = 285;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderR_P1_Size
	  section.data(221).logicalSrcIdx = 220;
	  section.data(221).dtTransOffset = 286;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderR_P1
	  section.data(222).logicalSrcIdx = 221;
	  section.data(222).dtTransOffset = 288;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderR_P2_Size
	  section.data(223).logicalSrcIdx = 222;
	  section.data(223).dtTransOffset = 289;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderR_P2
	  section.data(224).logicalSrcIdx = 223;
	  section.data(224).dtTransOffset = 291;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_RisingLim
	  section.data(225).logicalSrcIdx = 224;
	  section.data(225).dtTransOffset = 292;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_FallingLim
	  section.data(226).logicalSrcIdx = 225;
	  section.data(226).dtTransOffset = 293;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_IC
	  section.data(227).logicalSrcIdx = 226;
	  section.data(227).dtTransOffset = 294;
	
	  ;% Robot_Student_2021_v1_P.TSamp_WtEt
	  section.data(228).logicalSrcIdx = 227;
	  section.data(228).dtTransOffset = 295;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_RisingLim
	  section.data(229).logicalSrcIdx = 228;
	  section.data(229).dtTransOffset = 296;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_FallingLim
	  section.data(230).logicalSrcIdx = 229;
	  section.data(230).dtTransOffset = 297;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_IC
	  section.data(231).logicalSrcIdx = 230;
	  section.data(231).dtTransOffset = 298;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P1_Size
	  section.data(232).logicalSrcIdx = 231;
	  section.data(232).dtTransOffset = 299;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P1
	  section.data(233).logicalSrcIdx = 232;
	  section.data(233).dtTransOffset = 301;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P2_Size
	  section.data(234).logicalSrcIdx = 233;
	  section.data(234).dtTransOffset = 302;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P2
	  section.data(235).logicalSrcIdx = 234;
	  section.data(235).dtTransOffset = 304;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_RisingLim_d
	  section.data(236).logicalSrcIdx = 235;
	  section.data(236).dtTransOffset = 305;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_FallingLim_j
	  section.data(237).logicalSrcIdx = 236;
	  section.data(237).dtTransOffset = 306;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_IC_g
	  section.data(238).logicalSrcIdx = 237;
	  section.data(238).dtTransOffset = 307;
	
	  ;% Robot_Student_2021_v1_P.TSamp_WtEt_h
	  section.data(239).logicalSrcIdx = 238;
	  section.data(239).dtTransOffset = 308;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_c
	  section.data(240).logicalSrcIdx = 239;
	  section.data(240).dtTransOffset = 309;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_m
	  section.data(241).logicalSrcIdx = 240;
	  section.data(241).dtTransOffset = 310;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_IC_f
	  section.data(242).logicalSrcIdx = 241;
	  section.data(242).dtTransOffset = 311;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P1_Size_k
	  section.data(243).logicalSrcIdx = 242;
	  section.data(243).dtTransOffset = 312;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P1_j
	  section.data(244).logicalSrcIdx = 243;
	  section.data(244).dtTransOffset = 314;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P2_Size_k
	  section.data(245).logicalSrcIdx = 244;
	  section.data(245).dtTransOffset = 315;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderX_P2_j
	  section.data(246).logicalSrcIdx = 245;
	  section.data(246).dtTransOffset = 317;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_RisingLim_m
	  section.data(247).logicalSrcIdx = 246;
	  section.data(247).dtTransOffset = 318;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_FallingLim_jw
	  section.data(248).logicalSrcIdx = 247;
	  section.data(248).dtTransOffset = 319;
	
	  ;% Robot_Student_2021_v1_P.LimitSpeed_IC_j
	  section.data(249).logicalSrcIdx = 248;
	  section.data(249).dtTransOffset = 320;
	
	  ;% Robot_Student_2021_v1_P.TSamp_WtEt_i
	  section.data(250).logicalSrcIdx = 249;
	  section.data(250).dtTransOffset = 321;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_j
	  section.data(251).logicalSrcIdx = 250;
	  section.data(251).dtTransOffset = 322;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_h
	  section.data(252).logicalSrcIdx = 251;
	  section.data(252).dtTransOffset = 323;
	
	  ;% Robot_Student_2021_v1_P.LimitAcceleration_IC_j
	  section.data(253).logicalSrcIdx = 252;
	  section.data(253).dtTransOffset = 324;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderConv_P1_Size
	  section.data(254).logicalSrcIdx = 253;
	  section.data(254).dtTransOffset = 325;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderConv_P1
	  section.data(255).logicalSrcIdx = 254;
	  section.data(255).dtTransOffset = 327;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderConv_P2_Size
	  section.data(256).logicalSrcIdx = 255;
	  section.data(256).dtTransOffset = 328;
	
	  ;% Robot_Student_2021_v1_P.ResetEncoderConv_P2
	  section.data(257).logicalSrcIdx = 256;
	  section.data(257).dtTransOffset = 330;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_P.LEDRing_Y0
	  section.data(1).logicalSrcIdx = 257;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_P.Colorspecifiedin8hexdigitswwrrg
	  section.data(2).logicalSrcIdx = 258;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_P.Defaultobjectdetectioncolorsett
	  section.data(3).logicalSrcIdx = 259;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_P.StringConstant3_String
	  section.data(4).logicalSrcIdx = 260;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_P.StringConstant1_String
	  section.data(5).logicalSrcIdx = 261;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_P.StringConstant4_String
	  section.data(6).logicalSrcIdx = 262;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_P.ReadyGreen_String
	  section.data(7).logicalSrcIdx = 263;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_P.AirbagRed_String
	  section.data(8).logicalSrcIdx = 264;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_P.HomingOrange_String
	  section.data(9).logicalSrcIdx = 265;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_Student_2021_v1_P.Delay_InitialCondition
	  section.data(10).logicalSrcIdx = 266;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_P.ManualSwitch2_CurrentSetting
	  section.data(1).logicalSrcIdx = 267;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_P.ManualSwitch_CurrentSetting
	  section.data(2).logicalSrcIdx = 268;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_P.ManualSwitch1_CurrentSetting
	  section.data(3).logicalSrcIdx = 269;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_P.Constant1_Value_b
	  section.data(4).logicalSrcIdx = 270;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_P.Constant_Value_c
	  section.data(5).logicalSrcIdx = 271;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_Student_2021_v1_B)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o3
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.ManualSwitch1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 114;
      section.data(114)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.SFunction
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o1
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o2
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o1_o
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o2_o
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o3_l
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 9;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o1_d
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 17;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o2_j
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 19;
	
	  ;% Robot_Student_2021_v1_B.ec_Ebox_o3_k
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 21;
	
	  ;% Robot_Student_2021_v1_B.HomingRunningSwitch
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 29;
	
	  ;% Robot_Student_2021_v1_B.Gain3
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 32;
	
	  ;% Robot_Student_2021_v1_B.Gain6
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 33;
	
	  ;% Robot_Student_2021_v1_B.Constant1
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 34;
	
	  ;% Robot_Student_2021_v1_B.Sum
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 35;
	
	  ;% Robot_Student_2021_v1_B.set_robot_calibration_r
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 36;
	
	  ;% Robot_Student_2021_v1_B.Constant1_c
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 37;
	
	  ;% Robot_Student_2021_v1_B.Sum_a
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 38;
	
	  ;% Robot_Student_2021_v1_B.set_robot_calibration_x
	  section.data(18).logicalSrcIdx = 19;
	  section.data(18).dtTransOffset = 39;
	
	  ;% Robot_Student_2021_v1_B.Constant1_k
	  section.data(19).logicalSrcIdx = 20;
	  section.data(19).dtTransOffset = 40;
	
	  ;% Robot_Student_2021_v1_B.Sum_g
	  section.data(20).logicalSrcIdx = 21;
	  section.data(20).dtTransOffset = 41;
	
	  ;% Robot_Student_2021_v1_B.set_robot_calibration_z
	  section.data(21).logicalSrcIdx = 22;
	  section.data(21).dtTransOffset = 42;
	
	  ;% Robot_Student_2021_v1_B.Add1
	  section.data(22).logicalSrcIdx = 23;
	  section.data(22).dtTransOffset = 43;
	
	  ;% Robot_Student_2021_v1_B.Assignment
	  section.data(23).logicalSrcIdx = 24;
	  section.data(23).dtTransOffset = 44;
	
	  ;% Robot_Student_2021_v1_B.Gain
	  section.data(24).logicalSrcIdx = 25;
	  section.data(24).dtTransOffset = 52;
	
	  ;% Robot_Student_2021_v1_B.Derivative
	  section.data(25).logicalSrcIdx = 26;
	  section.data(25).dtTransOffset = 54;
	
	  ;% Robot_Student_2021_v1_B.Gain_c
	  section.data(26).logicalSrcIdx = 27;
	  section.data(26).dtTransOffset = 55;
	
	  ;% Robot_Student_2021_v1_B.Dctintegrator
	  section.data(27).logicalSrcIdx = 28;
	  section.data(27).dtTransOffset = 56;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag
	  section.data(28).logicalSrcIdx = 29;
	  section.data(28).dtTransOffset = 57;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass
	  section.data(29).logicalSrcIdx = 30;
	  section.data(29).dtTransOffset = 58;
	
	  ;% Robot_Student_2021_v1_B.Gain_f
	  section.data(30).logicalSrcIdx = 31;
	  section.data(30).dtTransOffset = 59;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_j
	  section.data(31).logicalSrcIdx = 32;
	  section.data(31).dtTransOffset = 60;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_n
	  section.data(32).logicalSrcIdx = 33;
	  section.data(32).dtTransOffset = 61;
	
	  ;% Robot_Student_2021_v1_B.Derivative_i
	  section.data(33).logicalSrcIdx = 34;
	  section.data(33).dtTransOffset = 62;
	
	  ;% Robot_Student_2021_v1_B.Gain1
	  section.data(34).logicalSrcIdx = 35;
	  section.data(34).dtTransOffset = 63;
	
	  ;% Robot_Student_2021_v1_B.Dctintegrator_i
	  section.data(35).logicalSrcIdx = 36;
	  section.data(35).dtTransOffset = 64;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_n
	  section.data(36).logicalSrcIdx = 37;
	  section.data(36).dtTransOffset = 65;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_f
	  section.data(37).logicalSrcIdx = 38;
	  section.data(37).dtTransOffset = 66;
	
	  ;% Robot_Student_2021_v1_B.Gain1_p
	  section.data(38).logicalSrcIdx = 39;
	  section.data(38).dtTransOffset = 67;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_e
	  section.data(39).logicalSrcIdx = 40;
	  section.data(39).dtTransOffset = 68;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_o
	  section.data(40).logicalSrcIdx = 41;
	  section.data(40).dtTransOffset = 69;
	
	  ;% Robot_Student_2021_v1_B.Saturation
	  section.data(41).logicalSrcIdx = 42;
	  section.data(41).dtTransOffset = 70;
	
	  ;% Robot_Student_2021_v1_B.Gain_h
	  section.data(42).logicalSrcIdx = 43;
	  section.data(42).dtTransOffset = 72;
	
	  ;% Robot_Student_2021_v1_B.Derivative_n
	  section.data(43).logicalSrcIdx = 44;
	  section.data(43).dtTransOffset = 74;
	
	  ;% Robot_Student_2021_v1_B.Gain_e
	  section.data(44).logicalSrcIdx = 45;
	  section.data(44).dtTransOffset = 75;
	
	  ;% Robot_Student_2021_v1_B.Dctintegrator_g
	  section.data(45).logicalSrcIdx = 46;
	  section.data(45).dtTransOffset = 76;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_eg
	  section.data(46).logicalSrcIdx = 47;
	  section.data(46).dtTransOffset = 77;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_ft
	  section.data(47).logicalSrcIdx = 48;
	  section.data(47).dtTransOffset = 78;
	
	  ;% Robot_Student_2021_v1_B.Gain_i
	  section.data(48).logicalSrcIdx = 49;
	  section.data(48).dtTransOffset = 79;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_i
	  section.data(49).logicalSrcIdx = 50;
	  section.data(49).dtTransOffset = 80;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_a
	  section.data(50).logicalSrcIdx = 51;
	  section.data(50).dtTransOffset = 81;
	
	  ;% Robot_Student_2021_v1_B.DiscreteTimeIntegrator
	  section.data(51).logicalSrcIdx = 52;
	  section.data(51).dtTransOffset = 82;
	
	  ;% Robot_Student_2021_v1_B.Gain1_n
	  section.data(52).logicalSrcIdx = 53;
	  section.data(52).dtTransOffset = 83;
	
	  ;% Robot_Student_2021_v1_B.Dctintegrator3
	  section.data(53).logicalSrcIdx = 54;
	  section.data(53).dtTransOffset = 84;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_p
	  section.data(54).logicalSrcIdx = 55;
	  section.data(54).dtTransOffset = 85;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_f
	  section.data(55).logicalSrcIdx = 56;
	  section.data(55).dtTransOffset = 86;
	
	  ;% Robot_Student_2021_v1_B.Sum1
	  section.data(56).logicalSrcIdx = 57;
	  section.data(56).dtTransOffset = 87;
	
	  ;% Robot_Student_2021_v1_B.Saturation_n
	  section.data(57).logicalSrcIdx = 58;
	  section.data(57).dtTransOffset = 88;
	
	  ;% Robot_Student_2021_v1_B.Gain_ii
	  section.data(58).logicalSrcIdx = 59;
	  section.data(58).dtTransOffset = 90;
	
	  ;% Robot_Student_2021_v1_B.Saturation_a
	  section.data(59).logicalSrcIdx = 60;
	  section.data(59).dtTransOffset = 92;
	
	  ;% Robot_Student_2021_v1_B.jogSpeed
	  section.data(60).logicalSrcIdx = 61;
	  section.data(60).dtTransOffset = 94;
	
	  ;% Robot_Student_2021_v1_B.homeControllerEnabled
	  section.data(61).logicalSrcIdx = 62;
	  section.data(61).dtTransOffset = 95;
	
	  ;% Robot_Student_2021_v1_B.resetEnc
	  section.data(62).logicalSrcIdx = 63;
	  section.data(62).dtTransOffset = 96;
	
	  ;% Robot_Student_2021_v1_B.homingBusy
	  section.data(63).logicalSrcIdx = 64;
	  section.data(63).dtTransOffset = 97;
	
	  ;% Robot_Student_2021_v1_B.Ready
	  section.data(64).logicalSrcIdx = 65;
	  section.data(64).dtTransOffset = 98;
	
	  ;% Robot_Student_2021_v1_B.StopSim
	  section.data(65).logicalSrcIdx = 66;
	  section.data(65).dtTransOffset = 99;
	
	  ;% Robot_Student_2021_v1_B.jogSpeed_a
	  section.data(66).logicalSrcIdx = 67;
	  section.data(66).dtTransOffset = 100;
	
	  ;% Robot_Student_2021_v1_B.toPoint
	  section.data(67).logicalSrcIdx = 68;
	  section.data(67).dtTransOffset = 101;
	
	  ;% Robot_Student_2021_v1_B.homeControllerEnabled_h
	  section.data(68).logicalSrcIdx = 69;
	  section.data(68).dtTransOffset = 102;
	
	  ;% Robot_Student_2021_v1_B.resetEnc_a
	  section.data(69).logicalSrcIdx = 70;
	  section.data(69).dtTransOffset = 103;
	
	  ;% Robot_Student_2021_v1_B.homingBusy_b
	  section.data(70).logicalSrcIdx = 71;
	  section.data(70).dtTransOffset = 104;
	
	  ;% Robot_Student_2021_v1_B.airBagEnabled
	  section.data(71).logicalSrcIdx = 72;
	  section.data(71).dtTransOffset = 105;
	
	  ;% Robot_Student_2021_v1_B.airBagRef
	  section.data(72).logicalSrcIdx = 73;
	  section.data(72).dtTransOffset = 106;
	
	  ;% Robot_Student_2021_v1_B.controlEnabled
	  section.data(73).logicalSrcIdx = 74;
	  section.data(73).dtTransOffset = 107;
	
	  ;% Robot_Student_2021_v1_B.Ready_p
	  section.data(74).logicalSrcIdx = 75;
	  section.data(74).dtTransOffset = 108;
	
	  ;% Robot_Student_2021_v1_B.StopSim_o
	  section.data(75).logicalSrcIdx = 76;
	  section.data(75).dtTransOffset = 109;
	
	  ;% Robot_Student_2021_v1_B.jogSpeed_o
	  section.data(76).logicalSrcIdx = 77;
	  section.data(76).dtTransOffset = 110;
	
	  ;% Robot_Student_2021_v1_B.toPoint_h
	  section.data(77).logicalSrcIdx = 78;
	  section.data(77).dtTransOffset = 111;
	
	  ;% Robot_Student_2021_v1_B.homeControllerEnabled_f
	  section.data(78).logicalSrcIdx = 79;
	  section.data(78).dtTransOffset = 112;
	
	  ;% Robot_Student_2021_v1_B.resetEnc_n
	  section.data(79).logicalSrcIdx = 80;
	  section.data(79).dtTransOffset = 113;
	
	  ;% Robot_Student_2021_v1_B.homingBusy_d
	  section.data(80).logicalSrcIdx = 81;
	  section.data(80).dtTransOffset = 114;
	
	  ;% Robot_Student_2021_v1_B.airBagEnabled_a
	  section.data(81).logicalSrcIdx = 82;
	  section.data(81).dtTransOffset = 115;
	
	  ;% Robot_Student_2021_v1_B.airBagRef_p
	  section.data(82).logicalSrcIdx = 83;
	  section.data(82).dtTransOffset = 116;
	
	  ;% Robot_Student_2021_v1_B.controlEnabled_b
	  section.data(83).logicalSrcIdx = 84;
	  section.data(83).dtTransOffset = 117;
	
	  ;% Robot_Student_2021_v1_B.Ready_l
	  section.data(84).logicalSrcIdx = 85;
	  section.data(84).dtTransOffset = 118;
	
	  ;% Robot_Student_2021_v1_B.StopSim_p
	  section.data(85).logicalSrcIdx = 86;
	  section.data(85).dtTransOffset = 119;
	
	  ;% Robot_Student_2021_v1_B.jogSpeed_p
	  section.data(86).logicalSrcIdx = 87;
	  section.data(86).dtTransOffset = 120;
	
	  ;% Robot_Student_2021_v1_B.toPoint_i
	  section.data(87).logicalSrcIdx = 88;
	  section.data(87).dtTransOffset = 121;
	
	  ;% Robot_Student_2021_v1_B.homeControllerEnabled_i
	  section.data(88).logicalSrcIdx = 89;
	  section.data(88).dtTransOffset = 122;
	
	  ;% Robot_Student_2021_v1_B.resetEnc_l
	  section.data(89).logicalSrcIdx = 90;
	  section.data(89).dtTransOffset = 123;
	
	  ;% Robot_Student_2021_v1_B.homingBusy_n
	  section.data(90).logicalSrcIdx = 91;
	  section.data(90).dtTransOffset = 124;
	
	  ;% Robot_Student_2021_v1_B.airBagEnabled_ab
	  section.data(91).logicalSrcIdx = 92;
	  section.data(91).dtTransOffset = 125;
	
	  ;% Robot_Student_2021_v1_B.airBagRef_pn
	  section.data(92).logicalSrcIdx = 93;
	  section.data(92).dtTransOffset = 126;
	
	  ;% Robot_Student_2021_v1_B.controlEnabled_e
	  section.data(93).logicalSrcIdx = 94;
	  section.data(93).dtTransOffset = 127;
	
	  ;% Robot_Student_2021_v1_B.Ready_n
	  section.data(94).logicalSrcIdx = 95;
	  section.data(94).dtTransOffset = 128;
	
	  ;% Robot_Student_2021_v1_B.StopSim_n
	  section.data(95).logicalSrcIdx = 96;
	  section.data(95).dtTransOffset = 129;
	
	  ;% Robot_Student_2021_v1_B.SignalConversion
	  section.data(96).logicalSrcIdx = 97;
	  section.data(96).dtTransOffset = 130;
	
	  ;% Robot_Student_2021_v1_B.SignalConversion1
	  section.data(97).logicalSrcIdx = 98;
	  section.data(97).dtTransOffset = 131;
	
	  ;% Robot_Student_2021_v1_B.SignalConversion2
	  section.data(98).logicalSrcIdx = 99;
	  section.data(98).dtTransOffset = 132;
	
	  ;% Robot_Student_2021_v1_B.Sum6
	  section.data(99).logicalSrcIdx = 100;
	  section.data(99).dtTransOffset = 133;
	
	  ;% Robot_Student_2021_v1_B.SignalConversion1_a
	  section.data(100).logicalSrcIdx = 101;
	  section.data(100).dtTransOffset = 134;
	
	  ;% Robot_Student_2021_v1_B.Sum5
	  section.data(101).logicalSrcIdx = 102;
	  section.data(101).dtTransOffset = 135;
	
	  ;% Robot_Student_2021_v1_B.SignalConversion_k
	  section.data(102).logicalSrcIdx = 103;
	  section.data(102).dtTransOffset = 136;
	
	  ;% Robot_Student_2021_v1_B.Doubleclickswitch
	  section.data(103).logicalSrcIdx = 104;
	  section.data(103).dtTransOffset = 137;
	
	  ;% Robot_Student_2021_v1_B.Sum4
	  section.data(104).logicalSrcIdx = 105;
	  section.data(104).dtTransOffset = 138;
	
	  ;% Robot_Student_2021_v1_B.Conveyorreferencemm
	  section.data(105).logicalSrcIdx = 106;
	  section.data(105).dtTransOffset = 139;
	
	  ;% Robot_Student_2021_v1_B.Gain1_g
	  section.data(106).logicalSrcIdx = 107;
	  section.data(106).dtTransOffset = 140;
	
	  ;% Robot_Student_2021_v1_B.Dctintegrator3_n
	  section.data(107).logicalSrcIdx = 108;
	  section.data(107).dtTransOffset = 141;
	
	  ;% Robot_Student_2021_v1_B.Dct1lowpass_ab
	  section.data(108).logicalSrcIdx = 109;
	  section.data(108).dtTransOffset = 142;
	
	  ;% Robot_Student_2021_v1_B.Dctleadlag_d
	  section.data(109).logicalSrcIdx = 110;
	  section.data(109).dtTransOffset = 143;
	
	  ;% Robot_Student_2021_v1_B.Gain1_o
	  section.data(110).logicalSrcIdx = 111;
	  section.data(110).dtTransOffset = 144;
	
	  ;% Robot_Student_2021_v1_B.Doubleclickswitch_c
	  section.data(111).logicalSrcIdx = 112;
	  section.data(111).dtTransOffset = 145;
	
	  ;% Robot_Student_2021_v1_B.Color
	  section.data(112).logicalSrcIdx = 113;
	  section.data(112).dtTransOffset = 146;
	
	  ;% Robot_Student_2021_v1_B.Plot
	  section.data(113).logicalSrcIdx = 114;
	  section.data(113).dtTransOffset = 147;
	
	  ;% Robot_Student_2021_v1_B.Stop
	  section.data(114).logicalSrcIdx = 115;
	  section.data(114).dtTransOffset = 148;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_B.Compare
	  section.data(2).logicalSrcIdx = 123;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_B.RelationalOperator_o
	  section.data(3).logicalSrcIdx = 124;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_B.RelationalOperator_n
	  section.data(4).logicalSrcIdx = 125;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_B.LogicalOperator1
	  section.data(5).logicalSrcIdx = 126;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_B.LogicalOperator1_d
	  section.data(6).logicalSrcIdx = 127;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_B.LogicalOperator1_o
	  section.data(7).logicalSrcIdx = 128;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.sf_Angle2Z_c.y
	  section.data(1).logicalSrcIdx = 129;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_B.sf_Angle2Z.y
	  section.data(1).logicalSrcIdx = 130;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 14;
    sectIdxOffset = 6;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_Student_2021_v1_DW)
    ;%
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_n
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.UnitDelay_DSTATE
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_p
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTAT_pn
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_c
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_i
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_k
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_DW.UnitDelay1_DSTATE
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_Student_2021_v1_DW.UD_DSTATE
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_Student_2021_v1_DW.UD_DSTATE_n
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_Student_2021_v1_DW.UD_DSTATE_e
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Robot_Student_2021_v1_DW.Discreteintegrator_DSTATE
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.Delay_DSTATE
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 55;
      section.data(55)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.TimeStampA
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB
	  section.data(3).logicalSrcIdx = 16;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB
	  section.data(4).logicalSrcIdx = 17;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampA_p
	  section.data(5).logicalSrcIdx = 18;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA_f
	  section.data(6).logicalSrcIdx = 19;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB_f
	  section.data(7).logicalSrcIdx = 20;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB_d
	  section.data(8).logicalSrcIdx = 21;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampA_d
	  section.data(9).logicalSrcIdx = 22;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA_i
	  section.data(10).logicalSrcIdx = 23;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB_p
	  section.data(11).logicalSrcIdx = 24;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB_m
	  section.data(12).logicalSrcIdx = 25;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampA_h
	  section.data(13).logicalSrcIdx = 26;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA_id
	  section.data(14).logicalSrcIdx = 27;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB_c
	  section.data(15).logicalSrcIdx = 28;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB_o
	  section.data(16).logicalSrcIdx = 29;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampA_k
	  section.data(17).logicalSrcIdx = 30;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA_h
	  section.data(18).logicalSrcIdx = 31;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB_d
	  section.data(19).logicalSrcIdx = 32;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB_k
	  section.data(20).logicalSrcIdx = 33;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampA_j
	  section.data(21).logicalSrcIdx = 34;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeA_j
	  section.data(22).logicalSrcIdx = 35;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Robot_Student_2021_v1_DW.TimeStampB_k
	  section.data(23).logicalSrcIdx = 36;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Robot_Student_2021_v1_DW.LastUAtTimeB_d3
	  section.data(24).logicalSrcIdx = 37;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Robot_Student_2021_v1_DW.PrevY
	  section.data(25).logicalSrcIdx = 38;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Robot_Student_2021_v1_DW.PrevY_n
	  section.data(26).logicalSrcIdx = 39;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Robot_Student_2021_v1_DW.PrevY_h
	  section.data(27).logicalSrcIdx = 40;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Robot_Student_2021_v1_DW.PrevY_m
	  section.data(28).logicalSrcIdx = 41;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Robot_Student_2021_v1_DW.PrevY_c
	  section.data(29).logicalSrcIdx = 42;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Robot_Student_2021_v1_DW.PrevY_mz
	  section.data(30).logicalSrcIdx = 43;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Robot_Student_2021_v1_DW.currentcarPos
	  section.data(31).logicalSrcIdx = 44;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Robot_Student_2021_v1_DW.currentcarPos_f
	  section.data(32).logicalSrcIdx = 45;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Robot_Student_2021_v1_DW.currentcarPos_k
	  section.data(33).logicalSrcIdx = 46;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Robot_Student_2021_v1_DW.NextOutput
	  section.data(34).logicalSrcIdx = 47;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Robot_Student_2021_v1_DW.Dctintegrator_RWORK
	  section.data(35).logicalSrcIdx = 48;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK
	  section.data(36).logicalSrcIdx = 49;
	  section.data(36).dtTransOffset = 36;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK
	  section.data(37).logicalSrcIdx = 50;
	  section.data(37).dtTransOffset = 38;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_b
	  section.data(38).logicalSrcIdx = 51;
	  section.data(38).dtTransOffset = 40;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_g
	  section.data(39).logicalSrcIdx = 52;
	  section.data(39).dtTransOffset = 42;
	
	  ;% Robot_Student_2021_v1_DW.Dctintegrator_RWORK_b
	  section.data(40).logicalSrcIdx = 53;
	  section.data(40).dtTransOffset = 44;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_a
	  section.data(41).logicalSrcIdx = 54;
	  section.data(41).dtTransOffset = 46;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_m
	  section.data(42).logicalSrcIdx = 55;
	  section.data(42).dtTransOffset = 48;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_f
	  section.data(43).logicalSrcIdx = 56;
	  section.data(43).dtTransOffset = 50;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_k
	  section.data(44).logicalSrcIdx = 57;
	  section.data(44).dtTransOffset = 52;
	
	  ;% Robot_Student_2021_v1_DW.Dctintegrator_RWORK_m
	  section.data(45).logicalSrcIdx = 58;
	  section.data(45).dtTransOffset = 54;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_p
	  section.data(46).logicalSrcIdx = 59;
	  section.data(46).dtTransOffset = 56;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_p
	  section.data(47).logicalSrcIdx = 60;
	  section.data(47).dtTransOffset = 58;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_o
	  section.data(48).logicalSrcIdx = 61;
	  section.data(48).dtTransOffset = 60;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_gb
	  section.data(49).logicalSrcIdx = 62;
	  section.data(49).dtTransOffset = 62;
	
	  ;% Robot_Student_2021_v1_DW.Dctintegrator3_RWORK
	  section.data(50).logicalSrcIdx = 63;
	  section.data(50).dtTransOffset = 64;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_n
	  section.data(51).logicalSrcIdx = 64;
	  section.data(51).dtTransOffset = 66;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_l
	  section.data(52).logicalSrcIdx = 65;
	  section.data(52).dtTransOffset = 68;
	
	  ;% Robot_Student_2021_v1_DW.Dctintegrator3_RWORK_g
	  section.data(53).logicalSrcIdx = 66;
	  section.data(53).dtTransOffset = 70;
	
	  ;% Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_c
	  section.data(54).logicalSrcIdx = 67;
	  section.data(54).dtTransOffset = 72;
	
	  ;% Robot_Student_2021_v1_DW.Dctleadlag_RWORK_g
	  section.data(55).logicalSrcIdx = 68;
	  section.data(55).dtTransOffset = 74;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.ToWorkspace1_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.ToWorkspace_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 70;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.sfEvent
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.sfEvent_o
	  section.data(2).logicalSrcIdx = 72;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.sfEvent_j
	  section.data(3).logicalSrcIdx = 73;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.sfEvent_f
	  section.data(4).logicalSrcIdx = 74;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_DW.sfEvent_b
	  section.data(5).logicalSrcIdx = 75;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1
	  section.data(1).logicalSrcIdx = 76;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1
	  section.data(2).logicalSrcIdx = 77;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1
	  section.data(3).logicalSrcIdx = 78;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1
	  section.data(4).logicalSrcIdx = 79;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_DW.RandSeed
	  section.data(5).logicalSrcIdx = 80;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_DW.is_Object_Detection
	  section.data(6).logicalSrcIdx = 81;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_DW.is_Belt
	  section.data(7).logicalSrcIdx = 82;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_DW.is_Robot_Arm
	  section.data(8).logicalSrcIdx = 83;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_DW.is_Vacuum
	  section.data(9).logicalSrcIdx = 84;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.temporalCounter_i1
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.temporalCounter_i1_e
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.temporalCounter_i1_a
	  section.data(3).logicalSrcIdx = 87;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.temporalCounter_i1_p
	  section.data(4).logicalSrcIdx = 88;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.Subsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 89;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.IfActionSubsystem1_SubsysRanBC
	  section.data(2).logicalSrcIdx = 90;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.IfActionSubsystem_SubsysRanBC
	  section.data(3).logicalSrcIdx = 91;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.Controller_SubsysRanBC
	  section.data(4).logicalSrcIdx = 92;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.is_active_c4_Robot_Student_2021
	  section.data(1).logicalSrcIdx = 93;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.is_active_c7_Robot_Student_2021
	  section.data(2).logicalSrcIdx = 94;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_Student_2021_v1_DW.is_active_c6_Robot_Student_2021
	  section.data(3).logicalSrcIdx = 95;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_Student_2021_v1_DW.is_active_c5_Robot_Student_2021
	  section.data(4).logicalSrcIdx = 96;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_Student_2021_v1_DW.is_active_c3_Robot_Student_2021
	  section.data(5).logicalSrcIdx = 97;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_Student_2021_v1_DW.is_active_Object_Detection
	  section.data(6).logicalSrcIdx = 98;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_Student_2021_v1_DW.is_active_Belt
	  section.data(7).logicalSrcIdx = 99;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_Student_2021_v1_DW.is_active_Robot_Arm
	  section.data(8).logicalSrcIdx = 100;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_Student_2021_v1_DW.is_active_Vacuum
	  section.data(9).logicalSrcIdx = 101;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.doneDoubleBufferReInit
	  section.data(1).logicalSrcIdx = 102;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_Student_2021_v1_DW.Controller_MODE
	  section.data(2).logicalSrcIdx = 103;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.SerialWrite.obj
	  section.data(1).logicalSrcIdx = 104;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.SerialWrite.objisempty
	  section.data(1).logicalSrcIdx = 105;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.SerialWrite1.obj
	  section.data(1).logicalSrcIdx = 106;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_Student_2021_v1_DW.SerialWrite1.objisempty
	  section.data(1).logicalSrcIdx = 107;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 987665910;
  targMap.checksum1 = 3204608967;
  targMap.checksum2 = 3901648840;
  targMap.checksum3 = 1043714098;

