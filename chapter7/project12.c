#include <stdio.h>

int main(int argc, char **argv)
{
	float curr, initial;
	char operator;
	
	printf("Enter an expression: ");
	scanf("%f", &initial);
	
	while (scanf("%c", &operator) && operator != '\n') { 
		scanf("%f", &curr);
		
		switch (operator) {
            case '+':
                initial += curr;
                break;
            case '-':
                initial -= curr;
                break;
            case '*':
                initial *= curr;
                break;
            case '/':
                initial /= curr;
                break;
            default:
                break;
        }
    }
		
	printf("%f\n", initial);
	return 0;
}

