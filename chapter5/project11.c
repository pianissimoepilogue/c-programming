#include <stdio.h>

int main(int argc, char **argv)
{
	int digit_tens, digit_ones;
	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &digit_tens, &digit_ones);
	
	printf("You entered the number ");
	
	switch(digit_tens) {
		case 9: printf("ninety");
				break;
		case 8: printf("eighty");
				break;
		case 7: printf("seventy");
				break;
		case 6: printf("sixty");
				break;
		case 5: printf("fifty");
				break;
		case 4: printf("forty");
				break;
		case 3: printf("thirty");
				break;
		case 2: printf("twenty");
				break;
		default: break;
	}
	
	if(digit_tens == 1) {
		switch(digit_ones) {
			case 9: printf("nineteen.");
					break;
			case 8: printf("eighteen.");
					break;
			case 7: printf("seventeen.");
					break;
			case 6: printf("sixteen.");
					break;
			case 5: printf("fifteen.");
					break;
			case 4: printf("fourteen.");
					break;
			case 3: printf("thirteen.");
					break;
			case 2: printf("twelve.");
					break;
			case 1: printf("eleven.");
					break;
			case 0: printf("ten.");
					break;
			default: break;
				}
			} else if(digit_tens != 0 && digit_tens != 1){
				switch(digit_ones) {
					case 9: printf("-nine.");
							break;
					case 8: printf("-eight.");
							break;
					case 7: printf("-seven.");
							break;
					case 6: printf("-six.");
							break;
					case 5: printf("-five.");
							break;
					case 4: printf("-four.");
							break;
					case 3: printf("-three.");
							break;
					case 2: printf("-two.");
							break;
					case 1: printf("-one.");
							break;
					case 0: break;
				}
			} 
							
					
		
	
	return 0;
}

