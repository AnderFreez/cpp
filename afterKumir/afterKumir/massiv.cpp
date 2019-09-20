#include <iostream>

using namespace std;

namespace myArray
{
	// input array
	void arrayIn(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
	}

	// print array
	void arrayOut(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

	// rand array
	void arrayRand(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 100;
		}
	}
}