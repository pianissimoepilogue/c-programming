/*
 * project10.c
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
	int mm1, dd1, yy1;
	int mm2, dd2, yy2;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
	while((mm1 != 0) && (dd1 != 0) && (yy1 != 0)) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm2, &dd2, &yy2);
		if(mm2 == 0 && dd2 == 0 && yy2 == 0) {
			break;
		}
		if((yy2 == yy1 && mm2 == mm1 && dd2 < dd1) || (yy2 == yy1 && mm2 < mm1) || (yy2 < yy1)) {
			mm1 = mm2;
			dd1 = dd2;
			yy1 = yy2;
		}
	}
	
	printf("%d/%d/%d is the earliest date", mm1, dd1, yy1);
	return 0;
}

