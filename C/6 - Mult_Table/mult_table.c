/*
 * mult_table.c
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
 * A program that calculates and prints a multiplication table of 12x12
**/

#include <stdio.h>

int main(int argc, char **argv)
{
	int product = 0;
	for(int i = 1; i <= 12; ++i)
	{
		for (int j = 1; j <= 12; ++j)
		{
			product = i * j;
			
			printf("%d ", product);
		}
		printf("\n");
	}
	return 0;
}

