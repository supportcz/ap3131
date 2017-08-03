(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Program: ncsdcctrl
 * File: ncsdcctrlCyclic.st
 * Author: necidj
 * Created: March 11, 2014
 ********************************************************************
 * Implementation of program ncsdcctrl
 ********************************************************************)

PROGRAM _CYCLIC

(* ### BEGIN gAxis04 ### *)
 
(* life counter emulation of digital inputs *)
 gAxis04_DiDoIf.iLifeCntReference := gAxis04_DiDoIf.iLifeCntReference + 1;
 gAxis04_DiDoIf.iLifeCntNegHwEnd  := gAxis04_DiDoIf.iLifeCntNegHwEnd  + 1;
 gAxis04_DiDoIf.iLifeCntPosHwEnd  := gAxis04_DiDoIf.iLifeCntPosHwEnd  + 1;
 
(* ### END gAxis04 ### *)

END_PROGRAM

