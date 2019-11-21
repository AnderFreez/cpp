#include "ege.h"
#include "myArray.h"
#include <iostream>

using namespace std;

namespace ege
{
	namespace ege251
	{
		void task7682()
		{
			int const n = 5;
			int a[n];
			myArray::InOut::arrayIn(a, n);
			int amount = 0;

			for (int i = 0; i < n - 1; i++)
			{
				int sum = a[i] + a[i + 1];
				if (sum % 2 == 0 && sum % 4 != 0)
				{
					++amount;
				}
			}

			if (amount == 0)
			{
				cout << "No pairs";
			}
			else
			{
				cout << amount;
			}
		}

		void task7770()
		{
			int const n = 40;
			int a[n];
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				int sum = a[i] + a[i - 1];
				int mult = a[i] * a[i - 1];
				if (sum % 7 == 0 && mult > 0)
				{
					++amount;
				}
			}

			if (amount == 0)
			{
				cout << "No pairs";
			}
			else
			{
				cout << amount;
			}
		}

		void task6936()
		{
			int const n = 2014;
			double a[n];
			double max = 0;
			int index = 0;

			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				double subtract = abs(a[i] - a[i - 1]);
				if (subtract > max)
				{
					max = subtract;
					index = i;
				}
			}
			cout << a[index] << " " << a[index + 1];
		}

		void task11361()
		{
			int const n = 40;
			int a[n];
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				if (a[i] % 10 == 2 || a[i - 1] % 10 == 2)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task7797()
		{
			int const n = 40;
			int a[n];
			int amount = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				int sum = a[i] + a[i - 1];
				int mult = a[i] * a[i - 1];
				if (sum % 6 != 0 && mult < 1000)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task8113()
		{
			int const n = 20;
			int a[n];
			int amount = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				if (a[i] % 3 == 0 && a[i - 1] % 3 == 0)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task8673()
		{
			int const n = 40;
			int a[n];
			int amount = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				int sum = a[i] + a[i - 1];
				int mult = a[i] * a[i - 1];
				if (sum % 2 == 0 && mult > 100)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task9376()
		{
			int const n = 20;
			int a[n];
			int amount = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{

				if (a[i] % 3 == 0 || a[i - 1] % 3 == 0)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task10488()
		{
			int const n = 30;
			int a[n];
			int amount = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{

				if (a[i] % 13 == 0 || a[i - 1] % 13 == 0)
				{
					++amount;
				}
			}
			cout << amount;
		}
	}
	// end of namespace ege251

	namespace ege252
	{
		void task9209()
		{
			int const n = 6;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}

			int sum = 0;
			for (int i = 0; i < n; ++i)
			{
				sum += a[i];
			}

			if (sum % 2 == 0)
			{
				int amountOfEven = 0;
				for (int i = 0; i < n; i++)
				{
					if (a[i] % 2 == 0)
					{
						++amountOfEven;
					}
				}
				cout << amountOfEven;
			}
			else
			{
				int amountOfOdd = 0;
				for (int i = 0; i < n; i++)
				{
					if (a[i] % 2 == 1)
					{
						++amountOfOdd;
					}
				}
				cout << amountOfOdd;
			}
		}

		void task9811()
		{
			int const n = 6;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}

			int min = INT_MAX;
			for (int i = 1; i < n - 1; ++i)
			{
				if (a[i] < a[i - 1] && a[i] < a[i + 1] && a[i] < min)
				{
					min = a[i];
				}
			}

			if (min == INT_MAX)
			{
				cout << 0;
			}
			else
			{
				cout << min;
			}
		}

		void task2914()
		{
			int const n = 30;
			int a[n];
			int max = INT_MIN;
			int min = INT_MAX;
			double arithmeticMeanOfMaxMin = 0;
			double arithmeticMeanOfAll = 0;
			double sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
				}
				if (a[i] > max)
				{
					max = a[i];
				}
				sum += a[i];
			}
			arithmeticMeanOfMaxMin = (max + min) / 2;
			arithmeticMeanOfAll = sum / n;
			cout << arithmeticMeanOfMaxMin - arithmeticMeanOfAll;
		}

		void task2901()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 == 1)
				{
					sum += a[i];
				}
			}
			cout << sum / n;
		}

		void task3790()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 != 0)
				{
					sum = a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task7214()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0)
				{
					sum = a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task7383()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 4 || a[i]== 5)
				{
					sum = a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task7418()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 180)
				{
					sum = a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task7422()
		{
			int const n = 30;
			int a[n];
			double arithmeticMean = 0;
			double sum = 0;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 50)
				{
					sum = a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}
	}
	// end of namespace ege252

	namespace ege253
	{

	}
	// end of namespace ege253

	namespace ege254
	{

	}
	// end of namespace ege254

	namespace ege255
	{

	}
	// end of namespace ege255
}
// end of namespace ege