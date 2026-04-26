#include <stdio.h>

int main(int argc, char **argv)
{
	int i, n;
	char newline;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d%c", &n, &newline);
	
	int counter = 1;
	
	for (i = 1; i <= n; i++) {
		if(counter % 25 != 0) {
			printf("%10d%10d\n", i, i * i);
		} else {
			printf("Press enter to continue...");
			if(getchar() == '\n') {
				goto count;
			}
		}
		count:
		counter += 1;
	}
	
	return 0;
}

