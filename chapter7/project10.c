#include <stdio.h>

int main(int argc, char **argv)
{
	char current;
	int counter;
	printf("Enter a sentence: ");
	scanf("%c", &current);
	
	while (current != '\n') {
		switch (current) {
			case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
				counter += 1;
				goto reevaluate;
			default:
				goto reevaluate;
			}
			reevaluate:
				scanf("%c", &current);
				continue;
		}
		
	printf("Your sentence contains %d vowels.", counter);
	
	
	return 0;
}

