
task main()
{
	int y = 10;
	float x = -5;
	float result;
	int degrees;
	result = y/x;
	result = atan(result);
	degrees = (result/PI)*180;
	nxtDisplayCenteredTextLine(4,"%d",degrees);
	wait1Msec(3000);
}
