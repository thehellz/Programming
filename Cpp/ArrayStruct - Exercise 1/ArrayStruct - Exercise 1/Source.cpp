using namespace std;
#include <iostream>

int main()
{
	const int maxSize = 20;
	int myNumbers[maxSize];

	for (int i = 0; i < maxSize; i++)
	{
		if (i == 0)
			myNumbers[i] = 9;
		else if (i == maxSize - 1)
			myNumbers[i] = 55;
		else
			myNumbers[i] = 0;
	}

	for (int j = 0; j < maxSize; j++)
	{
		cout << myNumbers[j] << ", ";
	}

	cout << endl << "END PROGRAM\n";
	return 0;
}