#include <iostream>
#include "work201219.h"

using namespace std;

namespace work201219
{
	void task11125()
	{
		int number = 0;
		int amount = 0;
		int max = INT_MIN;
		for (int i = 0; i < 4; i++)
		{
			cin >> number;
			if (number % 2 == 0)
			{
				++amount;
			}
			if (number % 2 == 0 && number > max)
			{
				max = number;
			}
		}
		if (amount == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << amount << " " << max;
		}
	}

	void task9176()
	{
		int number = 0;
		int sum = 0;
		int max = INT_MIN;
		for (int i = 0; i < 4; i++)
		{
			cin >> number;
			if (number < 0)
			{
				sum += number;
			}
			if (number > max)
			{
				max = number;
			}
			cout << max << " " << sum;
		}
	}

	void task7350()
	{
		int number = 1;
		int amount = 0;
		cin >> number;
		while (number != 0)
		{
			int digit = number % 10;
			if (digit != 9 && digit != 0)
			{
				cout << digit;
				++amount;
			}
			number /= 10;
		}
		if (amount == 0)
		{
			cout << 0;
		}
	}

	void task5596()
	{
		int number = 0;
		int mult = 1;
		cin >> number;
		while (number != 0)
		{
			int digit = number % 10;
			mult *= digit;
			number /= 10;
		}
		cout << mult;
	}

	void task7417()
	{
		int x = 0;
		cin >> x;
		for (int i = 0; i < 4; i++)
		{
			if (x >= -6 && x <= 2)
			{
				cout << "B";
				return;
			}
			if (x >= 10 && x <= 18)
			{
				cout << "D";
				return;
			}
		}
	}
}