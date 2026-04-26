#include <stdio.h>

int main(int argc, char **argv)
{
	char name, initial;
	printf("Enter a first and last name: ");
	scanf("%c", &name);
	int count = 1;
	int rest = 0;
	
	while (name != '\n') {
		if (name == ' ') {
			goto reevaluate;
		} else if (name >= 'A' && name <= 'Z' && count == 1) {
			count += 1;
			initial = name;
			goto reevaluate;
		} else if (name >= 'A' && name <= 'Z' && count != 1) {
			printf("%c", name);
			rest += 1;
			goto reevaluate;
		} else if (rest == 1) {
			printf("%c", name);
			goto reevaluate;
		}
		reevaluate:
			scanf("%c", &name);
			continue;
	}
	
	printf(", %c.", initial);
	
	return 0;
}

