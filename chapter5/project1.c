#include <stdio.h>

int main(int argc, char **argv)
{
	int n, d;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (0 <= n && n <= 9) {
		d = 1;
	} else if (10 <= n && n <= 99) {
		d = 2;
	} else if (100 <= n && n <= 999) {
		d = 3;
	} else if (1000 <= n && n <= 9999) {
		d = 4;
	} else {
		d = 0;
	}
	
	(d > 0) ? printf("The number %d has %d digits", n, d) : printf("The number has more than four digits or is negative.");
	
	return 0;
}

