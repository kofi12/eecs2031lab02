#include <wiringPi.h>
int main(int argc, char *argv[])
{
	wiringPiSetup();
	pinMode (1, OUTPUT);
	for(;;)
	{
		digitalWrite (1, HIGH); delay (1000);
		digitalWrite (1, LOW); delay (500);
	}
	return 0;
}
