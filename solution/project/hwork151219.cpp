#include <iostream>
#include "hwork151219.h"
#include "myArray.h"

using namespace std;

namespace hwwork151219
{
	void task5629()
	{
		int const n = 6;
		int a[n];
		int min = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] % 6 == 0 && a[i] < min)
			{
				min = a[i];
			}
		}
		if (min == INT_MAX)
		{
			cout << "NO";
		}
		else
		{
			cout << min;
		}
	}

	void task16052()
	{
		int const n = 6;
		int a[n];
		int min = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 6 != 0 && a[i] < min)
			{
				min = a[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 6 == 0)
			{
				a[i] = min;
			}
		}
		myArray::InOut::arrayOut(a, n);
	}

	void task11281()
	{
		int const n = 6;
		int a[n];
		int mult = 1;
		int min = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mult *= a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == mult % 2 && a[i] < min)
			{
				min = a[i];
			}
		}
		cout << min;
	}

	void task3614()
	{
		int const n = 6;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max1 = INT_MIN;
		int max2 = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			if (a[i] <= max2)
			{
				continue;
			}
			if (a[i] > max2 && a[i] <= max1)
			{
				max2 = a[i];
				continue;
			}
			if (a[i] > max1)
			{
				max2 = max1;
				max1 = a[i];
				continue;
			}
		}
		cout << max2;
	}

	void task5853()
	{
		int const n = 6;
		int a[n];
		int max = INT_MIN;
		bool yeah = false;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 1000 && a[i] > 99 && a[i] % 4 == 0 && a[i] > max)
			{
				max = a[i];
				yeah = true;
			}
		}
		if (yeah)
		{
			cout << max;
		}
		else
		{
			cout << "";
		}
	}

	void task15864()
	{
		int number = 0;
		int max = INT_MIN;
		int amount = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> number;
			if (number % 4 == 0)
			{
				++amount;
			}
			if (number % 4 == 0 && number > max)
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

	void task6903()
	{
		int number = 0;
		int sum = 0;
		for (int i = 0; i < 6; i++)
		{
			cin >> number;
			if (number % 2 == 0)
			{
				sum += number;
			}
		}
		if (sum == 0)
		{
			cout << 0;
		}
		else
		{
			cout << sum;
		}
	}
}