void polarDrive(tMotor motorx1, tMotor motorx2, tMotor motory1, tMotor motory2, int speed, int direction, int spin){
	float reduction = 0;
	direction = direction;

	//adjust for spinning at lower speed, but more prominent spin
	reduction = abs(spin/200.0);
	spin = spin*reduction;
	speed = speed*(1-reduction);
	//nxtDisplayCenteredTextLine(4, "speed: %d", speed);


	//Find the values for the diagonal motor pairs based on the given direction
	if (abs(speed) < 10){speed = 0;}
	int motorsx = cosDegrees(direction)*speed;
	int motorsy = sinDegrees(direction)*speed;

	//set motors to final values
	if (abs(spin) < 10){spin = 0;}
	motor[motorx1] = motorsx+spin;
	motor[motory1] = motorsy+spin;
	motor[motorx2] = motorsx-spin;
	motor[motory2] = motorsy-spin;
}

void polarMove(tMotor motorx1, tMotor motorx2, tMotor motory1, tMotor motory2, int speed){
	motor[motorx1] = speed;
	motor[motory1] = speed;
	motor[motorx2] = speed;
	motor[motory2] = speed;
}

void stopPolarMot(tMotor motorx1, tMotor motorx2, tMotor motory1, tMotor motory2){
	motor[motorx1] = 0;
	motor[motory1] = 0;
	motor[motorx2] = 0;
	motor[motory2] = 0;
}
