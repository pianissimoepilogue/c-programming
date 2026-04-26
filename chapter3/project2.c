#include <stdio.h>

int main(int argc, char **argv)
{
	int item, month, day, year;
	float price;
	
	printf("Enter item number: ");
	scanf("%d", &item);
	
	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%.2f\t\t%d/%d/%d\n", item, price, month, day, year);
	
	
	
	return 0;
}

