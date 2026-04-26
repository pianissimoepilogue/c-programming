#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Enter a two-digit number: ");
	scanf("%2d", &n);
	
	int tens = n/10;
	int ones = n % 10;
	
	printf("The reversal is: %d%d", ones, tens);
	
	
	return 0;
}

