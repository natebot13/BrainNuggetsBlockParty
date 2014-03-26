#pragma config(Hubs,  S3, HTServo,  HTMotor,  none,     none)
#pragma config(Hubs,  S4, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S2,     compass,        sensorI2CCustom)
#pragma config(Motor,  mtr_S3_C2_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S3_C2_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C1_1,     x1,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C1_2,     x2,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C2_1,     y1,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C2_2,     y2,            tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S3_C1_1,    spinner,              tServoStandard)
#pragma config(Servo,  srvo_S3_C1_2,    panel,                tServoStandard)
#pragma config(Servo,  srvo_S3_C1_3,    dropper,              tServoStandard)
#pragma config(Servo,  srvo_S3_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S3_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S3_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "3rd Party Sensor Drivers/drivers/hitechnic-compass.h";

task main()
{
	while(true){
		nxtDisplayCenteredTextLine(4, "Heading: %d", HTMCreadHeading(compass));
	}
}
