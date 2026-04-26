#include <stdio.h>

int main(int argc, char **argv)
{
	float grade;
	printf("Enter numerical grade: ");
	scanf("%f", &grade);
	
	if(grade <= 100 && grade >= 90) {
		printf("Letter grade: A");
	} else if(grade <= 89 && grade >= 80) {
		printf("Letter grade: B");
	} else if(grade <= 79 && grade >= 70) {
		printf("Letter grade: C");
	} else if(grade <= 69 && grade >= 60) {
		printf("Letter grade: D");
	} else if(grade <= 59  && grade >= 0) {
		printf("Letter grade: F");
	} else {
		printf("Invalid Grade");
	}
	
	return 0;
}

