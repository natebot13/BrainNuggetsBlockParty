#pragma config(Hubs,  S3, HTMotor,  HTServo,  none,     none)
#pragma config(Hubs,  S4, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     IR,             sensorHiTechnicIRSeeker1200)
#pragma config(Sensor, S2,     compass,        sensorI2CCustom)
#pragma config(Motor,  mtr_S3_C1_1,     arm,           tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S3_C1_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C1_1,     x1,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C1_2,     x2,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C2_1,     y1,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C2_2,     y2,            tmotorTetrix, openLoop, reversed, encoder)
#pragma config(Servo,  srvo_S3_C2_1,    spinner,              tServoStandard)
#pragma config(Servo,  srvo_S3_C2_2,    scoop,                tServoStandard)
#pragma config(Servo,  srvo_S3_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S3_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c";
#include "MotorToServo.c";
#include "PolarDrive.c";
#include "3rd Party Sensor Drivers/drivers/hitechnic-compass.h";

void setZero(tMotor mot){
	nMotorEncoder[mot] = 0;
}

task main()
{
	nMotorEncoder[arm] = 0;
	nMotorEncoder[x2] = 0;
}
