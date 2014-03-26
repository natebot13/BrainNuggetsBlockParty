void saveOffset(tSensors compass)
{
	short northOffset = 0;
	TFileHandle FILE;
	TFileIOResult IOResult;
	const string fileName = "Offset.txt";
	int size = 10;
	//nMotorEncoder[motorA] = 0;

	//while(nNxtButtonPressed != 1){
		//nxtDisplayTextLine(4, "Offset: %d", nMotorEncoder[motorA]);
		//nxtDisplayTextLine(4, "Offset: %d", SensorValue[compass]);
	//}
	//northOffset = nMotorEncoder[motorA];
	northOffset = SensorValue[compass];
	Delete(fileName, IOResult);
	OpenWrite(FILE, IOResult, fileName, size);
	WriteShort(FILE, IOResult, northOffset);
	Close(FILE, IOResult);
}
