#include <stdio.h>

int main(int argc, char **argv)
{
	char phone_number;
	printf("Enter phone number: ");
	scanf("%c", &phone_number);
	while (phone_number != '\n') {
		switch(phone_number) {
			case 'A': case 'B': case 'C':
				printf("2");
				goto reevaluate;
			case 'D': case 'E': case 'F':
				printf("3");
				goto reevaluate;
			case 'G': case 'H': case 'I':
				printf("4");
				goto reevaluate;
			case 'J': case 'K': case 'L':
				printf("5");
				goto reevaluate;
			case 'M': case 'N': case 'O':
				printf("6");
				goto reevaluate;
			case 'P': case 'R': case 'S':
				printf("7");
				goto reevaluate;
			case 'T': case 'U': case 'V':
				printf("8");
				goto reevaluate;
			case 'W': case 'X': case 'Y':
				printf("9");
				goto reevaluate;
			default:
				printf("%c", phone_number);
				goto reevaluate;
			reevaluate:
				scanf("%c", &phone_number);
				continue;
			}
		}
			
				
	
	return 0;
}

