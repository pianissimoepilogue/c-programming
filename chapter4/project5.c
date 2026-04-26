#include <stdio.h>

int main(int argc, char **argv)
{
	int first, third, fifth, seventh, ninth, eleventh;
	int second, fourth, sixth, eighth, tenth;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh);
	
	int step_one = first + third + fifth + seventh + ninth + eleventh;
	int step_two = second + fourth + sixth + eighth + tenth;
	int step_three = (step_one*3) + step_two;
	int step_four = step_three - 1;
	int step_five = step_four % 10;
	int step_six = 9 - step_five;
	printf("Check digit: %d", step_six);
	return 0;
}

