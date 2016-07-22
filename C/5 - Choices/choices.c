/*
 * choices.c
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
 * A program that ak for a number and allows the user the enter a choice
 * whether to calculate sum or product up to the specified number.
**/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int num, sum = 0;
	char choice;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Now would you like to compute the sum or product? (s/p) ");
	scanf(" %c", &choice);
	
	if (choice == 's')
		for (int i = 0; i <= num; ++i)
			sum = sum + i;
	else
	{
		sum = 1;
		for (int i = 1; i <= num; ++i)
			sum = sum * i;
	}
	
	printf("The calculation is: %d", sum);
	
	return 0;
}

