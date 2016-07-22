/**
	Matthew Hellige
	June.29.2016
	Purpose: Driver file that drives the variables and functions of Header.h.
**/

using namespace std;
#include <iostream>
#include "Header.h"

int main()
{
	Car car1, car2;
	cout << "Enter the first car..." << endl;
	cin >> car1;

	cout << "Enter the second car..." << endl;
	cin >> car2;
	
	cout << "ACCELERATING!!" << endl;
	for (int i = 0; i < 5; i++)
	{
		car1.accelerate();
		cout << car1.getSpeed() << endl;
	}

	cout << "OH FUCK, THE POPO, SLOWING DOWN!!!" << endl;
	for (int i = 0; i < 5; i++)
	{
		car1.brake();
		cout << car1.getSpeed() << endl;
	}
	
	if (car1 == car2)
		cout << "The cars are the same!" << endl;
	else
		cout << "The cars are not the same." << endl;

	cout << car1;

	return 0;
}