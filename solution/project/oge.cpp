#include "oge.h"
#include <iostream>
#include <limits>

using namespace std;

namespace oge
{
	void task20()
	{
		int n = 0;
		cin >> n;
		int number = 0;
		int max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> number;
			if (number % 5 == 0 && number > max)
			{
				max = number;
			}
		}
		cout << max;
	}

	void task40()
	{
		int n = 0;
		cin >> n;
		int number = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> number;
			if (number % 6 == 0)
			{
				sum += number;
			}
		}
		cout << sum;
	}

	void task340()
	{
		int number = 0;
		int sum = 0;
		cin >> number;
		while(number != 0)
		{
			if (number % 6 == 0 && number % 10 == 4)
			{
				sum += number;
			}
			cin >> number;
		}
		cout << sum;
	}

	void task341()
	{
		int max1 = INT_MIN;
		int max2 = INT_MIN;
		int min1 = INT_MAX;
		int min2 = INT_MAX;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			// max
			{
				bool case1 = number <= max2;
				bool case2 = number > max2 && number <= max1;
				bool case3 = number > max1;

				if (case1)
				{

				}

				if (case2)
				{
					max2 = number;
				}

				if (case3)
				{
					max2 = max1;
					max1 = number;
				}
			}

			// min
			{
				bool case1 = number >= min2;
				bool case2 = number < min2 && number >= min1;
				bool case3 = number < min1;

				if (case1)
				{

				}

				if (case2)
				{
					min2 = number;
				}

				if (case3)
				{
					min2 = min1;
					min1 = number;
				}
			}

			cin >> number;
		}

		cout << max1 + max2 << " " << min1 + min2;
	}

	void task361()
	{
		int n = 0;
		double u = 0;
		cin >> n;
		int v = 0;
		int max = INT_MIN;
		int amountLess30 = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> u;
			v = round(u);
			if (v < 30)
			{
				++amountLess30;
			}
			if (v > max)
			{
				max = v;
			}
		}
		cout << max << endl;
		if (amountLess30 > 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}

	void task461()
	{
		int amount = 0;
		int length = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 2 == 1 && number % 3 == 0)
			{
				++amount;
			}
			++length;
			cin >> number;
		}
		cout << amount << endl << length;
	}

	void task481()
	{
		int amount = 0;
		int sum = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 2 == 0 && number % 5 == 0)
			{
				++amount;
			}
			sum += number;
			cin >> number;
		}
		cout << sum << endl << amount;
	}

	void task501()
	{
		int amount = 0;
		int sum = 0;
		int number = 0;
		while (number != 0)
		{
			if (number % 2 == 0)
			{
				sum += number;
			}
			++amount;
			cin >> number;
		}
		cout << amount << endl << sum;
	}

	void task561()
	{
		int amount = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 5 == 0 && number % 2 == 0)
			{
				++amount;
			}
			cin >> number;
		}
		cout << amount;
	}

	void task581()
	{
		int amount = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 9 == 0 && number % 2 == 0)
			{
				++amount;
			}
			cin >> number;
		}
		cout << amount;
	}

	void task601()
	{
		int sum = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 7 == 0 && number % 10 == 2)
			{
				sum += number;
			}
			cin >> number;
		}
		cout << sum;
	}

	void task621()
	{
		int sum = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 6 == 0 && number % 10 == 4)
			{
				sum += number;
			}
			cin >> number;
		}
		cout << sum;
	}

	void task641()
	{
		int sum = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 8 == 0 && number % 10 == 6)
			{
				sum += number;
			}
			cin >> number;
		}
		cout << sum;
	}

	void task661()
	{
		int sum = 0;
		int number = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 3 == 0 && number % 10 == 4)
			{
				sum += number;
			}
			cin >> number;
		}
		cout << sum;
	}

	void task721()
	{
		int n = 0;
		int number = 0;
		int min = INT_MAX;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> number;
			if (number % 10 == 4 && number < min)
			{
				min = number;
			}
		}
		cout << min;
	}

	void task521()
	{
		int sum = 0;
		int amountPositive = 0;
		int amountNegative = 0;
		int number = 0;

		cin >> number;
		while (number != 0)
		{
			sum += number;
			if (number > 0)
			{
				++amountPositive;
			}
			if (number < 0)
			{
				++amountNegative;
			}
		}
		cout << sum << endl << amountPositive - amountNegative;
	}

	void task541()
	{
		int number = 0;
		int amount = 0;
		int sum = 0;
		cin >> number;
		while (number != 0)
		{
			if (number > 0 && number <= 256)
			{
				sum += number;
			}
			++amount;
		}
		cout << sum << endl << amount;
	}

	void task1071()
	{
		int n = 0;
		int winner = INT_MIN;
		int tasks = 0;
		int theLooooosers = 0;
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			cin >> tasks;
			if (tasks > winner)
			{
				winner = tasks;
			}
			if (tasks == 0)
			{
				++theLooooosers;
			}
		}
		cout << winner << endl;
		if (theLooooosers > 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}

	void task1091()
	{
		int n = 0;
		cin >> n;
		int temperature = 0;
		int temperature_15 = 0;
		int winnerTemperature = INT_MAX;
		for (int i = 0; i <= n; i++)
		{
			cin >> temperature;
			if (temperature < -15)
			{
				++temperature_15;
			}
			if (temperature < winnerTemperature)
			{
				winnerTemperature = temperature;
			}
		}
		cout << winnerTemperature << endl;
		if (temperature_15 == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << "YES";
		}
	}

	void task1253()
	{
		int number = 0;
		double sum = 0;
		int amount = 0;
		cin >> number;
		while (number != 0)
		{
			if (number % 8 == 0)
			{
				sum += number;
			}
			++amount;
		}
		if (sum == 0)
		{
			cout << "NO";
		}
		else
		{
			cout << sum / amount;
		}
	}

	void task5085()
	{
		int a = 0;
		int b = 0;
		cin >> a >> b;
		int amount = 0;
		for (int i = a; i <= b; i++)
		{
			if (i % 2 == 0)
			{
				++amount;
			}
		}
		cout << amount;
	}
}