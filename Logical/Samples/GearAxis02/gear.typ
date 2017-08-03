
TYPE
	gear_command_typ : 	STRUCT  (*command structure*)
		Power : BOOL; (*switch on the controller*)
		Home : BOOL; (*reference the axis*)
		MoveAbsolute : BOOL; (*move to an defined position*)
		MoveAdditive : BOOL; (*move a defiened distance*)
		MoveVelocity : BOOL; (*start a movement with a defiened velocity*)
		Halt : BOOL; (*stop every active movement*)
		Stop : BOOL; (*stop every active movement as long as is set*)
		MoveJogPos : BOOL; (*move in positive direction as long as is set*)
		MoveJogNeg : BOOL; (*move in negative direction as long as is set*)
		StartSlave : BOOL; (*start coupling beetween master and slave*)
		DisengageSlave : BOOL; (*stop coupling between master and slave*)
		ErrorAcknowledge : BOOL; (*reset active errors*)
	END_STRUCT;
	gear_parameter_typ : 	STRUCT  (*parameter structure*)
		Position : REAL; (*target-position for MoveAbsolute-Command*)
		Distance : REAL; (*distance for MoveAdditive-Command*)
		Velocity : REAL; (*velocity for MoveVelocity-Command*)
		Direction : USINT; (*direction for commanded movements*)
		Acceleration : REAL; (*acceleration for commanded movements*)
		Deceleration : REAL; (*deceleration for commanded movements*)
		HomePosition : REAL; (*target-position for referencing the axis*)
		HomeMode : USINT; (*homing mode*)
		JogVelocity : REAL; (*velocity for jogging movement*)
		RatioNumerator : INT; (*ratio numerator for coupling*)
		RatioDenominator : UINT; (*ratio denominator for coupling*)
	END_STRUCT;
	gear_status_typ : 	STRUCT  (*status structure*)
		ErrorID : UINT; (*ErrorID of any occured error*)
		ErrorText : ARRAY[0..3] OF STRING[79]; (*Error Text*)
		ActPosition : REAL; (*actual position of the axis*)
		ActVelocity : REAL; (*actual velocity of the axis*)
		DriveStatus : MC_DRIVESTATUS_TYP; (*actual status of the axis*)
	END_STRUCT;
	gear_axisState_typ : 	STRUCT  (*axis state structure*)
		Disabled : BOOL; (*if set, axis is in state Disabled*)
		StandStill : BOOL; (*if set, axis is in state StandsStill*)
		Homing : BOOL; (*if set, axis is in state Homing*)
		Stopping : BOOL; (*if set, axis is in state Stopping*)
		DiscreteMotion : BOOL; (*if set, axis is in state DiscreteMotion*)
		ContinuousMotion : BOOL; (*if set, axis is in state ContinuousMotion*)
		SynchronizedMotion : BOOL; (*if set, axis is in state SynchronizedMotion*)
		ErrorStop : BOOL; (*if set, axis is in state ErrorStop*)
	END_STRUCT;
	gear_typ : 	STRUCT  (*control structure*)
		Command : gear_command_typ; (*command structure*)
		Parameter : gear_parameter_typ; (*parameter structure*)
		Status : gear_status_typ; (*status structure*)
		AxisState : gear_axisState_typ; (*axis state structure*)
	END_STRUCT;
END_TYPE
