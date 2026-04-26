#include <stdio.h>

int main(int argc, char **argv)
{
	int mm1, dd1, yy1;
	int mm2, dd2, yy2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
	
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm2, &dd2, &yy2);
	
	if(yy1 - yy2 < 0) {
		printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
	} else if(yy1 - yy2 > 0) {
		printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
	} else if(yy1 - yy2 == 0) {
		if (mm1 - mm2 < 0) {
			printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
		} else if (mm1 - mm2 > 0) {
			printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
		} else if (mm1 - mm2 == 0) {
			if(dd1 - dd2 < 0) {
				printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
			} else if (dd1 - dd2 > 0) {
				printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
			} else {
				printf("The two dates, %d/%d/%d and %d/%d/%d, are the same day", mm1, dd1, yy1, mm2, dd2, yy2);
			}
		}
	}
			
			
	
	return 0;
}

