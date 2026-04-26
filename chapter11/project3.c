#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) 
{
	int m, n, temp;
	m = numerator;
	n = denominator;
	
	while(n != 0) {
		temp = n;
		n = m % n;
		m = temp;
	}
	
	*reduced_numerator = numerator / m;
	*reduced_denominator = denominator / m;
	
	
}

int main(int argc, char **argv)
{
	int num, den;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &den);
	
	int low_num, low_den;
	
	reduce(num, den, &low_num, &low_den);
	
	printf("In lowest terms: %d/%d", low_num, low_den);
	
	return 0;
}

