/*
 * project9.c
 * 
 * Copyright 2026 andyn <andyn@DESKTOP-KR52V46>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{

	float loan, rate, monthly;
	int months;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment amount: ");
	scanf("%f", &monthly);
	printf("Enter number of monthly payments: ");
	scanf("%d", &months);
	
	//float first, second, third;
	
	//first = loan + (loan * ((rate/100)/12)) - monthly;
	//second = first + (first * ((rate/100)/12)) - monthly;
	//third = second + (second * ((rate/100)/12)) - monthly;
	
	//printf("Balance remaining after first payment: $%.2f\n", first);
	//printf("Balance remaining after second payment: $%.2f\n", second);
	//printf("Balance remaining after third payment: $%.2f\n", third);
	
	float payment;
	
	for(int i = 1; i <= months; i++) {
		payment = loan + (loan * ((rate/100)/12)) - monthly;
		printf("Balance remaining after first payment: $%.2f\n", payment);
		loan = payment;
	}
		
	
	
	return 0;
}


