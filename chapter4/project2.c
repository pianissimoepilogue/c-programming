#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Enter a three-digit number: ");
	scanf("%3d", &n);
	
	int hundreds = n / 100;
	int tens = (n/10) - (hundreds*10);
	int ones = n - ((hundreds*100) + (tens*10));
	
	printf("The reversal is: %d%d%d", ones, tens, hundreds);
	
	return 0;
}
