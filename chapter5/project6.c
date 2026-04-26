#include <stdio.h>

int main(int argc, char **argv)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
	int upc, check_digit;
	
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter the first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the UPC: ");
	scanf("%d", &upc);
	
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	check_digit = 9 - ((total - 1) % 10);
	
	if (upc == check_digit) {
		printf("Valid UPC, the calculated UPC %d and the entered UPC %d match", check_digit, upc);
	} else {
		printf("Invalid UPC, the calculated UPC %d and the entered UPC %d do not match", check_digit, upc);
	}
	
	return 0;
}
