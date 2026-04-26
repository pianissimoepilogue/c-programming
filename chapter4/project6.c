#include <stdio.h>

int main(int argc, char **argv)
{
	int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twelfth;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);
	
	int step_one = second + fourth + sixth + eighth + tenth + twelfth;
	int step_two = first + third + fifth + seventh + ninth + eleventh;
	int step_three = (step_one * 3) + step_two;
	int step_four = step_three - 1;
	int step_five = step_four % 10;
	int step_six = 9 - step_five;
	
	printf("Check digit: %d", step_six); 
	
	return 0;
}

