/*
 * greeter2.c
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
  * a program that asks the user for his name and greets him with 
  * his name such that only the users Alice and Bob are greeted 
  * with their names.
/**

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[] = "";
	
	printf("Please enter your name, then strike enter ");
	scanf("%s", name);
	
	if (strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0)
		printf("Hello %s, you are a part of the 99th percentile!", name);
	else
		printf("Sadly you are not part of the top 1 percent...");
	
	return 0;
}

