/*
 * guess.c
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
 * a guessing game where the user has to guess a secret number. 
 * After every guess the program tells the user whether his number was 
 * too large or too small. At the end the number of tries needed should
 * be printed. I counts only as one try if the user inputs the same 
 * number consecutively.
**/ 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	srand(time(NULL));
	int random = rand() % 101;
	int guess = 0;
	int count = 1;
	
	printf("please guess a number: ");
	scanf("%d", &guess);
	
	while (guess != random)
	{
		if (guess > random)
		{
			printf("Too high, guess lower: ");
			scanf("%d", &guess);
			count++;
		}
		else if (guess < random)
		{
			printf("Too low, guess higher: ");
			scanf("%d", &guess);
			count++;
		}
		else if (guess == guess)
		{
			printf("Oops, you enetered the same number twice. Pleae try another number: ");
			scanf("%d", &guess);
		}
	}
	
	printf("Congratulations! You guessed correctly after %d tries.", count);
	
	return 0;
}

