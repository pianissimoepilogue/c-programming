#include <stdio.h>

int main(int argc, char **argv)
{
	int speed;
	printf("Enter a wind speed (in knots): ");
	scanf("%d", &speed);
	
	if (speed < 1) {
		printf("Description: Calm");
	} else if (1 <= speed && speed <= 3) {
		printf("Description: Light air");
	} else if (4 <= speed && speed <= 27) {
		printf("Description: Breeze"); 
	} else if (28 <= speed && speed <= 47) {
		printf("Description: Gale");
	} else if (48 <= speed && speed <= 63) {
		printf("Description: Storm");
	} else {
		printf("Description: Hurricane");
	}
	
	return 0;
}

