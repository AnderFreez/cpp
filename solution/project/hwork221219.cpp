#include <iostream>
#include "hwork221219.h"

using namespace std;

namespace hwork221219
{
	void task16051()
	{
		int number = 0;
		int minDigit = INT_MAX;
		int amount = 0;
		while (number != 0)
		{
			int digit = number % 10;
			if (digit % 2 == 0 && digit < minDigit)
			{
				minDigit = digit;
			}
			if (digit % 2 == 0)
			{
				++amount;
			}
			number /= 10;
		}
		if (amount == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << minDigit;
		}
	}

	void task7382()
	{
		int x = 0;
		cin >> x;
		if (x >= 0 && x <= 6)
		{
			cout << "B";
		}
		if (x >= 12 && x <= 18)
		{
			cout << "D";
		}
	}

	void task7469()
	{
		int number = 0;
		int amount = 0;
		int max = INT_MIN;
		for (int i = 0; i < 4; i++)
		{
			cin >> number;
			if (number % 2 == 1)
			{
				++amount;
			}
			if (number % 2 == 1 && number > max)
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
			cout << max << " " << amount;
		}
	}

	void task5948()
	{
		int number = 0;
		int min = INT_MAX;
		cin >> number;
		while (number != 0)
		{
			int digit = number % 10;
			if (digit < min)
			{
				min = digit;
			}
		}
		cout << min;
	}

	void task9176()
	{
		int number = 0;
		int max = INT_MIN;
		int sum = 0;
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
		}
		cout << max << " " << sum;
	}
}
















