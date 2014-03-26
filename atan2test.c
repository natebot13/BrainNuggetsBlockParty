
task main()
{
	float result = atan2(10,0);
	result = radiansToDegrees(result);
	nxtDisplayCenteredTextLine(4, "%f",result);
	wait1Msec(3000);
}
