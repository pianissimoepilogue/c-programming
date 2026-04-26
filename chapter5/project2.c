#include <stdio.h>

int main(int argc, char **argv)
{
	int hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minute);
	
	if(((hour >= 12 && minute != 0) && (hour < 24)) || (hour == 24 && minute == 00) ){
		hour -= 12;
		if(minute < 10) {
			printf("Equivalent 12-hour time: %d:0%d PM", hour, minute);
		} else {
		printf("Equivalent 12-hour time: %d:%d PM", hour, minute);
	}}
	else if((hour < 12 && hour > 0) || (hour == 12 && minute == 00)) {
		if(minute < 10) {
			printf("Equivalent 12-hour time: %d:0%d AM", hour, minute);
		} else {
			printf("Equivalent 12-hour time: %d:%d AM", hour, minute);
	}}
	
	return 0;
}

