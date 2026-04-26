#include <stdio.h>

int main(int argc, char **argv)
{
	float count = 0;
	float length = 0;
	float words = 0;
	float average;
	char curr;
	printf("Enter a sentence: ");
	
	while (scanf("%c", &curr) && curr != '\n') {
		if(curr == ' ') {
			length += count;
			count = 0; // resets letter count
			words += 1; // tracks every word
		} else {
			count += 1;
			}
	}
	
	length += count; //last word length
	words += 1; //last word
	
	average = length / words;
	
	printf("Average word length: %.1f", average);
	return 0;
}

