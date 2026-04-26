#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);
	
	int one = n % 8;
	n /= 8;
	int two = n % 8;
	n /= 8;
	int three = n % 8;
	n /= 8;
	int four = n % 8;
	n /= 8;
	int five = n % 8;
	
	printf("In octal, your number is: %d%d%d%d%d", five, four, three, two, one);
	
	
	return 0;
}

