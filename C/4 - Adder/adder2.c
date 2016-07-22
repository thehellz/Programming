/*
 * adder2.c
 * 
 * Copyright 2016 Matthew J Hellige <mhockeyz@yahoo.com>
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

/**
 * A program that adds every number up to the specified amount if and 
 * only if the number is divisible by 3 and 5.
**/

#include <stdio.h>

int main(int argc, char **argv)
{
	int num = 0;
	int sum = 0;
	printf("Pleae enter a number, it can be any number: ");
	scanf("%d", &num);
	
	for(int i = 0; i <= num; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	
	printf("the sum of the numbers divisble by 3 and 5 from 1 to %d is %d.", num, sum);
	
	return 0;
}

