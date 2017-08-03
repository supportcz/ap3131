/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************/

#include <bur/plctypes.h>
#include <AsDefault.h>
#include "AsFltGen.h"

#include "APMap.h"


// Variables for Flat Stream Interface to get whole X20AP31x1 Map

_LOCAL	 BOOL	 	Flt_Enable;
_LOCAL	 struct		fltRead	sFltRead;
_LOCAL	 struct		fltWrite sFltWrite;
_LOCAL	 X20AP31x1 	ApData;
_LOCAL	 SINT		TmpBuf[sizeof(X20AP31x1) + 16];
_LOCAL 	 USINT		BlockNum;
_LOCAL   UINT		BlockAct;
_LOCAL	DINT	ActiveEnergy;


void _INIT TestINIT( void )
{
	BlockNum = BlockAct = 0;
	Flt_Enable =  EnabEnergy = 1;

}

void _CYCLIC TestCYCLIC( void )
{
	ActiveEnergy = ApData.Energy.APenergyT / 3600 ;
	
	// cyclically trigger generation of Energy and DFT values on AP31x1 
	if ( RBTrigDFT == TrigDFT ) 
	{
		TrigDFT ^= 1;
	}
	
	// Flat Stream Handling
	sFltRead.enable	 		= Flt_Enable;
	sFltRead.cfg		 	= fltMODE_FRAME;
	sFltRead.pBuf			= (UDINT)&TmpBuf[0];
	sFltRead.bufLen			= sizeof(TmpBuf);
	sFltRead.pRxBytes	 	= (UDINT)&FltMtuRd[0];
	sFltRead.rxBytesLen 	= sizeof(FltMtuRd);
	fltRead(&sFltRead);
	if (sFltRead.status == fltERR_FRAME_FINISHED)
	{
		if (sFltRead.validBytes - 1 == sizeof(X20AP31x1))
		{
			memcpy (&ApData, &TmpBuf[1], sizeof(X20AP31x1));
		}
	}
		
	sFltWrite.enable		= Flt_Enable;
	sFltWrite.cfg			= fltMODE_SYNCHRON + (1 << 4) + 2;
	sFltWrite.readSequ 		= sFltRead.readSequ;
	sFltWrite.pBuf			= (UDINT)&BlockNum;
	sFltWrite.bufLen	    = BlockAct;
	sFltWrite.pTxBytes		= (UDINT)&FltMtuWr[0];
	sFltWrite.txBytesLen	= sizeof(FltMtuWr);
	sFltWrite.pSequ	 		= (UDINT)&FltMtuRd[0];
	fltWrite(&sFltWrite);

} // end of  _CYCLIC
