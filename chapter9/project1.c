#include <stdio.h>

#define N 10

void selection_sort(int a[], int length)
{
	if(length <= 1) {
		return;
	} else {
		int largest = a[0];
		int index_largest = 0;
		int temp;
		for (int i = 0; i < length; i++) {
			if(largest <= a[i]) {
				largest = a[i];
				index_largest = i;
			}
		}
		temp = a[index_largest];
		a[index_largest] = a[length - 1];
		a[length - 1] = temp;
		selection_sort(a, (length - 1)); 
	}
}

int main(int argc, char **argv)
{
	int a[N];
	printf("Enter a series of integers: ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	
	selection_sort(a, N);
	for (int i = 0; i < N; i++) {
		printf(" %d", a[i]);
	}
	
	return 0;
}

