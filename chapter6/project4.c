/*
 * project4.c
 * 
 * Copyright 2026 tequi <tequi@ANDY-COMPUTER>
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
	float commission, value;
	
	value = 1;
	
	while (value != 0) {
	printf("Enter value of trade: ");
	scanf("%f", &value);
	if(value == 0) {
			break;
		}
	if (value < 2500.00f) 
		commission = 30.00f + 0.17f * value;
	else if (value < 6250.00f) 
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f) 
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.000f + 0.0009f * value;
		
	if (commission < 39.00f)
		commission = 39.00f;
	
	printf("Commission: $%.2f\n", commission);
}
	return 0;
}
