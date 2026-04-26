#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3, n4;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	int smallest = n1;
	int biggest = n1;
	
	if (smallest > n2) {
		smallest = n2;
	}
	if (biggest < n2) {
		biggest = n2;
	}
	if (smallest > n3) {
		smallest = n3;
	} 
	if (biggest < n3) {
		biggest = n3;
	}
	if (smallest > n4) {
		smallest = n4;
	}
	if (biggest < n4) {
		biggest = n4;
	}
	
	printf("Largest: %d\n", biggest);
	printf("Smallest: %d\n", smallest);
	
	
	return 0;
}

