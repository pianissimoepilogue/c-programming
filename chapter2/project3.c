#include <stdio.h>

#define PI 3.141592653

int main(int argc, char **argv)
{
	int radius;
	printf("Enter a radius(m): ");
	scanf("%d", &radius);
	
	float volume = (4.0f/3.0f)*PI*radius*radius*radius;
	
	printf("The radius of the sphere is: %f m^3", volume);
	
	return 0;
}

