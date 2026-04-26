#include <stdio.h>

int main(int argc, char **argv)
{
	long int i;
	int n;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		printf("%10ld%10ld\n", i, i * i);
	}
	
	return 0;
}

