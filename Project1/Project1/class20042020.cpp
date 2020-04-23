#include "class20042020.h"

#include <iostream>
using namespace std;

namespace class20042020
{
	void cinArray(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
	}

	void printArray(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
	}

	void rotate(int* a, int size)
	{
		for (int i = 0; i < size / 2; i++)
		{
			int temp = a[i];
			a[i] = a[size - i - 1];
			a[size - i - 1] = temp;
		}
	}

	int powerRec(int x, int p)
	{
		if (p == 0)
		{
			return 1;
		}

		return x * powerRec(x, p - 1);
	}
}