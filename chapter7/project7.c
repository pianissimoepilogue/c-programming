#include <stdio.h>

int main(int argc, char **argv)
{
	int num1, denom1, num2, denom2;
	char operator;
	int result_num, result_denom;
	int nothing = 1;
	
	printf("Enter two fractions seperated by a (+, -, *, /) sign: ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);
	
	switch(operator) {
		case '+':
			result_num = num1*denom2 + num2*denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num   = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*': 
			result_num   = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/': 
			if (num2 != 0) {
				result_num   = num1 * denom2;
				result_denom = denom1 * num2;
			} else {
				nothing = 0;
			}
			break;
		default:
			nothing = 0;
			break;
		}
	
	if (nothing == 0) {
		printf("You did not print a valid operator or you tried to divide by 0.\n");
	} else {
		printf("The result is %d/%d.\n", result_num, result_denom);
	}
	
	return 0;
}
