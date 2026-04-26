#include <stdio.h>

int main(int argc, char **argv)
{
	int hundreds, tens, ones;
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &hundreds, &tens, &ones);
	
	printf("The reversal is %d%d%d", ones, tens, hundreds);
	
	return 0;
}

