#include <stdio.h>

int main(int argc, char **argv)
{
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five,
	&six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
	
	printf("%d %d %d %d\n", one, two, three, four);
	printf("%d %d %d %d\n", five, six, seven, eight);
	printf("%d %d %d %d\n", nine, ten, eleven, twelve);
	printf("%d %d %d %d\n", thirteen, fourteen, fifteen, sixteen);
	
	int row1, row2, row3, row4;
	int column1, column2, column3, column4;
	int diagonal1, diagonal2;
	
	row1 = one + two + three + four;
	row2 = five + six + seven + eight;
	row3 = nine + ten + eleven + twelve;
	row4 = thirteen + fourteen + fifteen + sixteen;
	column1 = one + five + nine + thirteen;
	column2 = two + six + ten + fourteen;
	column3 = three + seven + eleven + fifteen;
	column4 = four + eight + twelve + sixteen;
	diagonal1 = one + six + eleven + sixteen;
	diagonal2 = four + seven + ten + thirteen;
	
	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
	printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);
	
	
	return 0;
}

