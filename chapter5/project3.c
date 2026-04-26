#include <stdio.h>

int main(int argc, char **argv)
{
	float commission, value;
	float rival_commission, price_per_share;
	int shares;
	
	printf("Enter the number of shares: ");
	scanf("%d", &shares);
	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);
	
	value = shares * price_per_share;
	
	if (value < 2500.00f) {
		commission = 30.00f + 0.17f * value;
	} else if (value < 6250.00f) { 
		commission = 56.00f + 0.0066f * value;
	} else if (value < 20000.00f) {
		commission = 76.00f + 0.0034f * value;
	} else if (value < 50000.00f) {
		commission = 100.00f + .0022f * value;
	} else if (value < 500000.00f) {
		commission = 155.00f + 0.0011f * value;
	} else {
		commission = 255.000f + 0.0009f * value;
	}
	if (commission < 39.00f) {
		commission = 39.00f;
	}
	if (shares < 2000) {
		rival_commission = 33 + .03*shares;
	} else if (shares >= 2000) {
		rival_commission = 33 + 0.02*shares;
	}
	
	printf("Commission: $%.2f\n", commission);
	printf("Rival's Commission: $%.2f\n", rival_commission);
	
	return 0;
}

