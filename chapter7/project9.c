#include <stdio.h>

int main(int argc, char **argv)
{
	int hour, minute;
	char ante_post, meridium;
	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %c%c", &hour, &minute, &ante_post, &meridium);
	
	if(ante_post == 'A') {
		printf("Equivalent 24-hour time: %d:%d", hour, minute);
	} else if (ante_post == 'P') {
		hour = hour + 12;
		printf("Equivalent 24-hour time: %d:%d", hour, minute);
	} 
	
	return 0;
}

