#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) 
{
	*twenties = dollars / 20;
	dollars = dollars - (20*(*twenties));
	*tens = dollars / 10;
	dollars = dollars - (10*(*tens));
	*fives = dollars / 5;
	dollars = dollars - (5*(*fives));
	*ones = dollars / 1;
}

int main(int argc, char **argv)
{
	int amount, twenty, ten, five, one;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	pay_amount(amount, &twenty, &ten, &five, &one);
	
	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", one);
	
	return 0;
}

