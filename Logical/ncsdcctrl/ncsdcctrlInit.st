(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Program: ncsdcctrl
 * File: ncsdcctrlInit.st
 * Author: necidj
 * Created: March 11, 2014
 ********************************************************************
 * Implementation of program ncsdcctrl
 ********************************************************************)

PROGRAM _INIT

(* ### BEGIN gAxis04 ### *)
 
(* initialize variables *)
 gAxis04_HW.DrvIf_Typ := ncSDC_DRVSERVO16;
 strcpy( ADR(gAxis04_HW.DrvIf_Name[0]), ADR('gAxis04_DrvIf') );
 gAxis04_HW.DiDoIf_Typ := ncSDC_DIDO;
 strcpy( ADR(gAxis04_HW.DiDoIf_Name[0]), ADR('gAxis04_DiDoIf') );
  
(* force variable offset generation *)
 gAxis04.size                      := gAxis04.size;
 gAxis04_DrvIf.iLifeCnt            := gAxis04_DrvIf.iLifeCnt;
 gAxis04_DiDoIf.iLifeCntDriveReady := gAxis04_DiDoIf.iLifeCntDriveReady;
 gAxis04_ModuleOk                  := gAxis04_ModuleOk;
  
(* assign your hardware inputs here*)
 
(* gAxis04_DiDoIf.iPosHwEnd  := gAxis04_DiDoIf.iPosHwEnd;
 gAxis04_DiDoIf.iNegHwEnd  := gAxis04_DiDoIf.iNegHwEnd;
 gAxis04_DiDoIf.iReference := gAxis04_DiDoIf.iReference;
 *)
 
(* ### END gAxis04 ### *)

END_PROGRAM

