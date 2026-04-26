#include <stdio.h>

// a) 7 is the largest value of n where short can be used to store factorial and obtain the correct result
// b) 12 is the largest value of n where int can be used to store factorial and obtain the correct result
// c) 12 is the largest value of n where long can be used to store factorial and obtain the correct result
// d) 20 is the largest value of n where long long can be used to store factorial and obtain the correct result
// e) 20 is the largest value of n where float can be used to store factorial and obtain the correct result
// f) 20 is the largest value of n where double can be used to store factorial and obtain the correct result
// g) 20 is the largest value of n where long double can be used to store factorial and obtain the correct result

int main(int argc, char **argv)
{
	int n;
	long long factorial = 1;
	long double count = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	while (count <= n) {
		factorial *= count;
		count += 1;
	}
	
	printf("Factorial of %d: %lld", n, factorial);
	
	return 0;
}

