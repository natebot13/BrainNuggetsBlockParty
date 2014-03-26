int flushBackup(float armAngle, float speedInchSec = 2.7, float armLength = 23, float armAngVel = 30 ){
	armAngle = degreesToRadians(armAngle);
	armAngVel = degreesToRadians(armAngVel); //deg/seconds
	float power = cos(armAngle)*armLength*armAngVel*speedInchSec;
	return round(power);
}
