#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float x, y = 1;
	float new = 1, old = 0;
	printf("Enter a positive number: ");
	scanf("%f", &x);
	old = y;
	new = (1.0/2)*(old + ((x)/old)); // must force decimal division (1.0/2)
	while (fabs(old - new) >= (.0001)*y) {
		y = new;
		old = y;
		new = (1.0/2)*(old + ((x)/old)); // must force decimal division (1.0/2)
	}
	
	printf("Square root: %f", new);
	
	
	
	return 0;
}

