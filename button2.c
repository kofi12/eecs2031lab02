#include <wiringPi.h>
#include <stdio.h>
int main( int argc, char *argv[])
{
	wiringPiSetup();
	pinMode(1, INPUT);
	pullUpDnControl(1, PUD_UP);

	for(;;)
	{
		if(digitalRead(1))
		{
			digitalWrite(0, LOW);
		}
		else
		{
			digitalWrite(0, HIGH);
		}
	
	}
	return 0;
}
