#include "home26042020.h"
#include <iostream>

using namespace std;

namespace home26042020
{
	void simmetria(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < size / 2; i++)
		{
			int temp = a[i];
			a[i] = a[size - i - 1];
			a[size - i - 1] = temp;
		}
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
	}

	void swap(int* a, int size, int index1, int index2)
	{
		int temp = a[index1];
		a[index1] = a[index2];
		a[index2] = temp;
	}

	void task5(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < size; i++)
		{
			if (a[i] < 0)
			{
				swap(a, size, i, i + 1);
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << " ";
		}
	}
}