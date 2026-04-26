#include <stdio.h>

int main(int argc, char **argv)
{
	char letter;
	int value = 0;
	printf("Enter a word: ");
	scanf("%c", &letter);
	
	while (letter != '\n') {
		switch(letter) {
			case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
				value += 1;
				goto reevaluate;
			case 'd': case 'g':
				value += 2;
				goto reevaluate;
			case 'b': case 'c': case 'm': case 'p':
				value += 3;
				goto reevaluate;
			case 'f': case 'h': case 'v': case 'w': case 'y':
				value += 4;
				goto reevaluate;
			case 'k':
				value += 5;
				goto reevaluate;
			case 'j': case 'x':
				value += 8;
				goto reevaluate;
			case 'q': case 'z':
				value += 10;
				goto reevaluate;
			default:
				goto reevaluate;
			}
			reevaluate: 
				scanf("%c", &letter);
				continue;
	}
	
	printf("Scrabble value: %d", value);
	
	return 0;
}

