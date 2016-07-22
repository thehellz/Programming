/**
	Matthew Hellige
	6.29.2016
	PURPOSE: Header file that holds that Car class, it's variables and many functions.
**/



using namespace std;
#include <iostream>
#include <string>


class Car
{
private:
	int year;
	string model;
	int speed;

public:
	void constructor();
	int getYear();
	string getModel();
	int getSpeed();
	void accelerate();
	void brake();
	bool operator == (Car c);
	friend istream &operator >> (istream &in, Car &c);
	friend ostream &operator << (ostream &out, Car &c);
};


// Default constructor that sets all values to 0.
void Car::constructor()
{
	year = 0;
	model = "";
	speed = 0;
}

// Function that will return the car's year.
int Car::getYear()
{
	return year;
}

// Function that will return thr car's model.
string Car::getModel()
{
	return model;
}

// Function that will retuen the car's speed.
int Car::getSpeed()
{
	return speed;
}

// Function that adds 5 speed each time it is called.
void Car::accelerate()
{
	speed = speed + 5;
}

// Function that reduces the speed by 5 each time it is called.
void Car::brake()
{
	speed = speed - 5;
}

// Overloaded == operator such that it can compare two Car objects.
bool Car::operator == (Car c)
{
	if (year == c.year && model == c.model) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

// Overloaded >> operator to input the objects variables using user input.
istream &operator >> (istream &in, Car &c)
{
	cout << "Year: ";
	in >> c.year;
	cout << "Model: ";
	in >> c.model;
	cout << "Speed: ";
	in >> c.speed;

	return in;
}

// Overloaded << operator such that when called it outputs the variables in the Car object.
ostream &operator << (ostream &out, Car &c)
{
	out << "Year: " << c.year << "\nModel: " << c.model << "\nSpeed: " << c.speed << endl;

	return out;
}