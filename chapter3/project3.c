#include <stdio.h>

int main(int argc, char **argv)
{
	int prefix, identifier, code, number, digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);
	printf("GSI prefix: %d\n", prefix);
	printf("Group idenitifier: %d\n", identifier);
	printf("Publisher code: %d\n", code);
	printf("Item number: %d\n", number);
	printf("Check digit: %d\n", digit);
	
	return 0;
}

