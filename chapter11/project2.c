#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	if (desired_time > 0 && desired_time < 531.5) {
		//printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
		*departure_time = 8*60 + 0;
		*arrival_time = 10*60 + 16;
	} else if (desired_time  >= 531.5 && desired_time < 631) {
		//printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
		*departure_time = 9*60 + 43;
		*arrival_time = 11*60 + 52;
	} else if (desired_time  >= 631 && desired_time < 723) {
		//printf("Closest departure time is 11:19 a.m., arriving at 1.31 p.m.");
		*departure_time = 11*60 + 19;
		*arrival_time = 13*60 + 31;
	} else if (desired_time  >= 723 && desired_time < 803.5) {
		//printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
		*departure_time = 12*60 + 47;
		*arrival_time = 15*60 + 0;
	} else if (desired_time >= 803.5 && desired_time < 892.5) {
		//printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
		*departure_time = 14*60 + 0;
		*arrival_time = 16*60 + 8;
	} else if (desired_time >= 892.5 && desired_time < 1040) {
		//printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
		*departure_time = 15*60 + 45;
		*arrival_time = 17*60 + 55;
	} else if (desired_time >= 1040 && desired_time < 1222.5) {
		//printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
		*departure_time = 19*60 + 0;
		*arrival_time = 21*60 + 20;
	} else if(desired_time >= 1222.5) {
		//printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
		*departure_time = 21*60 + 45;
		*arrival_time = 23*60 + 58;
	} 
}

int main(int argc, char **argv)
{
	int hour, minute;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &minute);
	
	int from_midnight;
	from_midnight = (hour*60) + minute;
	int departure_time, arrival_time;
	char departure, arrival;
	
	find_closest_flight(from_midnight, &departure_time, &arrival_time);
	
	if(departure_time >= 720) {
		departure = 'p';
		departure_time -= 12*60;
	} else {
		departure = 'a';
		}
	if(arrival_time >= 720) {
		arrival = 'p';
		arrival_time -= 12*60;
	} else {
		arrival = 'a';
		}
	
	printf("The closest departure time is %d:%d %c.m., arriving at %d:%d %c.m.", departure_time / 60, departure_time % 60, departure, arrival_time / 60, arrival_time % 60, arrival);
	
	
	return 0;
}
