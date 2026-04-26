#include <stdio.h>

#define PI 3.14159253

int main(int argc, char **argv)
{
	int radius = 10;
	float volume = (4.0f/3.0f)*PI*radius*radius*radius;
	printf("%f m^3\n", volume);
	
	return 0;
}

