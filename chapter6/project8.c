/*
 * project8.c
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
	int n, start_day, count;
	printf("Enter number of days in a month: ");
	scanf("%d", &n);
	
	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &start_day);
	
	count = 0;
	int day = 1;
	
	for(int i = 1; i < n + start_day; i++) {
		if (count % 7 == 0) {
			printf("\n");
		}
		count += 1;
		if (i < start_day) {
			printf("\t");
		} else {
			printf("%d\t", day);
			day += 1;
		}
	}
		
		
	return 0;
}

