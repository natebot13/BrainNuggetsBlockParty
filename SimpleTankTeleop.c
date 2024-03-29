#pragma config(Hubs,  S4, HTMotor,  none,     none,     none)
#pragma config(Motor,  mtr_S4_C1_1,     starboard,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S4_C1_2,     port,          tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
#include "MotorToServo.c"

void initializeRobot(){
	return;}

task main(){
	initializeRobot();

	//Initialize variables
	float SPEEDRATIO = .78125;
	int portpower = 0;
	int starboardpower = 0;
	//End Initialize variables
	waitForStart();
	while (true){
		getJoystickSettings(joystick);
		nxtDisplayCenteredTextLine(4,"%d",joystick.joy1_y1);
		portpower = joystick.joy1_y1*SPEEDRATIO;
		starboardpower = joystick.joy1_y2*SPEEDRATIO;
		if(abs(portpower) > 10){
			motor[port] = portpower;
		}
		else{
			motor[port] = 0;
		}
		if(abs(starboardpower) > 10){
			motor[starboard] = starboardpower;
		}
		else{
			motor[starboard] = 0;
		}
	}
}
