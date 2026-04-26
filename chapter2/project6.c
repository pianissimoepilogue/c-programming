#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	int fx;
	fx = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("%d", fx);
	return 0;
}

