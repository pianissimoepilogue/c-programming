#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Size of int (bytes): %lld\n", sizeof(int));
	printf("Size of short int (bytes): %lld\n", sizeof(short int));
	printf("Size of long int (bytes): %lld\n", sizeof(long int));
	printf("Size of float (bytes): %lld\n", sizeof(float));
	printf("Size of double (bytes): %lld\n", sizeof(double));
	printf("Size of long double (bytes): %lld\n", sizeof(long double));
	return 0;
}

