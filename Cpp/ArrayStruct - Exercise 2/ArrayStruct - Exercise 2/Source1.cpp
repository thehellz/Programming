using namespace std;
#include <iostream>
#include <time.h>

int LessThan(int A[], int n, int v);

int main()
{
	int value = 10;
	const int n = 100;
	int nums[n];
	int elements;

	srand(time(NULL));

	for (int i = 0; i < n; i++)
		nums[i] = rand() % 25;

	elements = LessThan(nums, n, value);
	cout << "The amount of elements under " << value << " is " << elements << endl;
	
	return 0;
}

int LessThan(int A[], const int n, int v)
{
	int counter = 0;

	for (int i = 0; i < v; i++)
	{
		if (A[i] < v)
			counter++;
	}

	return counter;
}