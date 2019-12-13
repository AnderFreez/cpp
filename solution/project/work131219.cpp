#include <iostream>
#include "myArray.h"
#include "work131219.h"

using namespace std;

namespace work131219
{
	void task11361()
	{
		int const n = 40;
		int a[n];
		int amount = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] % 10 == 2 || a[i + 1] % 10 == 2)
			{
				++amount;
			}
		}
		cout << amount;
	}

	void task5533()
	{
		int const n = 40;
		int a[n];
		int min = INT_MAX;
		int amount = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] % 2 == 0 && a[i] < min)
			{
				min = a[i];
				++amount;
			}
		}
		if (amount == 0)
		{
			cout << "Не Найдено";
		}
		else
		{
			cout << min;
		}
		
	}

	void task9209()
	{
		int const n = 6;
		int a[n];
		int amountOfEven = 0;
		int amountOfOdd = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (sum % 2 == 0)
			{
				if (a[i] % 2 == 0)
				{
					++amountOfEven;
				}
			}
			else
			{
				if (a[i] % 2 != 0)
				{
					++amountOfOdd;
				}
			}
		}
		if (amountOfEven == 0)
		{
			cout << amountOfOdd;
		}
		else
		{
			cout << amountOfEven;
		}
	}

	void task16454()
	{
		int const n = 40;
		int a[n];
		int min = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < min)
			{
				min = a[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] < min * 2)
			{
				a[i] *= 2;
			}
		}
		myArray::InOut::arrayOut(a, n);
	}

	void task18453()
	{
		int const n = 6;
		int a[n];
		int amount = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] >= 1002 && a[i] % 3 == 0)
			{
				++amount;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= 1002 && a[i] % 3 == 0)
			{
				a[i] = amount;
			}
		}
		myArray::InOut::arrayOut(a, n);
	}
}