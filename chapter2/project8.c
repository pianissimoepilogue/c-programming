#include <stdio.h>

int main(int argc, char **argv)
{
	float loan, rate, monthly;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly);
	
	float first, second, third;
	
	first = loan + (loan * ((rate/100)/12)) - monthly;
	second = first + (first * ((rate/100)/12)) - monthly;
	third = second + (second * ((rate/100)/12)) - monthly;
	
	printf("Balance remaining after first payment: $%.2f\n", first);
	printf("Balance remaining after second payment: $%.2f\n", second);
	printf("Balance remaining after third payment: $%.2f\n", third);
	
	
	return 0;
}

