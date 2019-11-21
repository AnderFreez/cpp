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
				double subtruct = abs(a[i] - a[i - 1]);
				if (subtruct > max)
				{
					max = subtruct;
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
			for (int i = 1; i < n;i++)
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
			int sum = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				sum = a[i] + a[i - 1];
				if (sum % 6 == 1 && a[i] * a[i - 1] < 1000)
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
			for  (int i = 1; i < n; i++)
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
			int sum = 0;
			for (int i = 1; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; i++)
			{
				sum = a[i] + a[i - 1];
				if (sum % 2 == 0 && a[i] * a[i - 1] > 100)
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
	}
	// end of namespace ege251

	namespace ege252
	{

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