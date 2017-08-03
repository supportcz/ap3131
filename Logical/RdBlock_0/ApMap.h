/* APMap.h - X20AP31x1 Data Mapping */ 
/*
------------------------------------------------------------------------------
 COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG 120
------------------------------------------------------------------------------ */

/* == type definitions ====================================================	*/


typedef struct ADC_REG_STATUS	ADC_REG_STATUS;
struct ADC_REG_STATUS
{
	unsigned short 	SysStatus0;			// System Status 0
	unsigned short 	SysStatus1;			// System Status 1
	unsigned short 	EnStatus0;			// Metering Status 0
	unsigned short 	EnStatus1;			// Metering Status 1
};

typedef struct ADC_REG_RMS	ADC_REG_RMS;
struct ADC_REG_RMS
{
	unsigned short	IrmsN1;				// N Line Sampled current RMS
	unsigned short	UrmsA;				// phase A voltage RMS
	unsigned short	UrmsB;				// phase B voltage RMS
	unsigned short	UrmsC;				// phase C voltage RMS
	unsigned short	IrmsN0;				// N Line calculated current RMS
	unsigned short	IrmsA;				// phase A voltage RMS
	unsigned short	IrmsB;				// phase B voltage RMS
	unsigned short	IrmsC;				// phase C voltage RMS
};

typedef struct ADC_REG_THD_ANGLE	ADC_REG_THD_ANGLE;
struct ADC_REG_THD_ANGLE
{
//	THD+N, Frequency, Angle and Temperature Registers
	unsigned short	THDNUA;				// phase A voltage THD+N
	unsigned short	THDNUB;				// phase B voltage THD+N
	unsigned short	THDNUC;				// phase C voltage THD+N
	unsigned short	THDNIA;				// phase A current THD+N
	unsigned short	THDNIB;				// phase B current THD+N
	unsigned short	THDNIC;				// phase C current THD+N
	unsigned short	Freq;				// Frequency
	signed short	PAngleA;			// phase A mean phase angle
	signed short	PAngleB;			// phase B mean phase angle
	signed short	PAngleC;			// phase C mean phase angle
	signed short	Temp;				// Measured temperature
	signed short	UangleA;			// phase A voltage phase angle
	signed short	UangleB;			// phase B voltage phase angle
	signed short	UangleC;			// phase C voltage phase angle
};

typedef struct ADC_REG_POWER	ADC_REG_POWER;
struct ADC_REG_POWER
{
	unsigned short 	SVmeanTLSB;			// LSB of (Vector Sum) Total Apparent Power
	unsigned short 	SVmeanT;			// (Vector Sum) Total Apparent Power

// Power and Power Factor Register
	signed short	PmeanT;				// Total Active Power
	signed short	PmeanA;				// Phase A Active Power
	signed short	PmeanB;				// Phase B Active Power
	signed short	PmeanC;				// Phase C Active Power
	signed short	QmeanT;				// Total Reactive Power
	signed short	QmeanA;				// Phase A Reactive Power
	signed short	QmeanB;				// Phase B Reactive Power
	signed short	QmeanC;				// Phase C Reactive Power
	signed short	SAmeanT;			// (Arithmetic Sum) Total apparent power
	signed short	SmeanA;				// phase A apparent power
	signed short	SmeanB;				// phase B apparent power
	signed short	SmeanC;				// phase C apparent power
	signed short	PFmeanT;			// Total power factor
	signed short	PFmeanA;			// phase A power factor
	signed short	PFmeanB;			// phase B power factor
	signed short	PFmeanC;			// phase C power factor

// Fundamental/ Harmonic Power and Voltage/ Current RMS Registers
	signed short	PmeanTF;			// Total active fundamental power
	signed short	PmeanAF;			// phase A active fundamental power
	signed short	PmeanBF;			// phase B active fundamental power
	signed short	PmeanCF;			// phase C active fundamental power
	signed short	PmeanTH;			// Total active harmonic power
	signed short	PmeanAH;			// phase A active harmonic power
	signed short	PmeanBH;			// phase B active harmonic power
	signed short	PmeanCH;			// phase C active harmonic power
};

typedef struct ADC_REG_ENERGY	ADC_REG_ENERGY;
struct ADC_REG_ENERGY
{
	unsigned long 	APenergyT;			// Total Forward Active Energy
	unsigned long 	APenergyA;			// Phase A Forward Active Energy
	unsigned long 	APenergyB;			// Phase B Forward Active Energy
	unsigned long 	APenergyC;			// Phase C Forward Active Energy
	unsigned long 	ANenergyT;			// Total Reverse Active Energy
	unsigned long 	ANenergyA;			// Phase A Reverse Active Energy
	unsigned long 	ANenergyB;			// Phase B Reverse Active Energy
	unsigned long 	ANenergyC;			// Phase C Reverse Active Energy
	unsigned long 	RPenergyT;			// Total Forward Reactive Energy
	unsigned long 	RPenergyA;			// Phase A Forward Reactive Energy
	unsigned long 	RPenergyB;			// Phase B Forward Reactive Energy
	unsigned long 	RPenergyC;			// Phase C Forward Reactive Energy
	unsigned long 	RNenergyT;			// Total Reverse Reactive Energy
	unsigned long 	RNenergyA;			// Phase A Reverse Reactive Energy
	unsigned long 	RNenergyB;			// Phase B Reverse Reactive Energy
	unsigned long 	RNenergyC;			// Phase C Reverse Reactive Energy
	unsigned long 	SAenergyT;			// (Arithmetic Sum) Total Apparent Energy
	unsigned long 	SenergyA;		    // Phase A Apparent Energy
	unsigned long 	SenergyB;		   	// Phase B Apparent Energy
	unsigned long 	SenergyC;		    // Phase C Apparent Energy
	unsigned long 	SVenergyT;			// (Vector Sum) Total Apparent Energy

	// Fundamental / Harmonic Energy Register Register
	unsigned long 	APenergyTF;			// Total Forward Active Fundamental Energy
	unsigned long 	APenergyAF;			// Phase A Forward Active Fundamental Energy
	unsigned long 	APenergyBF;			// Phase B Forward Active Fundamental Energy
	unsigned long 	APenergyCF;			// Phase C Forward Active Fundamental Energy
	unsigned long 	ANenergyTF;			// Total Reverse Active Fundamental Energy
	unsigned long 	ANenergyAF;			// Phase A Reverse Active Fundamental Energy
	unsigned long 	ANenergyBF;			// Phase B Reverse Active Fundamental Energy
	unsigned long 	ANenergyCF;			// Phase C Reverse Active Fundamental Energy
	unsigned long 	APenergyTH;			// Total Forward Active Harmonic Energy
	unsigned long 	APenergyAH;			// Phase A Forward Active Harmonic Energy
	unsigned long 	APenergyBH;			// Phase B Forward Active Harmonic Energy
	unsigned long 	APenergyCH;			// Phase C Forward Active Harmonic Energy
	unsigned long 	ANenergyTH;			// Total Reverse Active Harmonic Energy
	unsigned long 	ANenergyAH;			// Phase A Reverse Active Harmonic Energy
	unsigned long 	ANenergyBH;			// Phase B Reverse Active Harmonic Energy
	unsigned long 	ANenergyCH;			// Phase C Reverse Active Harmonic Energy
	signed long		AEnergyT;			// Total Active Energy
	signed long 	REnergyT;			// Total Reactive Energy
};

typedef struct ADC_REG_DFT 	ADC_REG_DFT;
struct ADC_REG_DFT
{
	//	Arithmetic ratio, 2 bits integer and 14 bits fractional;	That is:	Harmonic Ratio (%) = Register Value / 163.84

	unsigned short	DftAI[32];		// phase A, Current, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	unsigned short	DftBI[32];		// phase B, Current, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	unsigned short	DftCI[32];		// phase C, Current, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	unsigned short	DftAV[32];		// phase A, Voltage, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	unsigned short	DftBV[32];		// phase B, Voltage, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	unsigned short	DftCV[32];		// phase C, Voltage, Harmonic Ratio for 2-th to 32-th order component and Total Harmonic Distortion	Ratio
	//	Format: Need special scaling/conversion.	The register value * 147.62 = full-scale input signal RMS.
	//	Current, Fundamental component value = Register Value * 209 * 65.535 / 8388608
	//	Voltage, Fundamental component value = Register Value * 209 * 655.35 / 8388608
	unsigned short	DftAI_Fund;
	unsigned short	DftAV_Fund;
	unsigned short	DftBI_Fund;
	unsigned short	DftBV_Fund;
	unsigned short	DftCI_Fund;
	unsigned short	DftCV_Fund;
};

typedef struct ADC_REG_CFGACT 	ADC_REG_CFGACT;
struct ADC_REG_CFGACT
{
	unsigned short  ChanControl;
	unsigned short  IDispTh;
	unsigned short  I_RatioA;
	unsigned short  I_RatioB;
	unsigned short  I_RatioC;
	unsigned short  I_RatioN;

	unsigned short  ZXConfig;
	unsigned short  SagTh;
	unsigned short  PhaseLoseTh;
	unsigned short  INWarnTh0;
	unsigned short  INWarnTh1;
	unsigned short  THDNUTh;
	unsigned short  THDNITh;
	unsigned short  MMode0;

	unsigned short 	PLconstL;
	unsigned short 	PLconstH;
};

typedef struct ENV_STATUS	ENV_STATUS;
struct ENV_STATUS
{
	unsigned long  ulUpTime;
	unsigned long  ulUpCnt;
	signed short   ssMinTemp;
	signed short   ssMaxTemp;
	unsigned long  ulRes[13];
};

typedef struct X20AP31x1	X20AP31x1;
struct X20AP31x1
{
	long					NetTimeReg;				// Time of Section copy to Buffer
	ADC_REG_STATUS			Status;  				// Status registers
	ADC_REG_RMS				Rms;	  			   	// RMS Registers
	ADC_REG_POWER			Power;				   	// Power Registers
	ADC_REG_THD_ANGLE		ThdAngle;			  	// THD + Angel Registers
	long				    NetTimeEnergy;			// Time of Section copy to Buffer
	ADC_REG_ENERGY			Energy;			      	// Energy Registers
	long				    NetTimeDft;			   	// Time of Section copy to Buffer
	ADC_REG_DFT				Dft;			       	// DFT Registers
	ADC_REG_CFGACT		    CfgAct;					// Config read back
	ENV_STATUS			    EnvReg;					// Read Back Environment Registers
};


#define ADC_BLK_ALL			    0 	
#define ADC_BLK_STATUS			1	
#define ADC_BLK_RMS			    2	
#define ADC_BLK_POWER		    3	
#define ADC_BLK_THD_ANGLE		4	
#define ADC_BLK_ENERGY			5	
#define ADC_BLK_DFT			    6	
#define ADC_BLK_CFGACT			7	
#define ADC_BLK_ENVREG		    8


