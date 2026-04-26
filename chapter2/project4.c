#include <stdio.h>

int main(int argc, char **argv)
{
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	float final_amount;
	final_amount = amount * 1.05;
	
	printf("With tax added: $%.2f", final_amount);
	
	
	return 0;
}

