PROGRAM _INIT

(* get axis object *)
Axis1Obj := ADR(gAxis02);  (*Master Axis*)
Axis2Obj := ADR(gAxis01);  (*Slave Axis*)

AxisStep := STATE_WAIT; (* start step *)

GearControl.Parameter.Velocity             := 1000; (*velocity for movement*)
GearControl.Parameter.Acceleration         := 5000; (*acceleration for movement*)
GearControl.Parameter.Deceleration         := 5000; (*deceleration for movement*)
GearControl.Parameter.JogVelocity          := 400;  (*velocity for jogging *)
GearControl.Parameter.RatioNumerator       := 1000; (*ratio numerator for coupling *)
GearControl.Parameter.RatioDenominator     := 1000; (*ratio denominator for coupling *)
END_PROGRAM

