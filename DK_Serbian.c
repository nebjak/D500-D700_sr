/*----------------------------------------------------------------------------*/
/*                             D700 - D500 PROJECT                            */
/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*  Source  File :                DK_English.c                                */
/******************************************************************************/
/*                                                                            */
/*                Unit Local English Language Strings	                      */
/*							  						                          */
/*                                                                            */
/*  Author : Fikret GUNDOGAN                       Date : 04-04-2013          */
/*							  						                          */
/******************************************************************************/

// Copyright © 2013 Datakom Elektronik Muhendislik Ltd 

//                      REVISION HISTORY

#ifndef __DK_ENGLISH_C
#define __DK_ENGLISH_C

/*********************************************************************
 Function:        	English Ascii Strings

 PreCondition:    	Table Start Address: 0x0000A000 total 32 kbyte flash area
                  
 Input:           	-				
			
 Output:          	-
 
 Description:		Common used string table [n][21]
 
 Author/Date:		Fikret Gündogan / 2013.04.04 09:09 
 
 Revision History:	-						
 ********************************************************************/ 
LocalStringTables LS __attribute__((at(LOCSTRINGSBASEADDRESS)))={
	"                     ",	// 	0
	"     ALARM LIST      ",	// 	1
	"  END OF ALARM LIST  ",	// 	2
	"       NOT USED      ",	// 	3
	"    ENGINE SHUTDOWN  ",	// 	4
	"    LOAD-DUMP ALARM  ",	// 	5
	"       WARNING       ",	// 	6

	"  GENSET PARAMETERS  ",	//	7
	" GEN  PHASE VOLTAGES ",	//	8
	"GEN   Amps      Hz   ",	//  9
	"GEN   kW        Pf   ",	//	10
	"GEN   kVA      kVAr  ",	//	11
	" GEN AVERAGE VALUES  ",	//  12
	"  GEN PHASE  Lx CURR ",	//	13
	" GEN NEUTRAL CURRENT ",	//  14
	" GENSET ACTIVE POWER ",	//	15
	"GENSET REACTIVE POWER",	//	16
	" GENSET POWER FACTOR ",	//	17
	"  GENSET  FREQUENCY  ",	//	18
	" GENSET POWER COUNTER",	//	19
								
	"  ENGINE PARAMETERS  ",	// 	20
	"    OIL PRESSURE     ",	//	21
	"  ENGINE TEMPERATURE ",	//	22
	"      FUEL LEVEL     ",	//	23
	"   OIL TEMPERATURE   ",	//	24
	"  CANOPY TEMPERATURE ",	//	25
	" AMBIENT TEMPERATURE ",	//	26
	"     ENGINE SPEED    ",	//	27
	"   BATTERY  VOLTAGE  ",	//	28
	"    ENGINE HOURS     ",	//	29
	"Total Starts:        ",	//	30
							 
	"   MAINS PARAMETERS  ",	// 	31
	"MAINS PHASE VOLTAGES ",	//	32
	"MAINS Amps      Hz   ",	//  33
	"MAINS  kW       Pf   ",	//	34
	"MAINS kVA      kVAr  ",	//	35
	"MAINS AVERAGE VALUES ",	//  36
	" MAINS PHASE Lx CURR ",	//	37
	"MAINS NEUTRAL CURRENT",	//  38
	"  MAINS ACTIVE POWER ",	//	39
	" MAINS REACTIVE POWER",	//	40
	"  MAINS POWER FACTOR ",	//	41
	"   MAINS  FREQUENCY  ",	//	42

	" COMMISSIONNING PAGES",	//  43
	"   SYNCHROSCOPE      ",	//  44
	"    LOAD TRANSFER    ",	//  45
	"     LOAD SHARING    ",	//	46
	"   RUN IN DROOP MODE ",	//	47

	"  COMMUNICATION INFO ",	//	48
	"     MODEM SCREEN    ",	//	49
	" Simulation Active ! ",	//	50
	"  Baud :             ",	//	51
	"   ETHERNET SCREEN   ",	//	52
	"  Network IP Address ",	//	53
	"  Gateway IP Address ",	//	54
										
	"    ENGINE STATUS    ",	// 	55
	"     DATE & TIME     ",	//	56
	"   ENGINE SITE-ID    ",	//	57
	"  ENGINE SERIAL NO:  ",	//	58
	" DEVICE VERSION INFO ",	//	59
	"MAINTENANCE x COUNTER",	//	60
	"    CHARGE VOLTAGE   ",	//	61
	" GOV & AVR AUTO-LEARN",	//	62
	"Baud Rate  :         ",	//	63

	" FACTORY TEST SCREEN ",	//	64
	"  J1939 PARAMETERS   ",	//  65
	" Engine:             ",	//  66
	" Type  :             ",	//  67
	" SW Ver:             ",	//  68
	" Enter Your Password ",	//  69
	" MAINS XXX SCOPEMETER",	//	70
	"  GEN  XXX SCOPEMETER",	//	71
	" MAINS XXX HARMONICS ",	//  72
	"  GEN  XXX HARMONICS ",	//	73
	"     PROGRAMMING     ",	//	74
	"    Mains Failure    ",	//	75
	"    Mains Restored   ",	//	76
	"  PGM Mode Entrance  ",	//	77
	"     Subnet Mask     ",	//  78
	"  Client IP Address  ",	//  79
	"RETURN TO FACTORY SET",	//  80
	"HoldPressed MENU+ key",	//	81	
	"  J1939 ECU WARNING  ",	//  82
	"  EVENT RECORDS      ",	//	83
	" Event Record Empty! ",	//	84
	"  Record Read Fail!  ",	//	85
	"   Periodic Record   ",	//	86
	"  Mode Change Event  ",	//	87
	"     IMEI Number     ",	//  88
	"      Unit Mode      ",	//  89
	"      Unit State     ",	//  90
	"   2Phase,3Wire L1-L2",	//	91
	"   2Phase,3Wire L1-L3",	//	92
	"   3Phase,3Wire      ",	//	93
	"   3Phase3WireL1-L2CT",	//	94
	"   3Phase3WireL1-L3CT",	//	95
	"   3Phase,4Wire Star ",	//	96
	"   3Phase,4Wire Delta",	//	97
	"   Mono Phase, 2Wire ", 	//	98
	"     DataNET INFO    ",	// 	99  
	"Address    :         ",	// 100  
	"Priority   :         ",	// 101
	"Genset  On Sys:      ",	// 102
	"Genset  OnLine:      ",  	// 103
	"Rx Err Cnt :         ",	// 104  
	"Tx Err Cnt :         ",	// 105
	" Received Byte Count ",	// 106  
	"   Sent Byte Count   ",	// 107
	"     Completed !     ",	// 108
	" Password Level :    ",   	// 109	
	"        NOT USED     ",   	// 110
	"     INTERNAL MODEM  ",	// 111
	"    GSM DATAKOM MODEM",	// 112
	"    GSM GENERIC MODEM",	// 113
	"     EXTERNAL GPS    ",	// 114
	"    WEEK :x DAY:x    ",	// 115  
	"    TIME    DURATION ",	// 116 
	"MoTuWeThFrSaSu       ",   	// 117 - Days of week 
	"  PHASE-FREQ MATCH.  ",	// 118
	"  VOLTAGE MATCHING   ",	// 119
	"   TARGET   GENSET   ",    // 120
	" GOVCorr AVRCorr Time",	// 121
	"    Please Wait...   ",    // 122
	" Device Unique ID Num",	// 123 
	" Secondary Settings! ",	// 124
	"   SYSTEM OVERVIEW   ",	// 125  
	"  GENSETS     kW kVAr",    // 126
	"SYS   kW   kVAr   Cos",	// 127 
	"  XXX:      Fnc:     ",	// 128
	"     G    P    I    D",	// 129
	"  Engine Run Record  ", 	// 130
	"  Engine Stop Record ",	// 131
	"    OnLoad Record    ",	// 132
	"    OffLoad Record   ",	// 133
	"  Last Fault Info.   ",	// 134
	"    GENSET    MAINS  ",	// 135
	" MAINS EXPORTED POWER",	// 136
	" MAINS POWER COUNTERS",	// 137 
	"     FUEL COUNTER    ",    // 138
	"  START AUTO-LEARN ? ",	// 139
	"Press >KEY to Confirm",	// 140
	" Memory Stick Plugged",	// 141
	"   SD Card Inserted  ",	// 142	
	"    PLANT OVERVIEW   ",	// 143	
	"Mains   On Sys:      ",	// 144	
	"Mains   OnLine:      ",	// 145	
	"Coupler On Sys:      ",	// 146	
	"Coupler OnLine:      ",	// 147
	"Genset  On Bus:      ",	// 148	
	"Author. Mains :      ",	// 149
	"  Tertiary Settings! ",	// 150
	" Modem Software Vers.",	// 151  
	"Master Addr:         ",	// 152
	"  BUSBAR PHASE VOLTS ",	// 153
	"BUSBAR AVERAGE VALUES",	// 154
	"   TARGET   BUSBAR   ",   	// 155
	"    BUSBAR    MAINS  ",	// 156
	"  BUS XXX  SCOPEMETER",	// 157
	"  BUS XXX  HARMONICS ",	// 158
	" BUSBAR POWER COUNTER",	// 159
	"   BUSBAR FREQUENCY  ",	// 160
	" initializing...     ",	// 161
	" AVR output checking!",	// 162																				
	" GOV output checking!",	// 163		
	" Finding 1st Limits! ",	// 164					
	" Finding 2nd Limits! ",	// 165																												
	"  Auto-Learn Failed! ",	// 166	
	"Next Start :         ",	// 167	
	"Next Stop  :         ",	// 168
	"Mains Prev. kW:      ",	// 169
	" Parallel With Mains ",	// 170
	" MAINS SCOPEMETER    ",	// 171
	" GENSET SCOPEMETER   ",	// 172
	" MAINS HARMONICS     ",	// 173
	" GENSET HARMONICS    ", 	// 174
	" GENSET COUNTERS     ",	// 175
	" MAINS COUNTERS      ",	// 176
	" ENGINE COUNTERS     ",	// 177
	"ALL CHANGES WILL LOST",	// 178
	"PRESS OK TO CONFIRM  ",	// 179
	"HOLDPRESSED OK BUTTON",	// 180
	"SELF TEST IN PROGRESS",	// 181
	" ACTIVE TARGET POW   ", 	// 182
	" REACTIVE TARGET POW ",	// 183
	" MEASUREMENT TRENDS  ",	// 184
	" Undefined STR  -185 ",	// 185  
	" Undefined STR  -186 ",	// 186  
	////////////////////////////// Idx			SPN
	" Overspeed Shutdown  ",	//  0			56
	"Low Oil PressShutdown",	//  1			57
	"High Eng.TempShutdown",	//  2			58
	"Gain Adjust Pot.Circ.",	//	3			71
	"GeneratorSpeedCircuit",	//	4			75
	"Freq.Adjust Pot.Circ.",	//	5			79
	"Droop Adjust Pot.Circ",	//	6			80
	"Low Oil Press.Warning",	//  7			81
	"High Eng.Temp.Warning",	//  8			82
	"Accelerator PedalCirc",	//  9			91
	"Eng.OilFilterDiffPrss",	//	10			99
	"  Crankcase Pressure ",	//	11			101
	"Intake Man1.PressCirc",	//	12			102
	"Turbocharger 1 Speed ",	//	13			103
	"  Coolant Pressure   ",	//	14			109
	"  Battery 1 Voltage  ",	//	15			168
	"  Exhaust Gas Temp.  ",	//	16			173
	"Engine Magnetic Speed",	//	17			612
	"Injector Power Supply",	//	18			627
	"Fuel Inj.Cont.ValveCr",	//	19			633
	"Ext. Speed Comm.Input",	//	20			644
	" Fan Control Circuit ",	//	21			647
	"Engine Fuel Supp.Circ",	//	22			1075
	"Engine Oil Burn Valve",	//  23			1265
	"Multiple Unit Sync.Sw",	//	24			1377
	"Eng.OilChangeInterval",	//	25			1378
	"Engine Shut Down Hot ",	//	26			1383
	"Eng.CommandedShutdown",	//	27			1384
	"Exh.GasTemp Right Man",	//  28			2433	
	"Exh.GasTemp Left Man.",	//  29			2434
	/******************************/
	"FUNCTION:",	//	0	
	"TYPE:    ",	//	1
	"SAMPLING:",	//	2
	"LATCHING:",	//	3
	"CONTACT: ",	//	4
	"SWITCH:  ",	//	5
	"DELAY:   ",	//	6

	"SHUTDOWN ",	//	7
    "LOAD-DUMP",	//	8
    "WARNING  ",	//	9
    "NOT USED ",	//	10

	"ALWAYS   ",	//	11
	"ON ENGRUN",	//	12
	"HOLD OFF ",	//	13
	"MAINS OK ",	//	14

 	"NON-LATCH",	//	15
    "LATCHING ",	//	16

	"N.O.     ",	//	17
	"N.C.     ",	//	18

	"BAT-     ",	//	19
	"BAT+     ",	//	20

	"0.0 SEC  ",	//	21
	"1   SEC  ",	//	22
	"10  SEC  ",	//	23
	"30  MIN  ",	//	24
	
	"INP SRVD ",	//	25	
/******************************/
	" DISPLAY EVENT LOGG. ",	//	0
	" CONTROLLER CONFIG.  ",	//	1
	" ELECTRICAL PARAMS.  ",	//	2
	" ENGINE PARAMETERS   ",	//	3
	" ADJUST DATE & TIME  ",	//	4
	" WEEKLY SCHEDULE     ",	//  5
	" EXERCISER SCHEDULE  ",	//  6
	" SENDER CONFIGURATION",	//  7
	" INPUT CONFIGURATION ",	//	8
	" OUTPUT DEFINITION   ",   	//	9
	" SITE ID STRING      ",	//	10
	" ENGINE SERIAL NUMB. ",	//	11
	" MODEM1/SMS1 TEL NO. ",	//	12
	" MODEM2/SMS2 TEL NO. ",	//	13
	" SMS3 TEL. NUMBER    ",	//	14
	" SMS4 TEL. NUMBER    ",	//	15
	" GSM MODEM PARAMETERS",   	//  16
	" ETHERNET PARAMETERS ",	//	17
	" SYNCHRONIZATION PRM ",	//	18	
	" CALIBRATION PARAMS  ",	//	19
	" Reserved PGM Str-20 ",	//  20  
	" Reserved PGM Str-21 ",	//  21
	" Reserved PGM Str-22 ",	//  22  
	" Reserved PGM Str-23 ",	//  23  
	" Reserved PGM Str-24 ",	//  24  
	" Reserved PGM Str-25 ",	//  25  
	" Reserved PGM Str-26 ",	//  26 
	" Reserved PGM Str-27 ",	//  27 
	" Reserved PGM Str-28 ",	//  28 
	" Reserved PGM Str-29 ",	//  29 
	" Reserved PGM Str-30 ",	//  30 
	" Reserved PGM Str-31 ",	//  31 
/******************************/
	" LCD Contrast        ",	// 	0
	" Screen Scroll Timer ",	//	1  
	" Language Selection  ",	// 	2
	" Genset Default Disp.",	//	3
	" Status PromptsEnable",	//	4
	" Fault Holdoff Timer ",	//	5
	" Alarm Relay Timer   ",	//  6
	" Intermittent Alm Rly",	//  7
	" Emergency Backup    ",	//  8
	" Exercise Enable     ",	//	9
	" Exercise Period     ", 	//	10
	" Exercise Off/On Load",	//  11
	" Delayed SimulateMain",	//  12
	" Modem Selection     ",	//	13
	" Ext.Modem Baud Rate ",	//	14
	" GSM Sim Card Pin    ",	//	15
	" SMS Enable          ",	//  16
	" GPRS Connection En. ",	//  17
	" Web Programming En. ",	//  18
	" Web Control Enable  ",	//	19
	" Web Refresh Rate    ", 	//	20
	" Ping Period         ",	//  21
	" Rainbow Refresh Rate",	//	22
	" Rainbow Addr-1 Port ",	//	23
	" Rainbow Addr-2 Port ",	//	24
	" Web Server Port     ",	//	25
	" Modbus Over IP Port ",  	//	26
	" SMTP Port           ",   	//  27
	" Eth.->RS-485 Gateway",	//  28
	" GPRS->RS-485 Gateway", 	//  29
	" RS-485 Enable       ", 	//  30
	" Modbus Address      ",	//	31
	" RS-485 Baud Rate    ", 	//  32
	" Ethernet Enable     ",	//	33
	" Oil Pressure Sw.Prio",	//  34
	" Flashing Relay On   ",	//	35
	" Flashing Relay Off  ",   	//	36
	" RT Clock Adjust     ",	//	37
	" Hysteresis Voltage  ",	//	38
	" Engine Control Only ",	//  39
	" Alternator Pole Pair",	//  40
	" RPM From Frequency  ",	//  41
	" Crank Teeth Count   ",	//	42
	" SMS on Mains Change ",	//	43
	" SMS on IP Change    ", 	//	44
	" E-mail on IP Change ",	//	45
	" Fuel Pump Low Limit ",	//	46
	" Fuel Pump High Limit",	//	47
	" Warning Before Start",	//	48
	" Latch All Warnings  ",	//	49
	" Remote ControlEnable",	//	50
	" Annunciator Mode    ",	//	51
	" CT Location         ",   	//  52
	" Reverse CT Direction",	//	53
	" Buzzer Enable       ",   	//  54
	" Unit Functionality  ",   	//  55
	" Change Level-1 Pass.",	//	56
	" Change Level-2 Pass.",	//	57
	" Run in Simulation   ",	//	58
	" Log Record Period   ",	//	59
	" LCD Backlight Timer ",	//	60
	" Fuel Filling Timer  ",	//	61
	" Remote Lock Enabled ",	//	62 
	" Enb.UnitNotTestedWrn",	//	63
	" SMS Commands Enable ",	//  64  
	" Open With Last Mode ",	//  65  
	" Pre-Transfer Delay  ",	//  66  
	" Mail On Mains Change",	//  67
	" Enb.AutoNotReadyWarn",	//	68
	" Fuel Pulses From MPU",	//	69
	" Fuel PulsesPerVolume",	//  70
	" Fuel Lev.CounterUnit", 	//	71
	" SMS onEngine Run&Stp",	//	72
	" E-mail onEng.Run&Stp",	//	73
	" Trend SampleInterval",	//	74
	" Fuel Counter Type   ",	//	75
	" Dual Equal Aging    ",	//	76
	" CT Seconder Value   ",	//	77
	" Auto Topology Detect",	//	78
	" Maintenance DoneWarn",	//	79
	" Stop Status Screens ",	//	80
	" Local Time Zone     ",	//	81
	" Reserved CNF Str-82 ",	//  82  
	" Reserved CNF Str-83 ",	//  83  
	" Reserved CNF Str-84 ",	//  84 
	" Reserved CNF Str-85 ",	//  85  
	" Reserved CNF Str-86 ",	//  86  
	" Reserved CNF Str-87 ",	//  87 
	" Reserved CNF Str-88 ",	//  88  
	" Reserved CNF Str-89 ",	//  89 
	" Reserved CNF Str-90 ",	//  90
	" Reserved CNF Str-91 ",	//  91 
	" Reserved CNF Str-92 ",	//  92  
	" Reserved CNF Str-93 ",	//  93 
	" Reserved CNF Str-94 ",	//  94
	" Reserved CNF Str-95 ",	//  95 
	" Reserved CNF Str-96 ",	//  96  
	" Reserved CNF Str-97 ",	//  97  
	" Reserved CNF Str-98 ",	//  98  
	" Reserved CNF Str-99 ",	//  99  
/*******************************/	 
	" Gen.Curr.XFMRPrimary",	//	0
	" Mains Curr.XFMR Prim",	//	1
	" Voltage XFMR Ratio  ",	//	2
	" Nominal Voltage     ",	//	3
	" Nominal Frequency   ",	//	4
	" Nominal Voltage 2   ",	//	5
	" Nominal Frequency 2 ",	//	6
	" Nominal Voltage 3   ",	//	7
	" Nominal Frequency 3 ",	//	8
	" Mains Voltage Low   ",	//	9
	" Mains Voltage High  ",	//	10
	" Mains Volt.FailTimer",	//	11
	" Instant MainsDropOut",	//	12
	" Mains Frequency Low ",	//	13
	" Mains Frequency High",	//	14
	" Mains Freq.FailTimer",	//	15
	" Gen Low Volt Warning",	//	16
	" Gen Low VoltShutdown",	//	17
	" Gen High VoltWarning",	//	18
	" Gen HighVoltShutdown",	//	19
	" Genset Volt Fail Tim",	//	20
	" Gen Low Freq Warning",	//	21
	" Gen Low FreqShutdown",	//	22
	" Gen High FreqWarning",	//	23
	" Gen HighFreqShutdown",	//	24
	" Genset Freq Fail Tim",	//	25
	" Low Battery Warning ",	//	26
	" Low Battery Shutdown",	//	27
	" High Battery Warning",	//	28
	" High BatteryShutdown",	//	29
	" Battery Volt FailTim",	//	30
	" Genset VoltUnbalance",	//	31	
	" Volt UnbalanceAction",	//	32
	" Genset CurrUnbalance",	//	33
	" Curr UnbalanceAction",	//	34
	" Reverse Pow Warning ",	//	35
	" Reverse Pow Loaddump",	//	36
	" Reverse Power Timer ",	//	37
	" Over Current Limit  ",	//	38
	" Over Current Limit 2",	//	39
	" Over Current Limit 3",	//	40
	" Over Current Alm Lev",	//	41
	" OvCurrTimeMultiplier",	//	42
	" Over Load Limit     ",	//	43
	" Over Load Timer     ",	//	44
	" Load Shedding LowLim",	//	45
	" Load SheddingHighLim",	//	46
	" Load Add Delay      ",	//	47
	" Load Sub-Load AddDel",	//	48
	" Mains Waiting Timer ",	//	49
	" Mains Conn.Topology ",	//	50
	" Genset Conn.Topology",	//	51
	" Mains ContactorTimer",	//	52
	" Mains CB Close Pulse",	//	53
	" Mains CB Open Pulse ",	//	54
	" Mains UV Coil Timer ",	//	55
	" Mains CB Aux.Alm.Lev", 	//  56
	" Mains Cont.FailTimer",	//	57
	" MainsPhaseOrderCheck",	//	58
	" Genset Contactor Tim",	//	59		
	" GensetContClosePulse",	//	60
	" Genset ContOpenPulse",	//	61
	" Genset UV Coil Timer",	//	62
	" Gen.CB Aux.Alarm Lev",	//  63
	" Genset Cont.Fail Tim",	//	64
	" Gen PhaseOrderCheck ",	//	65
	" Busbar Fail Timer   ",	//  66
	" Busbar Ready Timer  ",	//	67
	" Multi Load Sub kW   ",	//	68
	" Multi Load Add kW   ",	//  69
	" Multi Load Sub Start",	//  70
	" Multi Load Sub Wait ",	//  71
	" Multi Load Add Start",	//  72
	" Multi Load Add Wait ",	//  73
	" Reserved ELC Str-74 ",	//  74  
	" Reserved ELC Str-75 ",	//  75  
	" Reserved ELC Str-76 ",	//  76  
	" Reserved ELC Str-77 ",	//  77  
	" Reserved ELC Str-78 ",	//  78  
	" Reserved ELC Str-79 ",	//  79  
	" Reserved ELC Str-80 ",	//  80 
	" Reserved ELC Str-81 ",	//  81  
	" Reserved ELC Str-82 ",	//  82  
	" Reserved ELC Str-83 ",	//  83  
	" Reserved ELC Str-84 ",	//  84 
	" Reserved ELC Str-85 ",	//  85  
	" Reserved ELC Str-86 ",	//  86  
	" Reserved ELC Str-87 ",	//  87 
	" Reserved ELC Str-88 ",	//  88  
	" Reserved ELC Str-89 ",	//  89 
	" Reserved ELC Str-90 ",	//  90
	" Reserved ELC Str-91 ",	//  91 
	" Reserved ELC Str-92 ",	//  92  
	" Reserved ELC Str-93 ",	//  93 
	" Reserved ELC Str-94 ",	//  94
	" Reserved ELC Str-95 ",	//  95 
	" Reserved ELC Str-96 ",	//  96  
	" Reserved ELC Str-97 ",	//  97  
	" Reserved ELC Str-98 ",	//  98  
	" Reserved ELC Str-99 ",	//  99  
/******************************/
	" Nominal RPM         ",	//	0
	" Nominal RPM 2       ",	//	1
	" Nominal RPM 3       ",	//	2
	" Low  RPM Warning    ",	//	3
	" Low  RPM Shutdown   ",	//	4
	" High RPM Warning    ",	//	5
	" High RPM Shutdown   ",	//	6
	" Rpm Fail Timer      ",	//	7
	" Overspeed OverShoot ",	//	8	
	" Loss of Signal Check",	//	9
	" Loss of SignalAlmLev",	//	10
	" Loss of Signal Delay",	//	11
	" Low Charge Volt Warn",	//	12
	" LowChargeVoltShutDwn",	//	13
	" Charge Volt Fail Tim",	//	14
	" Engine Heating Temp.",	//	15
	" Engine Start Delay  ",	//	16
	" Start RequestTimeout",	//	17
	" Preheat Timer       ",	//	18
	" Crank Timer         ",	//	19
	" Wait Between Starts ",	//	20
	" Engine Heating Timer",	//	21
	" Engine Heating Meth.",	//	22
	" Cooldown Timer      ",	//	23
	" Stop Solenoid Timer ",	//	24
	" Number of Starts    ",	//	25
	" Choke Timer         ",	//	26
	" Run Idle Speed Timer",	//	27
	" Stop Idle Speed Tim.",	//	28
	" Idle Holdoff Timer  ",	//  29
	" Gas Solenoid Delay  ",	//	30
	" Crank Cut Voltage   ",	//  31
	" Crank Cut Frequency ",	//  32
	" Crank Cut RPM       ",	//	33
	" Crank Cut ChargeVolt",	//	34
	" Crank Cut With OilPr",	//	35
	" Crank Cut OilPr Del ",	//	36 
	" ChargeInputConnected",	//	37
	" Fuel Tank Capacity  ",	//	38
	" Fuel Consumption/Hr ",	//	39
	" Coolant Cooler On   ",	//	40
	" Coolant Cooler Off  ",	//	41
	" Coolant Heater On   ",	//	42
	" Coolant Heater Off  ",	//	43
	" Fan Overrun Timer   ",	//	44
	" Canopy Fan Turn-On  ",	//	45
	" Canopy Fan Turn-Off ",	//	46
	" Ambient Fan Turn-On ",	//	47
	" Ambient Fan Turn-Off",	//	48
	" Service 1 Eng.Hours ",	//	49
	" Service 1 Period    ",	//	50
	" Service 1 Alarm Lev ",   //  51	
	" Service 2 Eng.Hours ",	//	52
	" Service 2 Period    ",	//	53
	" Service 2 Alarm Lev ",   //	54	
	" Service 3 Eng.Hours ",	//	55
	" Service 3 Period    ",	//	56
	" Service 3 Alarm Lev ",   //	57	
	" J1939 Enable        ",	//	58
	" J1939 Engine Brand  ",	//  59	
	" J1939 ECU Type      ",	//	60
	" J1939 Speed Adjust  ",	//	61
	" HighAirInletTempWarn",	//  62  
	" HighAirInletTempAlm ",	//  63  
	" AirInletTempAlmType ",	//  64  
	" Low Coolant Lev Warn",	//  65  
	" Low Coolant Lev Alm.",	//	66
	" CoolantLevelAlmType ",	//	67
	" Battery Charge Volt ",	//	68
	" Battery Charge Timer",	//  69
	" J1939 Message Delay ",	//  70
	" J1939 Speed Absence ",	//	71
	" Oil Pump Stop Press.",	//	72
	" Reset Service 1     ",	//	73
	" Reset Service 2     ",	//	74
	" Reset Service 3     ",	//	75
	" Reserved ENG Str-76 ",	//  76  
	" Reserved ENG Str-77 ",	//  77  
	" Reserved ENG Str-78 ",	//  78  
	" Reserved ENG Str-79 ",	//  79  
/*******************************/
	" Minimum Export Power",	//  0 
	" Export Power Ramp   ",	//  1  
	" Frequency Barrier   ",	//  2  
	" Speed Up/Dwn MinPuls",	//  3  
	" Speed Up/Dwn MaxPuls",	//  4 
	" Speed Up/Dwn PulsDel",	//  5  
	" Volt Up/Dwn MinPulse",	//  6  
	" Volt Up/Dwn MaxPulse",	//  7 
	" Volt Up/Dwn PulsDel.",	//  8  
	" Return To Mid Point ",	//  9 
	"Undefined SYN Str-110",	//  10
	"Undefined SYN Str-111",	//  11 
	"Undefined SYN Str-112",	//  12  
	"Undefined SYN Str-113",	//  13 
	"Undefined SYN Str-114",	//  14
	"Undefined SYN Str-115",	//  15 
	"Undefined SYN Str-116",	//  16  
	"Undefined SYN Str-117",	//  17  
	"Undefined SYN Str-118",	//  18  
	"Undefined SYN Str-119",	//  19  
/******************************/
	" Adjust Date         ",	 //	0
	" Adjust Month        ",	 //	1
	" Adjust Year         ",	 //	2
	" Adjust Hours        ",	 //	3
	" Adjust Minutes      ",	 //	4
	" Adjust Seconds      ", 	 //	5
/******************************/
	" MONDAY              ",	 //	0
	" TUESDAY             ",	 //	1
	" WEDNESDAY           ",	 //	2
	" THURSDAY            ",	 //	3
	" FRIDAY              ",	 //	4
	" SATURDAY            ",	 //	5
	" SUNDAY              ",	 //	6
/******************************/
	" Exerciser Schedule-1",	//	0
	" Exerciser Schedule-2",	//	1
	" Exerciser Schedule-3",	//	2
	" Exerciser Schedule-4",	//	3
	" Exerciser Schedule-5",	//	4
	" Exerciser Schedule-6",	//	5
	" Exerciser Schedule-7",	//	6
/******************************/
	"     SENDER TYPE     ",	//	0
	"     ALARM LEVEL     ",	//	1
	"    ALARM HANDLING   ",	//	2
	"  SENDER OPEN ALARM  ",	//	3
	"   LOW ALARM CHECK   ",	//	4
	"  LOW WARNING CHECK  ",	//	5
	"   HIGH ALARM CHECK  ",	//	6
	"  HIGH WARNING CHECK ",	//	7
	"   LOW ALARM LEVEL   ",	//	8
	"  LOW WARNING LEVEL  ",	//	9
	"   HIGH ALARM LEVEL  ",	//	10
	"  HIGH WARNING LEVEL ",	//	11
	"     SENDER CURVE    ",	//	12
	"     SENDER NAME     ",	//	13
	" SENDER LOW FAULT STR",	//	14
	"SENDER HIGH FAULT STR", 	//	15

	"       NOT USED      ",	//	16	
	"    OIL PRESSURE     ",	// 	17
	"   OIL PRESSURE 2    ",	//	18	 	
	"  ENGINE TEMPERATURE ",	//	19
	" ENGINE TEMPERATURE 2",	//	20
	"      FUEL LEVEL     ",	//	21
	"     FUEL LEVEL 2    ",	//  22
	"   OIL TEMPERATURE   ",	//	23	
	"  OIL TEMPERATURE 2  ",	//	24
	"  CANOPY TEMPERATURE ",	//	25	
	" CANOPY TEMPERATURE 2",	//	26
	" AMBIENT TEMPERATURE ",	//	27	
	"AMBIENT TEMPERATURE 2",	//	28	
	"   PRESSURE SENDER   ",	//	29
	"  TEMPERATURE SENDER ",	//	30
	"  PERCENTAGE SENDER  ",	//	31
								 
	 "       Always       ",	//	32
	 "  On Engine Running ",	//	33
	 "   After Hold Off   ",	//	34
	 "    Reserved Func   ",	//	35

	 "      Not Used      ",	//	36
	 "      Shut Down     ",	//	37
	 "      Load Dump     ",	//	38
	 "       Warning      ",	//	39

	 "       Disable      ",	//	40
	 "       Enable       ",	//	41
	" Reserv Sender Fn-42 ",	//	42
	" Reserv Sender Fn-43 ",	//	43
	" Reserv Sender Fn-44 ",	//	44
	" Reserv Sender Fn-45 ",	//	45
	" Reserv Sender Fn-46 ",	//	46
	" Reserv Sender Fn-47 ",	//	47
/****************************/
	"    User Function    ",	//	0
    " Oil Pressure Switch ",	//	1
    "  High Temp. Switch  ",	// 	2 
    " Coolant Level Switch",	//	3
    "Rectifier Fail Switch",	//	4
    "   Emergency Stop    ",	//	5
    " Alternator High Temp",	//	6
    " Excitation Loss Sw. ",	//	7
								
    "   Low Fuel Switch   ",	//	8
    " Earthquake Detector ",	//	9
    "  Gen Cont Auxiliary ",	//	10
    " Mains Cont Auxiliary",	//	11
    "   Force AUTO Mode   ",	//	12
    "   Force OFF Mode    ",	//	13
    "   Force TEST Mode   ",	//	14
    "   Over Load Switch  ",	//	15

    "  Manual Fuel Fill!  ",	//	16
    "      Priority       ",	//	17
    "    Remote Start     ",	//	18
    " Disable Auto Start  ",	//	19
    "   Force to Start    ",	//	20
    "    Fault Reset      ",	//	21
    "    Alarm Mute       ",	//	22
    "    Panel Lock       ",	//	23

    "   Fuel Pump Switch  ",	//	24
	" Secondary Volt&Freq ",	//  25 
	" Disable Protections ",	//	26
	" Auto Restore Inhibit",	//	27
	" GensetLoadingInhibit",	//	28
	"    Air Flap Fault   ",   //  29 
	"   Canopy Door Open  ",	//	30
	"  Station Door Open  ",	//	31
								
	" Station Over-Heat Sw",	//	32
	"   Weather Cloudy    ",	//	33
	"   Weather Rainy     ",	//	34
	"     Lightning       ",	//	35
	"   Cooler Fan Fault  ",	//	36
	"   Heater Fan Fault  ",	//	37
	"   Canopy Fan Fault  ",	//	38
	"  Station Fan Fault  ",	//	39

	"    Over Resonance   ",	//	40
	" Short-Circuit Alarm ",	//	41
	" Reset Service 1 Alm ",	//	42
	" Reset Service 2 Alm ",	//	43
	" Reset Service 3 Alm ",	//	44
	"     Heavy Duty      ",	//  45  
	" Synch. Genset Run   ",	//  46  
	" Synch. Genset onLoad",	//  47  
	"    Program Lock!    ",	//  48  
	"Fire Circuit Press.Sw",	//  49  
	"   Lamp Test Switch  ",	//  50  
	" Force to Combat Mode",	//  51 
	" Peak Lopping Inhibit",	//  52  
	" Power Export Inhibit",	//  53  
	"  Tertiary Volt&Freq ",	//  54  
	"Follower Power Export",	//  55  
	" Remote Priority +1  ",	//  56  
	" Remote Priority +2  ",	//  57  
	" Remote Priority +4  ",	//  58  
	" Remote Priority +8  ",	//  59  
	" Mains RestoreInhibit",	//  60 
	" Reserved Inp Func-62",	//  61  
	" Reserved Inp Func-63",	//  62  
	" Reserved Inp Func-64",	//  63
	" Reserved Inp Func-65",	//  64  
	" Reserved Inp Func-66",	//  65  
	" Reserved Inp Func-67",	//  66  
	" Reserved Inp Func-68",	//  67  
	" Reserved Inp Func-69",	//  68  
	" Reserved Inp Func-70",	//  69  
	" Reserved Inp Func-71",	//  70  
	" Reserved Inp Func-72",	//  71  
	" Reserved Inp Func-73",	//  72  
	" Reserved Inp Func-74",	//  73  
	" Reserved Inp Func-75",	//  74  
	" Reserved Inp Func-76",	//  75  
	" Reserved Inp Func-77",	//  76  
	" Reserved Inp Func-78",	//  77  
	" Reserved Inp Func-79",	//  78  
	" Reserved Inp Func-80",	//  79  
	" Reserved Inp Func-81",	//  80  
	" Reserved Inp Func-82",	//  81 
	" Reserved Inp Func-83",	//  82  
	" Reserved Inp Func-84",	//  83  
	" Reserved Inp Func-85",	//  84  
	" Reserved Inp Func-86",	//  85  
	" Reserved Inp Func-87",	//  86  
	" Reserved Inp Func-88",	//  87  
	" Reserved Inp Func-89",	//  88  
	" Reserved Inp Func-90",	//  89  
	" Reserved Inp Func-91",	//  90  
	" Reserved Inp Func-92",	//  91 
	" Reserved Inp Func-93",	//  92  
	" Reserved Inp Func-94",	//  93  
	" Reserved Inp Func-95",	//  94  
	" Reserved Inp Func-96",	//  95  
	" Reserved Inp Func-97",	//  96  
	" Reserved Inp Func-98",	//  97  
	" Reserved Inp Func-99",	//  98  
	"       Not Used      ",	//  99    
/*****************************/
	"         Fuel        ",	//	0
	"         Horn        ",	//	1
	"        Crank        ",	//	2
	"    Stop Solenoid    ",	//	3
	"   Genset Contactor  ",	//	4
	"    Mains Contactor  ",	//	5
	"      Idle Speed     ",	//	6
	"       Preheat       ",	//	7
								
	"   Alternate Crank   ",	//	8
	"  Fuel Main Winding  ",	//	9
	"  Genset Close Pulse ",	//	10
	"  Genset Open Pulse  ",	//	11
	"    Genset UV Coil   ",	//	12
	"  Mains Close Pulse  ",	//	13
	"   Mains Open Pulse  ",	//	14
	"    Mains UV Coil    ",	//	15

	"   Flashing Relay    ",	//	16
	"    Gas Solenoid     ",	//	17
	"  Fuel Pump Control  ",	//	18
	"        Choke        ",	//	19
	"     Block Heater    ",	//	20
	"    Coolant Cooler   ",	//	21
	"    Coolant Heater   ",	//	22
	"     Fan Control     ",	//	23

	"  Air Flap Control   ",	//	24
	"  Canopy Fan Control ",	//	25
	" Ambient Fan Control ",	//	26
	" Remote Start Output ",	//	27
	"     Genset Ready    ",	//	28
	"  Bus Bar Contactor  ",	//	29
	" Bus Bar Close Pulse ",	//	30
	"  Bus Bar Open Pulse ",	//	31

	"   Bus Bar UV Coil   ",	//	32
	"   Load Shedding     ",	//	33
	"      Load Add       ",	//	34
	"    Load Substract   ",	//	35
	"  Service 1 Request  ",	//	36
	"  Service 2 Request  ",	//	37
	"  Service 3 Request  ",	//	38
	" Mains Ph.Order Fail ",	//	39

	" Genset Ph.Order Fail",	//	40
	"     Auto Ready      ",	//	41
	" Weekly Schedule On  ",	//	42
	"     Exerciser On    ",	//	43
	"     Mains Fail      ",	//	44
	"   Pgm Mode Active   ",	//	45
	"   Engine Running    ",	//	46
	" Genset Voltage Ok!  ",	// 	47

	" Alarm Check Enable  ",	//  48
	"  Oil Pressure Ok!   ",	//  49
	"   Shutdown Alarm    ",	//	50
	"   Loaddump Alarm    ",	//	51
	"    Warning Alarm    ",	//	52
	" Shutdown or Loaddump",	//	53
	"Shdwn + Lddump + Warn",	//	54
	"     Test Mode       ",	//	55

	"     Auto Mode       ",	//	56					
	"    Manual Mode      ",	//	57
	"      Off Mode       ",	//	58
	"     Not In Auto     ",	//	59
	"    Engine At Rest   ",	//	60
	" Engine Start Delay  ",	//	61
	"     Preheating      ",	//	62
	"Waiting Oil Flash Off",	//	63

	"    Engine Heating   ",	//	64
	"    Synchronizing    ",	//	65
	"    Cooling Down     ",	//	66
	"      Stopping       ",	//	67
	" Protections Disabled",	//	68
	"  Remote Start Input ",	//	69
	"  Disable Auto Start ",	//	70
	"    Force to Start   ",	//	71

	" AutoRestoreInhibited",	//	72
	" Gen.LoadingInhibited",	//	73
	"Inp.Expansion1Mounted",	//	74
	"Inp.Expansion2Mounted",	//	75
	"Out.Expansion1Mounted",	//	76
	"Out.Expansion2Mounted",	//	77
	"     Master Unit     ",	//	78
	"MultiGen Remote Start",	//	79
	"Remote Control Out 1 ",	//	80
	"Remote Control Out 2 ",	//	81
	"Remote Control Out 3 ",	//	82
	"Remote Control Out 4 ",	//	83
	"Remote Control Out 5 ",	//	84
	"Remote Control Out 6 ",	//	85
	"Remote Control Out 7 ",	//	86
	"Remote Control Out 8 ",	//	87
	"Remote Control Out 9 ",	//	88
	"Remote Control Out 10",	//	89
	"Remote Control Out 11",	//	90
	"Remote Control Out 12",	//	91
	"Remote Control Out 13",	//	92
	"Remote Control Out 14",	//	93
	"Remote Control Out 15",	//	94
	"Remote Control Out 16",	//	95
	"Multi Load Add 1 Out ",	//	96
	"Multi Load Sub 1 Out ",	//	97
	"Multi Load Add 2 Out ",	//	98
	"Multi Load Sub 2 Out ",	//	99
	"Multi Load Add 3 Out ",	//	100
	"Multi Load Sub 3 Out ",	//	101
	"Multi Load Add 4 Out ",	//	102
	"Multi Load Sub 4 Out ",	//	103
	"Multi Load Add 5 Out ",	//	104
	"Multi Load Sub 5 Out ",	//	105
	"  Heavy Duty Active  ",	//	106
	" ECU PowerOn Output  ",	//	107
	"Battery Charge Active",	//	108
	"FireCircuitP.S.Active",	//	109
	"Wait Prior toTransfer",	//	110
	" Secondary Volt&Freq ",	//	111
	"   Lamp Test Active  ",	//	112
	"  Alarm Mute Active  ",	//	113
	"  Combat Mode Active ",	//	114
	" Peak Lopping Started",	//	115
	" Power Export Started",	//	116
	"Authorized Mains Unit",	//	117
	"     Busbar Ready    ",	//	118
	"Running In Droop Mode",	//	119
	"  Tertiary Volt&Freq ",	//	120
	"Smart Load Management",	//	121
	" Follower Mode Active",	//	122
	"   Oil Pump Output   ",	//	123
	"  Speed Up Pulse Out ",	//	124
	" Speed Down Pulse Out",	//	125
	"  Volt Up Pulse Out  ",	//	126
	" Volt Down Pulse Out ",	//	127
	"  Synch. Check Out   ",	//	128
	"  Zero Power Relay   ",	//	129
	"Reserved Out Func-131",	//	130
	"Reserved Out Func-132",	//	131
	"Reserved Out Func-133",	//	132
	"Reserved Out Func-134",	//	133
	"Reserved Out Func-135",	//	134
	"Reserved Out Func-136",	//	135
	"Reserved Out Func-137",	//	136
	"Reserved Out Func-138",	//	137
	"Reserved Out Func-139",	//	138
	"Reserved Out Func-140",	//	139
	"Reserved Out Func-141",	//	140
	"Reserved Out Func-142",	//	141
	"Reserved Out Func-143",	//	142
	"Reserved Out Func-144",	//	143
	"Reserved Out Func-145",	//	144
	"Reserved Out Func-146",	//	145
	"Reserved Out Func-147",	//	146
	"Reserved Out Func-148",	//	147
	"Reserved Out Func-149",	//	148
	"Reserved Out Func-150",	//	149
	"Reserved Out Func-151",	//	150
	"Reserved Out Func-152",	//	151
	"Reserved Out Func-153",	//	152
	"Reserved Out Func-154",	//	153
	"Reserved Out Func-155",	//	154
	"Reserved Out Func-156",	//	155
	"Reserved Out Func-157",	//	156
	"Reserved Out Func-158",	//	157
	"Reserved Out Func-159",	//	158
	"Reserved Out Func-160",	//	159
	"Reserved Out Func-161",	//	160
	"Reserved Out Func-162",	//	161
	"Reserved Out Func-163",	//	162
	"Reserved Out Func-164",	//	163
	"Reserved Out Func-165",	//	164
	"Reserved Out Func-166",	//	165
	"Reserved Out Func-167",	//	166
	"Reserved Out Func-168",	//	167
	"Reserved Out Func-169",	//	168
	"Reserved Out Func-170",	//	169
	"Reserved Out Func-171",	//	170
	"Reserved Out Func-172",	//	171
	"Reserved Out Func-173",	//	172
	"Reserved Out Func-174",	//	173
	"Reserved Out Func-175",	//	174
	"Reserved Out Func-176",	//	175
	"Reserved Out Func-177",	//	176
	"Reserved Out Func-178",	//	177
	"Reserved Out Func-179",	//	178
	"Reserved Out Func-180",	//	179
	"Reserved Out Func-181",	//	180
	"Reserved Out Func-182",	//	181
	"Reserved Out Func-183",	//	182
	"Reserved Out Func-184",	//	183
	"Reserved Out Func-185",	//	184
	"Reserved Out Func-186",	//	185
	"Reserved Out Func-187",	//	186
	"Reserved Out Func-188",	//	187
	"Reserved Out Func-189",	//	188
	"Reserved Out Func-190",	//	189
	"Reserved Out Func-191",	//	190
	"Reserved Out Func-192",	//	191
	"Reserved Out Func-193",	//	192
	"Reserved Out Func-194",	//	193
	"Reserved Out Func-195",	//	194
	"Reserved Out Func-196",	//	195
	"Reserved Out Func-197",	//	196
	"Reserved Out Func-198",	//	197
	"Reserved Out Func-199",	//	198
	"      Not Used       ",	//	199
/******************************/
	" APN User Name       ",	// 	0
	" APN Password        ",	//	1
	" APN Name            ",	//	2
	" SMS Service CenterNo",	//	3
/******************************/
	" Network IP Address  ",	//	0
	" Gateway IP Address  ",	//	1
	" Subnet Mask         ",	// 	2
	" User IP Mask 1      ",	//	3
	" User IP Mask 2      ",	//	4
	" User IP Mask 3      ",	//	5
	" Domain Name         ",	//	6
	" Membership Address  ",	//	7
	" User Name :Password ",	//	8
	" Ping Address        ",	// 	9
	" Ip Confirmation Addr",	//	10
	" Rainbow Address 1   ",	//	11
	" Rainbow Address 2   ",	//	12
	" Mail Account Name   ",	//  13  
	" Mail Account Pass.  ",	//  14  
	" Mail Server Name    ",	//  15  
	" E-mail Address 1    ",	//  16
	" E-mail Address 2    ",	//  17
	" E-mail Address 3    ",	//  18
	" Reserved TCP Str-19 ",	//  19  
/******************************/
 	" Genset kW Rate      ",  	//	0
	" Genset kVAr Rate    ",   	//  1
 	" Mains XFMR kW Rate  ",  	//	2
	" Mains XFMR kVAr Rate",   	//  3
 	" Device Address      ",  	//	4
	" Unit Priority       ",	//	5
	" Datalink Baud Rate  ",	//  6
	" Genset Number InSys ",	//	7
	" Minimum GensetAction",	//	8
	" Mains Synch Unit Num",	//	9
	" Master Change Delay ",   	//	10
	" System Start Option ",	//	11
	" System Start Power  ",  	//	12
	" Insuff.Power Action ",	//	13
	" System Reserve Power",  	//	14
	" Load Management Type",	//	15
	" Dead Busbar Volt Lim",	//	16
	" Gov Control Enable  ",  	//	17
	" Gov Reverse Polarity",  	//	18
    " Governor Out LowLim ",   	//	19
	" Governor Out Gain   ",   	//	20
    " Gov Out Rest Point  ",   	//	21
	" Gov Droop Enable    ",  	//	22
	" Governor Out Droop  ",  	//	23
	" AVR Control Enable  ",  	//	24
	" AVR Reverse Polarity",  	//	25
    " AVR Out Low Limit   ",  	//	26
	" AVR Out High Limit  ",   	//	27
    " AVR Out Rest Point  ",   	//	28
	" AVR Droop Enable    ",  	//	29
	" AVR Out Droop       ",  	//	30
	" ExcitationLossAction",	//	31
	" No Break Tr. Enable ",  	//	32
    " Sync. Fail Timeout  ",  	//	33
	" Sync. Contactor Tim ",   	//	34
    " Max Freq. Difference",   	//	35
	" Volt Difference Chck",	//	36
    " Max Volt Difference ",   	//	37
    " Max Phase Difference",   	//	38
	" Phase Angle Offset  ",	//  39		
	" Dwell Timeout       ",	//	40
									
	" Phase Sycnh G Gain  ",	//	41
	" Phase Synch P Gain  ",	//	42
	" Phase Synch I Gain  ",	//	43
	" Phase Synch D Gain  ",	//	44
	
	" Freq. Synch G Gain  ",	//	45
	" Freq. Synch P Gain  ",	//	46
	" Freq. Synch I Gain  ",	//	47
	" Freq. Synch D Gain  ",	//	48
									
	" Volt. Sycnh G Gain  ",	//	49
	" Volt. Synch P Gain  ",	//	50
	" Volt. Synch I Gain  ",	//	51
	" Volt. Synch D Gain  ",	//	52
								  
	" Soft Transfer Enable",  	//	53
	" Soft Transfer Timer ",  	//	54
	" kW Ramp (kW/sec)    ",  	//	55
	" kVAr Ramp (kVAr/sec)",  	//	56
	" Ramp On High Limit  ",  	//	57
	" Ramp Off Low Limit  ",  	//	58
 									
 	" kW Share G Gain     ",	//  59  
	" kW Share P Gain     ",	//  60  
	" kW Share I Gain     ",	//  61  
	" kW Share D Gain     ",	//  62 

	" kVAr Share G Gain   ",	//  63  
	" kVAr Share P Gain   ",	//  64  
	" kVAr Share I Gain   ",	//  65  
	" kVAr Share D Gain   ",	//  66 
 
	" Nominal Freq G Gain ",	//  67  
	" Nominal Freq P Gain ",	//  68 
	" Nominal Freq I Gain ",	//  69  
	" Nominal Freq D Gain ",	//  70  
									
	" Nominal Volt G Gain ",	//  71 
	" Nominal Volt P Gain ",	//  72
	" Nominal Volt I Gain ",	//  73 
	" Nominal Volt D Gain ",	//  74 

    " MoreGen Delayed Strt",   	//	75
    " MoreGen Quick Start ",   	//	76
    " LessGen Stop Offset ",  	//	77
    " Genset Run/Stp Delay",  	//	78
	" Load Manage. Inhibit",	//	79

	" Parallel Check Delay",  	//	80
	" Mains Rev Pow Limit ",  	//	81
	" ROCOF df/dt (Hz/Sec)",  	//	82
	" Vector Shift Limit  ",  	//	83

	" Peak Lopping Enable ",  	//	84
	" Maximum Mains Power ",  	//	85
    " PeakLopp Start Power",  	//	86
	" PeakLopp Stop Power ",  	//	87
	" PeakLopp Str/Stp Del",  	//	88

	" Power Export Enable ",  	//	89
	" Exported Power      ",   	//	90
    " Exported PowerFactor",   	//	91

	" Command kW G Gain   ",	//  92  
	" Command kW P Gain   ",	//  93  
	" Command kW I Gain   ",	//  94  
	" Command kW D Gain   ",	//  95 
	 							   
	" Command kVAr G Gain ",	//  96  
	" Command kVAr P Gain ",	//  97 
	" Command kVAr I Gain ",	//  98 
	" Command kVAr D Gain ",	//  99 									
/******************************/
	" Mains  Volt L1 Calib",  	//	0
	" Mains  Volt L2 Calib",  	//	1
	" Mains  Volt L3 Calib",  	//	2
	" Genset Volt L1 Calib",  	//	3
	" Genset Volt L2 Calib",  	//	4
	" Genset Volt L3 Calib",  	//	5
	" Mains  Curr L1 Calib",  	//	6
	" Mains  Curr L2 Calib",  	//	7
	" Mains  Curr L3 Calib",  	//	8
	" Genset Curr L1 Calib",  	//	9
	" Genset Curr L2 Calib",  	//	10
	" Genset Curr L3 Calib",  	//	11
	" Battery Volt Calibr.",  	//	12
	" Charge Volt Calibr. ",	//	13
	" Current Mask Limit  ",	//	14
	" Reserved CLB Str-15 ",	//  15 
/******************************/
    "NoRemote Start Signal",	//	0
    "  Remote Start Signal",	// 	1
	"      Mains OK       ",	//	2
	"    Mains Failure    ",	//	3
	" Engine Start Delay  ",	//	4
	"    Engine Preheat   ",	//	5
	" Oil Pressure Exist !",	//	6
	"     Crank Rest      ",	//	7
	"     Cranking        ",	//	8
	"   Run Idle Speed    ",	//	9
	"   Engine Heating    ",	//	10
	"  Running Off Load   ",	//	11
	"  Synch -> Mains     ",	//	12
	"   Load Ramping Up   ",	//	13
	"  Gen CB Activation  ",	//	14
	"   Gen CB Timeout    ",	//	15
	"   Running on Load   ",	//	16
	"    Peak Loopping    ",	//	17
	"   Power Exporting   ",	//	18
	"   Load Sharing      ",	//	19
	"   Synch <- Mains    ",	//	20
	"  Load Ramping Down  ", 	//	21
	"  Mains CB Activat.  ",	//	22
	"  Mains CB Timeout   ",	//	23
	"  Stop With Cooldown ",	//  24
	"      Cooldown       ",	//	25
	"  Stop Idle Speed    ",	//	26
	"   Immediate Stop    ",	//  27
	"      Stopping       ",	//	28
	"Wait Mains->Gen Trans",	//  29
	"Wait Gen->Mains Trans",	//  30
	"   Start Request     ",	//  31
///////// MODEM STATES ////////////
	"GPRS Ready on Roaming",	//  32 // GSM Modem Status Strings // 
	" Modem Connected !   ",	//  33
	"  Enter PIN Password ",	//  34
	"  Insert SIM Card !  ",	//  35
	" No internet present ",	//  36
	"     Bad APN info    ",	//  37
	"  No Modem Response  ",	//  38
	"     Sending SMS     ",	//  39
	"    Incorrect PIN    ",	//  40
	" GPRS reconnection...",	//  41
	"     Modem Ready     ",	//  42
	"Low signal/No network",	//  43
	"Wrong Answer         ",	//  44
	"IP Error/No GPRS Serv",	//  45
	"  Searching Network  ",	//  46
	"     Modem Closed    ",	//  47
	" Bad Service Ctr. Nr ",	//  48
	"  Bad Telephone Nr.  ",	//  49
	" Server Session Error",	//  50	
	"GPRS unusable/Bad APN",	//  51
	"Modem error,resetting",	//  52
	" SMS error, trying...",	//  53
	" SMS/E-MAIL preparing",	//  54
	"  SMS send/rcv error ",	//  55
	" Modem initializing  ",	//  56
	"   SMS/E-MAIL Sent   ",	//  57
	" GPRS Service Present",	//  58
	"      GPRS Ready     ",	//  59
	"  Data sending error ",	//  60
	"   New SMS received  ",	//  61
	"GPRS not active,would",	//  62	//we use this 2 line. for sms command response in bad case.
	" you like turn it on?",	//  63
	"Unsupported command! ",	//  64
	"GPRS atinit state now",	//  65
	". Please wait for ip.",	//  66
	"  SMS deleting error ",	//  67
	"     GPRS Stopped    ",	//  68
	"Command not supported",	//  69
	" Remote Server Update",	//  70 
	"IP UpdatedSuccesfully",	//  71
	"Unsupported Message  ",	//  72 added by aykut,
	"Domain Error/NoCredit",	//  73
	"No host onDomain name",	//  74	 	
	"DynDNS Failed. Use IP",	//  75
/******************************/
	" Genset Low Frequency",	//  48	Alarm[6].0
	"Genset High Frequency",	//  49	Alarm[6].1 
	"    Engine Low RPM   ",	//  50	Alarm[6].2
	"   Engine High RPM   ",	//  51	Alarm[6].3
	"  Genset Low Voltage ",	//  52	Alarm[6].4
	" Genset High Voltage ",	//  53	Alarm[6].5
	"   Low Oil Pressure  ",	//  54 	Alarm[6].6
	"  High Oil Pressure  ",	//	55	Alarm[6].7
	"   Low Engine Temp.  ",	//	56	Alarm[7].0
	"  High Engine Temp.  ",	//  57 	Alarm[7].1
	"    Low Fuel Level   ",	//  58 	Alarm[7].2
	"   High Fuel Level   ",	//	59	Alarm[7].3
	"     Low Oil Temp    ",	//	60	Alarm[7].4
	"    High Oil Temp    ",	//	61	Alarm[7].5
	"   Low Canopy Temp   ",	//	62	Alarm[7].6
	"   High Canopy Temp  ",	//	63 	Alarm[7].7
	"   Low Ambient Temp  ",	//	64	Alarm[8].0
	"  High Ambient Temp  ",	//	65 	Alarm[8].1
	" Sender 1 Low  Level ",	//	66  Alarm[8].2
	" Sender 2 Low  Level ",	//	67  Alarm[8].3
	" Sender 3 Low  Level ",	//	68  Alarm[8].4
	" Sender 4 Low  Level ",	//	69  Alarm[8].5
	" Sender 5 Low  Level ",	//	70  Alarm[8].6
	" Sender 6 Low  Level ",	//	71  Alarm[8].7
	" Sender 7 Low  Level ",	//	72  Alarm[9].0
	" Sender 8 Low  Level ",	//	73  Alarm[9].1
	" Sender 1 High Level ",	//	74  Alarm[9].2
	" Sender 2 High Level ",	//	75  Alarm[9].3
	" Sender 3 High Level ",	//	76 	Alarm[9].4
	" Sender 4 High Level ",	//	77  Alarm[9].5
	" Sender 5 High Level ",	//	78  Alarm[9].6
	" Sender 6 High Level ",	//	79  Alarm[9].7
	" Sender 7 High Level ",	//	80  Alarm[10].0
	" Sender 8 High Level ",	//	81  Alarm[10].1
	"Oil Pressure Snd Open",	//  82 	Alarm[10].2
	"Engine Temp. Snd Open",	//  83 	Alarm[10].3
	" Fuel Level Snd Open ",	//  84 	Alarm[10].4
	"  Oil Temp Snd Open  ",	//	85	Alarm[10].5
	" Canopy Temp Snd Open",	//	86 	Alarm[10].6
	"Ambient Temp Snd Open",	//	87 	Alarm[10].7
	" Sender 1 Open Circ. ",	//  88 	Alarm[11].0
	" Sender 2 Open Circ. ",	//  89	Alarm[11].1
	" Sender 3 Open Circ. ",	//  90	Alarm[11].2
	" Sender 4 Open Circ. ",	//  91	Alarm[11].3
	" Sender 5 Open Circ. ",	//  92	Alarm[11].4
	" Sender 6 Open Circ. ",	//  93	Alarm[11].5
	" Sender 7 Open Circ. ",	//  94	Alarm[11].6
	" Sender 8 Open Circ. ",	//  95	Alarm[11].7
	" Low Battery Voltage ",	//  96 	Alarm[12].0
	" High Battery Voltage",	//  97 	Alarm[12].1 
	"    Fail To Start    ",	//  98 	Alarm[12].2 
	"    Fail To Stop     ",	//  99 	Alarm[12].3
	"   Low Charge Volt   ",	// 100 	Alarm[12].4
	"   J1939 ECU Error   ",	// 101 	Alarm[12].5
	" High Air Inlet Temp ",	// 102	Alarm[12].6	
	"  Low Coolant Level  ",	// 103	Alarm[12].7
	"  Voltage Unbalance  ",	// 104  Alarm[13].0
	"  Current Unbalance  ",	// 105	Alarm[13].1
	"    Over Current     ",	// 106 	Alarm[13].2
	"      Over Load      ",	// 107 	Alarm[13].3 
	"    Reverse Power    ",	// 108 	Alarm[13].4
	" Gen Phase Order Fail",	// 109 	Alarm[13].5
	"Mains Phase OrderFail",	// 110 	Alarm[13].6
	" Gen CB Fail To Close",	// 111 	Alarm[13].7
	" Gen CB Fail To Open ",	// 112 	Alarm[14].0						  
	"Mains CB Fail ToClose",	// 113 	Alarm[14].1
	"Mains CB Fail To Open",	// 114 	Alarm[14].2
	"DeviceAddressOverflow",	// 115 	Alarm[14].3
	"   Comm. Bus Error   ",	// 116	Alarm[14].4
	"   Excitation Lost   ",	// 117 	Alarm[14].5
	"  Service 1 Request  ",	// 118 	Alarm[14].6
	"  Service 2 Request  ",	// 119 	Alarm[14].7
	"  Service 3 Request  ",	// 120 	Alarm[15].0
	" G59: No Mains Freq. ",	// 121 	Alarm[15].1
	" G59: Mains Freq Fail",	// 122 	Alarm[15].2
	"G59: Mains ReversePow",	// 123 	Alarm[15].3
	"G59: R.o.c.o.f. df/dt",	// 124 	Alarm[15].4
	"  G59: Vector Shift  ",	// 125 	Alarm[15].5
	" NVM Function Failure",	// 126 	Alarm[15].6
	"  Communication Lost ",	// 127 	Alarm[15].7
	" Synchronization Fail",	// 128 	Alarm[16].0
	" Loss Of Pick-Up Sign",	// 129 	Alarm[16].1
	"   Unit Not Tested!  ",	// 130 	Alarm[16].2
	"Wrong Expansion Order",	// 131 	Alarm[16].3
	" Busbar Voltage Fail ",	// 132 	Alarm[16].4
	" Busbar Freq. Fail   ",	// 133 	Alarm[16].5
	"Min Genset NotReached",	// 134 	Alarm[16].6
	"DeadBus Volt Exceeded",	// 135 	Alarm[16].7
	"Insuff. StartUp Power",	// 136 	Alarm[16].0
	"  Fuel Pump Failure  ",	// 137 	Alarm[17].1
	"     Unit Locked!    ",	// 138 	Alarm[17].2
	"  EEprom Write Fault ",	// 139 	Alarm[17].3
	"Low Battery-2 Voltage",	// 140 	Alarm[17].4
	" High Battery-2 Volt.",	// 141 	Alarm[17].5 
	"   Engine Running!   ",	// 142 	Alarm[17].6
	"    Auto Not Ready   ",	// 143 	Alarm[17].7
	"  Only FAT32 Allowed!",	// 144 	Alarm[18].0
	"  Too Few Mains Unit ",	// 145 	Alarm[18].1
	" Mains Priority Fault",	// 146 	Alarm[18].2
	"   GPS Disconnected  ",	// 147 	Alarm[18].3
	"   GPS Signal Lost   ",	// 148 	Alarm[18].4
	"   Unknown Topology  ",	// 149 	Alarm[18].5
	" Reserved Alarm -150 ",	// 150 	Alarm[18].6
	" Reserved Alarm -151 ",	// 151 	Alarm[18].7
	" Reserved Alarm -152 ",	// 152 	Alarm[19].0
	" Reserved Alarm -153 ",	// 153 	Alarm[19].1
	" Reserved Alarm -154 ",	// 154 	Alarm[19].2
	" Reserved Alarm -155 ",	// 155 	Alarm[19].3
	" Reserved Alarm -156 ",	// 156 	Alarm[19].4
	" Reserved Alarm -157 ",	// 157 	Alarm[19].5
	" Reserved Alarm -158 ",	// 158 	Alarm[19].6
	" Reserved Alarm -159 ",	// 159 	Alarm[19].7
	" Reserved Alarm -160 ",	// 160 	Alarm[20].0
	" Reserved Alarm -161 ",	// 161 	Alarm[20].1
	" Reserved Alarm -162 ",	// 162 	Alarm[20].2
	" Reserved Alarm -163 ",	// 163 	Alarm[20].3
	" Reserved Alarm -164 ",	// 164 	Alarm[20].4
	" Reserved Alarm -165 ",	// 165 	Alarm[20].5
	" Reserved Alarm -166 ",	// 166 	Alarm[20].6
	" Reserved Alarm -167 ",	// 167 	Alarm[20].7
	" Reserved Alarm -168 ",	// 168	Alarm[21].0
	" Reserved Alarm -169 ",	// 169	Alarm[21].1
	" Reserved Alarm -170 ",	// 170 	Alarm[21].2
	" Reserved Alarm -171 ",	// 171 	Alarm[21].3
	" Reserved Alarm -172 ",	// 172 	Alarm[21].4
	" Reserved Alarm -173 ",	// 173 	Alarm[21].5
	" Reserved Alarm -174 ",	// 174 	Alarm[21].6
	" Reserved Alarm -175 ",	// 175 	Alarm[21].7
	" Reserved Alarm -176 ",	// 176 	Alarm[22].0
	" Reserved Alarm -177 ",	// 177 	Alarm[22].1
	" Reserved Alarm -178 ",	// 178 	Alarm[22].2
	" Reserved Alarm -179 ",	// 179 	Alarm[22].3
	" Reserved Alarm -180 ",	// 180 	Alarm[22].4
	" Reserved Alarm -181 ",	// 181 	Alarm[22].5
	" Reserved Alarm -182 ",	// 182 	Alarm[22].6
	" Reserved Alarm -183 ",	// 183 	Alarm[22].7
	" Reserved Alarm -184 ",	// 184 	Alarm[23].0
	" Reserved Alarm -185 ",	// 185 	Alarm[23].1
	" Reserved Alarm -186 ",	// 186 	Alarm[23].2
	" Reserved Alarm -187 ",	// 187 	Alarm[23].3
	" Reserved Alarm -188 ",	// 188 	Alarm[23].4
	" Reserved Alarm -189 ",	// 189 	Alarm[23].5
	" Reserved Alarm -190 ",	// 190 	Alarm[23].6
	" Reserved Alarm -191 ",	// 191 	Alarm[23].7
	" Reserved Alarm -192 ",	// 192 	Alarm[24].0
	" Reserved Alarm -193 ",	// 193 	Alarm[24].1
	" Reserved Alarm -194 ",	// 194 	Alarm[24].2
	" Reserved Alarm -195 ",	// 195 	Alarm[24].3
	" Reserved Alarm -196 ",	// 196 	Alarm[24].4
	" Reserved Alarm -197 ",	// 197 	Alarm[24].5
	" Reserved Alarm -198 ",	// 198 	Alarm[24].6
	" Reserved Alarm -199 ",	// 199 	Alarm[24].7
	" Reserved Alarm -200 ",	// 200 	Alarm[25].0
	" Reserved Alarm -201 ",	// 201 	Alarm[25].1
	" Reserved Alarm -202 ",	// 202 	Alarm[25].2
	" Reserved Alarm -203 ",	// 203 	Alarm[25].3
	" Reserved Alarm -204 ",	// 204 	Alarm[25].4
	" Reserved Alarm -205 ",	// 205 	Alarm[25].5
	" Reserved Alarm -206 ",	// 206 	Alarm[25].6
	" Reserved Alarm -207 ",	// 207 	Alarm[25].7
	" Reserved Alarm -208 ",	// 208 	Alarm[26].0
	" Reserved Alarm -209 ",	// 209 	Alarm[26].1
	" Reserved Alarm -210 ",	// 210 	Alarm[26].2
	" Reserved Alarm -211 ",	// 211 	Alarm[26].3
	" Reserved Alarm -212 ",	// 212 	Alarm[26].4
	" Reserved Alarm -213 ",	// 213 	Alarm[26].5
	" Reserved Alarm -214 ",	// 214 	Alarm[26].6
	" Reserved Alarm -215 ",	// 215 	Alarm[26].7
	" Reserved Alarm -216 ",	// 216 	Alarm[27].0
	" Reserved Alarm -217 ",	// 217 	Alarm[27].1
	" Reserved Alarm -218 ",	// 218 	Alarm[27].2
	" Reserved Alarm -219 ",	// 219 	Alarm[27].3
	" Reserved Alarm -220 ",	// 220 	Alarm[27].4
	" Reserved Alarm -221 ",	// 221 	Alarm[27].5
	" Reserved Alarm -222 ",	// 222 	Alarm[27].6
	" Reserved Alarm -223 ",	// 223 	Alarm[27].7
	" Reserved Alarm -224 ",	// 224 	Alarm[28].0
	" Reserved Alarm -225 ",	// 225 	Alarm[28].1
	" Reserved Alarm -226 ",	// 226 	Alarm[28].2
	" Reserved Alarm -227 ",	// 227 	Alarm[28].3
	" Reserved Alarm -228 ",	// 228 	Alarm[28].4
	" Reserved Alarm -229 ",	// 229 	Alarm[28].5
	" Reserved Alarm -230 ",	// 230 	Alarm[28].6
	" Reserved Alarm -231 ",	// 231 	Alarm[28].7
	" Reserved Alarm -232 ",	// 232 	Alarm[29].0
	" Reserved Alarm -233 ",	// 233 	Alarm[29].1
	" Reserved Alarm -234 ",	// 234 	Alarm[29].2
	" Reserved Alarm -235 ",	// 235 	Alarm[29].3
	" Reserved Alarm -236 ",	// 236 	Alarm[29].4
	" Reserved Alarm -237 ",	// 237 	Alarm[29].5
	" Reserved Alarm -238 ",	// 238 	Alarm[29].6
	" Reserved Alarm -239 ",	// 239 	Alarm[29].7
	" Reserved Alarm -240 ",	// 240 	Alarm[30].0
	" Reserved Alarm -241 ",	// 241 	Alarm[30].1
	" Reserved Alarm -242 ",	// 242 	Alarm[30].2
	" Reserved Alarm -243 ",	// 243 	Alarm[30].3
	" Reserved Alarm -244 ",	// 244 	Alarm[30].4
	" Reserved Alarm -245 ",	// 245 	Alarm[30].5
	" Reserved Alarm -246 ",	// 246 	Alarm[30].6
	" Reserved Alarm -247 ",	// 247 	Alarm[30].7
	" Reserved Alarm -248 ",	// 248 	Alarm[31].0
	" Reserved Alarm -249 ",	// 249 	Alarm[31].1
	" Reserved Alarm -250 ",	// 250 	Alarm[31].2
	" Reserved Alarm -251 ",	// 251 	Alarm[31].3
	"     Fuel Filling!   ",	// 252 	Alarm[31].4
	"    Fuel Stealing!   ",	// 253 	Alarm[31].5
	"  Maintenance Done!  ",	// 254 	Alarm[31].6
	" Reserved Alarm -255 ",	// 255 	Alarm[31].7
/*******************************/
	"Mains Failure        ",	//	0
	"Mains Restored       ",	//	1
	"Fuel Theft Detected !",	//	2
	"Fuelling in Action   ",	//	3
	" Engine is Running ! ",	//  4
	"  Engine Stopped !   ",	// 	5
	" Reserved SMS Str-6  ",	//  6  
	" Reserved SMS Str-7  ",	//  7  
/******************************/
 	"    Coolant Level    ",	//	0
	"   Engine Oil Level  ",	//	1
	"   Coolant Pressure  ",	//	2
	" Fuel Delivery Press.",	//	3
	" Barometric Pressure ",	//	4
	" Crank Case Pressure ",	//	5
	"   Boost Pressure    ",	//	6
	"  Air Inlet Pressure ",  	//	7
	"Air Filter Diff. Pres",	//	8 
	"  Engine Fuel Temp.  ",	//	9
	"  Ambient Air Temp.  ",	//	10
	"Air Inlet Temperature",	//	11
	" Intake Manifold Temp",	//	12
	"   Exhaust Gas Temp  ",	//	13	
	"  Engine Fuel Rate   ",	//	14
	" Instant Fuel Economy",	//	15
	" Average Fuel Economy",	//	16
	"   Total Fuel Used   ",	//	17
	"     Engine Hours    ",	//	18
	" Engine Percent Load ",	//	19
	" Engine Percent Torq.",	//	20
	" Demand Eng Per Torq.",	//	21
	"Accelerator Pedal Pos",	//	22
	" Battery Potential Sw",	//	23
	"Reserved J1939 Str-24",	//  24  
	"Reserved J1939 Str-25",	//  25  
	"Reserved J1939 Str-26",	//  26  
	"Reserved J1939 Str-27",	//  27  
	"Reserved J1939 Str-28",	//  28  
	"Reserved J1939 Str-29",	//  29  
	"Reserved J1939 Str-30",	//  30  
	"Reserved J1939 Str-31",	//  31  
/*******************************/
	"  Fuel Filter Fault  ",	//	0
    "    Water in Fuel    ",	//	1
    "   Oil Level Fault   ",	//	2
    "  Oil Pressure Fault ",	//	3	
    "  Boost Temp. Fault  ",	//	4
    " Boost Pressure Fault",	//	5
    " Air Filter Restrict.",	//	6
    " Atmosph. Press.Fault",	//	7
    "  Coolant Temp Fault ",	//	8
    " Coolant Level Fault ",	//	9
    " Crankcase Vent.Press",	//	10
    " Battery Voltage Faul",	//	11
    " Injector Press.Fault",	//	12
 	" Inlet Air Temp Fault",	//	13
	"   Fuel Temp Fault   ",	//	14
	"   Oil Temp Fault    ",	//	15
	" Engine Speed Fault  ",	//	16
	" Incorrect ECU Softw.",	//	17
 	"ECU Internal +5V Fail",	//	18
	" Preheat Relay Fault ",	//	19
	"  ECU Hardware Fail  ",	//	20
	" ECU Memory Failure  ",	//	21
	" Camshaft Sensor Fail",	//	22
	" Flywheel Sensor Fail",	//	23
	" ECU Memory Failure  ",	//	24
	" Injector Cylinder 1 ",	//	25
	" Injector Cylinder 2 ",	//	26
	" Injector Cylinder 3 ",	//	27
	" Injector Cylinder 4 ",	//	28
	" Injector Cylinder 5 ",	//	29
	" Injector Cylinder 6 ",	//	30
	" Injector Cylinder 7 ",	//	31
	" Injector Cylinder 8 ",	//	32
	"  Start Motor Relay  ",	//	33
	"Secondary Speed Sens.",	//	34
	"ECU Internal +5V Fail",	//	35
	" Config Param. Fault ",	//	36
	"     ECU Failure     ",	//	37
	" Internal EGR Fault  ",	//	38
	" Refer Engine Manual ",	//	39
/*********************************/
	"  Above Normal Level ", 	//	0
	"  Below Normal Level ", 	//	1
	"     Data Erratic    ", 	//	2
	"   Shorted to Bat+   ", 	//	3
	"   Shorted to Bat-   ", 	//	4
	"    Open Circuit     ", 	//	5
	"    Short Circuit    ", 	//	6
	"   Mechanical Fault  ", 	//	7
	"  Abnormal Frequency ", 	//	8
	"  CommFail/Open Circ.", 	//	9
	" Abnormal Variations ", 	//	10
	"  Unidentified Fault ", 	//	11
	" Unit/Component Fault", 	//	12
	" Invalid Calibration ", 	//	13
	"    Unknown Fault    ", 	//	14
	"  Above Normal Level ", 	//	15
	"  Above Normal Level ", 	//	16
	"  Below Normal Level ", 	//	17
	"  Below Normal Level ", 	//	18
	"  Network Data Error ",  	//	19
	"   Refer to Manual   ", 	//	20
	"   Refer to Manual   ", 	//	21
	"   Refer to Manual   ", 	//	22
	"   Refer to Manual   ", 	//	23
	"   Refer to Manual   ", 	//	24
	"   Refer to Manual   ", 	//	25
	"   Refer to Manual   ", 	//	26
	"   Refer to Manual   ", 	//	27
	"   Refer to Manual   ", 	//	28
	"   Refer to Manual   ", 	//	29
	"   Refer to Manual   ",  	//	30
	"   Condition Exist   ", 	//	31
/*********************************/
	'O','F','F'									,0x00,	//	0
	'M','A','N','U','A','L'						,0x00,	//	1
	'A','U','T','O'								,0x00,	//	2
	'T','E','S','T'								,0x00,	//	3
	'M','O','D','E'								,0x00,	//	4
	'S','T','A','T','E'							,0x00,	//	5
	'T','u','r','n','-','O','f','f'				,0x00,	//	6
	'T','u','r','n','-','O','n'  				,0x00,	//	7
	'W','e','e','k','l','y'						,0x00,	//	8
	'M','o','n','t','h','l','y'					,0x00,	//	9
	'G','e','n','s','e','t'						,0x00,	//	10
	'L','o','a','d'								,0x00,	//	11
	'A','M','F'									,0x00,	//	12
	'A','T','S'									,0x00,	//	13
	'R','E','M','.','S','T','A','R','T'			,0x00,	//	14
	'S','Y','N','C','H'							,0x00,	//	15
	'M','A','I','N','S',' ','S','Y','N'			,0x00,	//	16
	'R','E','S','E','R','V','E','D'				,0x00,	//	17
	'A','V','R','C','o','r','r'					,0x00,	//	18
	'G','O','V','C','o','r','r'					,0x00,	//	19
	'T','i','m','e','r'							,0x00,	//	20
	'T','i','m','e','r','+','T','e','m','p'		,0x00,	//	21
	'S','t','a','r','t','P','o','w','e','r'		,0x00,	//	22
	'M','a','i','n','s','P','o','w'				,0x00,	//	23
	'R','u','n','A','l','l'						,0x00,	//	24
	'E','q','u','a','l',' ','A','g','i','n','g'	,0x00,	//	25
	'S','m','a','r','t'							,0x00,	//	26
	'O','f','f'									,0x00,	//	27
	'O','n'										,0x00,	//	28
	'L','i','t','e','r'							,0x00,	//	29
	'G','a','l','l','o','n'						,0x00,	//	30
	'P','h','-','N'								,0x00,	//	31
	'P','h','-','P','h'							,0x00,	//	32
	'M','A','I','N'								,0x00,	//	33
	'G','E','N','.'								,0x00,	//	34
	'B','U','S',' '								,0x00,	//	35
 	'N','O'										,0x00,	//	36
	'Y','E','S'									,0x00,	//	37
	'O','K'										,0x00,	//	38
	'E','S','C'									,0x00,	//	39
	'D','I','S','A','B','L','E'					,0x00,	//	40
	'E','N','A','B','L','E'						,0x00,	//	41
	'C','L','E','A','R'							,0x00,	//	42
	'C','O','N','F','I','G'						,0x00,	//	43
	'C','H','A','N','G','E'						,0x00,	//	44
    'M','o','n','d','a','y'						,0x00,	//	45
    'T','u','e','s','d','a','y'					,0x00,	//	46
    'W','e','d','n','e','s','d','a','y'			,0x00,	//	47
    'T','h','u','r','s','d','a','y'				,0x00,	//	48
    'F','r','i','d','a','y'						,0x00,	//	49
    'S','a','t','u','r','d','a','y'				,0x00,	//	50
	'S','u','n','d','a','y'						,0x00,	//	51
	'J','a','n' 								,0x00,	//	52
	'F','e','b' 								,0x00,	//	53
	'M','a','r' 								,0x00,	//	54
	'A','p','r' 								,0x00,	//	55
	'M','a','y' 								,0x00,	//	56
	'J','u','n' 								,0x00,	//	57
	'J','u','l' 								,0x00,	//	58
	'A','u','g' 								,0x00,	//	59
	'S','e','p' 								,0x00,	//	60
	'O','c','t' 								,0x00,	//	61
	'N','o','v' 								,0x00,	//	62
	'D','e','c'									,0x00,	//	63
	'W','e','e','k',':'							,0x00,	//	64
	'D','a','y',':'								,0x00,	//	65
	'S','t','a','r','t','H','o','u','r',':'		,0x00,	//	66
	'D','u','r','a','t','i','o','n',':'			,0x00,	//	67
	'F','A','S','T'								,0x00,	//	68
	'S','L','O','W'								,0x00,	//	69
	'F','I','L','L','I','N','G'					,0x00,	//	70
	'C','O','N','S','U','M','P','.'				,0x00,	//  71
	'5','A','m','p','s'							,0x00,	//  72
	'1','A','m','p'								,0x00,	//  73
};

#endif //EOF __DK_ENGLISH_C
/****************************************************************************
**                            End Of DK_English.c File
****************************************************************************/
