#include <stdio.h>

int main(int argc, char **argv)
{
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	int twenty = amount / 20;
	amount = amount - (20*twenty);
	int ten = amount / 10;
	amount = amount - (10*ten);
	int five = amount / 5;
	amount = amount - (5*five);
	int one = amount / 1;
	
	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", one);
	
	return 0;
}

