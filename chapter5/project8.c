#include <stdio.h>

int main(int argc, char **argv)
{
	int hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minute);
	
	int from_midnight;
	from_midnight = (hour*60) + minute;
	
	if (from_midnight > 0 && from_midnight < 531.5) {
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	} else if (from_midnight >= 531.5 && from_midnight < 631) {
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	} else if (from_midnight >= 631 && from_midnight < 723) {
		printf("Closest departure time is 11:19 a.m., arriving at 1.31 p.m.");
	} else if (from_midnight >= 723 && from_midnight < 803.5) {
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	} else if (from_midnight >= 803.5 && from_midnight < 892.5) {
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	} else if (from_midnight >= 892.5 && from_midnight < 1040) {
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	} else if (from_midnight >= 1040 && from_midnight < 1222.5) {
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	} else if(from_midnight >= 1222.5) {
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	} 
	
	
	
	return 0;
}

