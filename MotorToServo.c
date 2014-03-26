void stopMot(tMotor mot)
	{motor[mot] = 0;}

bool moveTo(tMotor mot, int target, int minS = 10, int maxS = 100, int resolution = 10)
{
	int speed = minS;
	if ((nMotorEncoder[mot]/resolution) != target/resolution)
	{
		if (nMotorEncoder[mot]/resolution > target/resolution)
		{
			speed = (abs(speed)) + ((nMotorEncoder[mot]/resolution - target/resolution)/2);
			if (speed > abs(maxS)) {speed = abs(maxS);}
			speed = -speed;
			motor[mot] = speed;
		}
		else if (nMotorEncoder[mot]/resolution < target/resolution)
		{
			speed = (abs(speed)) + ((target/resolution - nMotorEncoder[mot]/resolution)/2);
			if (speed > abs(maxS)) {speed = abs(maxS);}
			motor[mot] = speed;
		}
		return false;
	}
	else
	{
		stopMot(mot);
		return true;
	}
}
