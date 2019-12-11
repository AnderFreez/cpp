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
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 != 0)
				{
					sum += a[i];
					++amount;
				}
			}
			cout << sum / amount;
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
					sum += a[i];
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
					sum += a[i];
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
					sum += a[i];
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
					sum += a[i];
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
					sum += a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task10301()
		{
			int const n = 2016;
			int a[n];

			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}

			int amount = 0;
			for (int i = 0; i < n-2; ++i)
			{
				if (a[i] == 0.5 * (a[i + 1] + a[i + 2]))
				{
					++amount;
				}
			}

			cout << amount;
		}

		void task10399()
		{
			int const n = 2016;
			int a[n];

			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}

			int max = INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] > max)
				{
					max = a[i];
				}
			}

			int sum = 0;
			int chetnost = max % 2;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] % 2 == chetnost)
				{
					sum += a[i];
				}
			}

			cout << sum;
		}

		void task13636()
		{
			int const n = 2017;
			int a[n];
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 16 >= 10 && a[i] % 16 <= 15 && a[i] >= 256 && a[i] < 4096)
				{
					sum += a[i];
				}
			}
			cout << sum;
		}

		void task15865()
		{
			int const n = 30;
			int a[n];
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 200 && a[i] % 5 == 0)
				{
					sum += a[i];
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 200 && a[i] % 5 == 0)
				{
					a[i] = sum;
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout << a[i] << " ";
			}
		}
	}
	// end of namespace ege252

	namespace ege253
	{
		void task2907()
		{
			int const n = 30;
			int a[n];
			int maxEven = INT_MIN;
			int maxOdd = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 == 0 && a[i] > maxEven)
				{
					maxEven = a[i];
				}
				if (a[i] % 2 != 0 && a[i] > maxOdd)
				{
					maxOdd = a[i];
				}
			}
			cout << maxEven - maxOdd;
		}

		void task9660()
		{
			int const n = 40;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 10 && a[i] <= 99 && a[i] % 3 != 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << "не найдено";
			}
			else
			{
				cout << max;
			}
		}

		void task9775()
		{			
			int const n = 2015;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int max = INT_MIN;
			for (int i = 1; i < n - 1; ++i)
			{
				if (a[i] > a[i - 1] && a[i] > a[i + 1] && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}

		void task2919()
		{
			int const n = 30;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
				}
			}
			for (int i = 0; i < n; ++i)
			{
				if (a[i] == max)
				{
					cout << i << " ";
				}
			}
		}

		void task2905()
		{
			int const n = 30;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			cout << max;
		}

		void task2937()
		{
			int const n = 23;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] <= 1800 && a[i] > max)
				{
					max = a[i];
				}
			}
			cout << max;
		}

		void task2938()
		{
			int const n = 23;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] <= 1800 && a[i] > 1600 && a[i] > max)
				{
					max = a[i];
				}
			}
			cout << max;
		}

		void task5501()
		{
			int const n = 20;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 100 && a[i] <= 999 && a[i] % 5 == 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << "не найдено";
			}
			else
			{
				cout << max;
			}
		}

		void task5725()
		{
			int const n = 40;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 100 && a[i] <= 999 && a[i] % 7 != 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << "не найдено";
			}
			else
			{
				cout << max;
			}
		}

		void task5789()
		{
			int const n = 40;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 100 && a[i] <= 999 && a[i] % 9 == 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << "не найдено";
			}
			else
			{
				cout << max;
			}
		}

		void task()
		{
			int const n = 40;
			int a[n];
			int max = INT_MIN;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] >= 100 && a[i] <= 999 && a[i] % 2 == 0 && a[i] > max)
				{
					max = a[i];
				}
			}
			if (max == INT_MIN)
			{
				cout << "не найдено";
			}
			else
			{
				cout << max;
			}
		}

		void task2910()
		{
			int const n = 10;
			int a[n][n];
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cin >> a[i][j];
				}
			}

			int sumOfRowMax = 0;
			for (int i = 0; i < n; ++i)
			{
				int maxOfCurrentRow = INT_MIN;
				for (int j = 0; j < n; ++j)
				{
					if (a[i][j] > maxOfCurrentRow)
					{
						maxOfCurrentRow = a[i][j];
					}
				}
				sumOfRowMax += maxOfCurrentRow;
			}
			
			cout << sumOfRowMax;
		}

		void task2934()
		{
			int const n = 25;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}

			int min = INT_MAX;
			int minIndex = -1;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] < min && a[i] > 40)
				{
					min = a[i];
					minIndex = i;
				}
			}

			cout << minIndex;
		}

		void task13421()
		{
			int const n = 2017;
			int a[n];
			int max = INT_MIN;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 8 == 4 && a[i] >= 512 && a[i] > max)
				{
					max = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}

		void task13474()
		{
			int const n = 2017;
			int a[n];
			int max = INT_MIN;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 16 == 3 && a[i] >= 256 && a[i] > max)
				{
					max = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}

		void task13501()
		{
			int const n = 2016;
			int a[n];
			int max = INT_MIN;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 16 == 4 && a[i] <= 256 && a[i] >= 16 && a[i] > max)
				{
					max = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}

		void task13555()
		{
			int const n = 2017;
			int a[n];
			int max = INT_MIN;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 16 == 11 && a[i] > max)
				{
					max = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}

		void task13582()
		{
			int const n = 2016;
			int a[n];
			int max = INT_MIN;
			int amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 16 == 14 && a[i] > max)
				{
					max = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				cout << 0;
			}
			else
			{
				cout << max;
			}
		}
	}
	// end of namespace ege253

	namespace ege254
	{
		void task2904()
		{
			int const n = 2016;
			int a[n];
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				a[i] = abs(a[i]);
			}
			for (int i = 0; i < n; i++)
			{
				cout << a[i] << " ";
			}
		}

		void task2917()
		{
			int const n = 2016;
			int a[n];
			int mult = 1;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0)
				{
					mult *= a[i];
				}
			}
			cout << mult;
		}

		void task2915()
		{
			int const n = 30;
			int a[n];
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0)
				{
					sum += a[i];
				}
			}
			if (sum == 0)
			{
				cout << "NO";
			}
			else
			{
				cout << sum;
			}
		}

		void task2913()
		{
			int const n = 10;
			int a[n];
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			int maxNegativeLength = INT_MIN;
			int currentNegativeLength = 0;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] < 0)
				{
					++currentNegativeLength;
				}
				if (a[i] >= 0 || i == n - 1)
				{
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
						currentNegativeLength = 0;
					}
				}
			}

			cout << maxNegativeLength;
		}

		void task2913difficult()
		{
			int const n = 10;
			int a[n];
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			int maxNegativeLength = INT_MIN;
			int currentNegativeLength = 0;
			for (int i = 0; i < n - 1; ++i)
			{
				bool caseGo = (a[i] < 0) && (a[i + 1] < 0) && (i + 1 < n - 1);
				bool caseEndOfArray = (a[i] < 0) && (a[i + 1] < 0) && (i + 1 == n - 1);
				bool caseEndOfCurrentSequence = (a[i] < 0) && (a[i + 1] > 0);
				if (caseGo)
				{
					++currentNegativeLength;
				}
				if (caseEndOfCurrentSequence)
				{
					++currentNegativeLength;
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
						currentNegativeLength = 0;
					}
				}
				if (caseEndOfArray)
				{
					currentNegativeLength += 2;
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
					}
				}
			}
			cout << maxNegativeLength;
		}

		void task2923()
		{
			int const n = 30;
			int a[n];
			double sum = 0;
			double amount = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 4 || a[i] == 5)
				{
					sum += a[i];
					++amount;
				}
			}
			cout << sum / amount;
		}

		void task3626()
		{
			int const n = 30;
			int a[n];
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 15 != 0)
				{
					sum += a[i];
				}
			}
			cout << sum;
		}

		void task2903difficult()
		{
			int const n = 10;
			int a[n];
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			int maxNegativeLength = INT_MIN;
			int currentNegativeLength = 0;
			for (int i = 0; i < n - 1; ++i)
			{
				bool caseGo = (a[i] < a[i + 1]) && (i + 1 < n - 1);
				bool caseEndOfArray = (a[i] < a[i + 1]) && (i + 1 == n - 1);
				bool caseEndOfCurrentSequence = a[i] >= a[i + 1];
				if (caseGo)
				{
					++currentNegativeLength;
				}
				if (caseEndOfCurrentSequence)
				{
					++currentNegativeLength;
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
						currentNegativeLength = 0;
					}
				}
				if (caseEndOfArray)
				{
					currentNegativeLength += 2;
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
					}
				}
			}
			cout << maxNegativeLength;
		}

		void task2903()
		{
			int const n = 10;
			int a[n];
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			int maxIncreaseLength = INT_MIN;
			int currentIncreaseLength = 1;
			for (int i = 0; i < n - 1; ++i)
			{
				if (a[i] < a[i + 1])
				{
					++currentIncreaseLength;/*
					if (i + 1 == n - 1 && currentIncreaseLength > maxIncreaseLength)
					{
						maxIncreaseLength = currentIncreaseLength;
					}*/
				}
				else
				{
					if (currentIncreaseLength >= maxIncreaseLength)
					{
						maxIncreaseLength = currentIncreaseLength;
						currentIncreaseLength = 1;
					}
				}
				if (currentIncreaseLength > maxIncreaseLength)
				{
					maxIncreaseLength = currentIncreaseLength;
				}
			}
			cout << maxIncreaseLength;
		}

		void task4569()
		{
			int const n = 10;
			int a[n];
			int mult = 1;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 != 0 && a[i] % 3 == 0)
				{
					mult *= a[i];
				}
			}
			cout << mult;
		}
		
		void task4860()
		{
			int const n = 10;
			int a[n];
			int min = INT_MAX;
			int mult = 1;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 100 && a[i] > 9 && a[i] % 10 != 7 && a[i] < min)
				{
					min = a[i];
					for (int i = 0; i < n; ++i)
					{
						if (a[i] >= 10 && a[i] < 100)
						{
							int sum = a[i] % 10 + a[i] / 10;
							if (sum % 2 == 0)
							{
								mult *= a[i];
							}

						}
					}
					cout << min;
				}
			}
		}

		void task4866()
		{
			int const n = 10;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 10 == 7 && a[i] < min)
				{
					min = a[i];
				}
			}
			cout << min;
		}

		void task5068()
		{
			int const n = 10;
			int a[n];
			int sum = 0;
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n - 1; ++i)
			{
				sum = a[i] + a[i + 1];
				if (sum % 2 == 0 && sum < min)
				{
					min = a[i];
				}
			}
			cout << sum;
		}

		void task6245()
		{
			int const n = 10;
			int a[n];
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				sum = a[i] + a[i + 1];
				if (a[i] % 100 != 99 && a[i] % 10 == 9 && a[i] < 1000 && a[i] > 99)
				{
					sum = a[i];
				}
			}
			cout << sum;
		}

		void task2932()
		{
			int a[12][12];
			for (int i = 0; i < 12; ++i)
			{
				for (int j = 0; j < 12; ++j)
				{
					a[i][j] = 1;
				}
			}
			for (int i = 2; i < 10; ++i)
			{
				for (int j = 2; j < 10; ++j)
				{
					a[i][j] = 0;
				}
			}
			int x = 0;
			int y = 0;
			cin >> x >> y;
			--x;
			--y;
			if (a[x - 2][y - 1] == 0)
			{
				cout << "(" << x - 1 << "; " << y << ")" << " ";
			}
		}

		void task7426()
		{
			int const n = 20;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int max = INT_MIN;
			int count = 0;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] >= 10 && a[i] <= 99)
				{
					int firstDigit = a[i] / 10;
					if (a[i] % firstDigit != 0 && a[i] > max)
					{
						max = a[i];
						++count;
					}
				}
			}
			if (count == 0)
			{
				cout << "Not found";
			}
			else
			{
				cout << max;
			}
		}

		void task5256()
		{
			int const n = 70;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int min = INT_MAX;
			for (int i = 0; i < n - 1; ++i)
			{
				if (a[i] % 2 == a[i + 1] % 2)
				{
					int sum = a[i] + a[i + 1];
					if (sum < min)
					{
						min = sum;
					}
				}
			}
			cout << min;
		}

		void task6790()
		{
			int const n = 2014;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int count = 0;
			for (int i = 0; i < n - 1; ++i)
			{
				if (a[i + 1] > 2 * a[i])
				{
					++count;
				}
			}
			cout << count;
		}

		void task6904()
		{
			int const n = 2014;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int minDistance = INT_MAX;
			int index = -1;
			for (int i = 0; i < n - 1; ++i)
			{
				int currentDistance = abs(a[i + 1] - a[i]);
				if (currentDistance < minDistance)
				{
					minDistance = currentDistance;
					index = i;
				}
			}
			cout << a[index] << " " << a[index + 1];
		}

		void task6989()
		{
			int const n = 2014;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int amount = 0;
			for (int i = 0; i < n; ++i)
			{
				int sum = a[i] + a[n - (i + 1)];
				if (sum > 20)
				{
					++amount;
				}
			}
			cout << amount;
		}

		void task7319()
		{
			int const n = 6;
			int a[n];
			int amount = 0;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n - 1; ++i)
			{
				if (a[i] < a[i - 1] && a[i] < a[i + 1] && a[i] % 3 == 0)
				{
					++amount;
				}
			}
			if (a[0] < a[1] && a[0] % 3 == 0)
			{
				++amount;
			}
			if (a[n - 1] < a[n - 2] && a[n - 1] % 3 == 0)
			{
				++amount;
			}
			cout << amount;
		}

		void task13752()
		{
			int const n = 6;
			int a[n];
			int amount = 0;
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n; ++i)
			{
				if (a[i] > 100 && a[i] % 5 == 0)
				{
					++amount;
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 100 && a[i] % 5 == 0)
				{
					a[i] = amount;
				}
			}
			myArray::InOut::arrayOut(a, n);
		}

		void task15810()
		{
			int const n = 6;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int max = INT_MIN;
			for (int i = 1; i < n; ++i)
			{
				if (a[i] < 100 && a[i] > max)
				{
					max = a[i];
				}
			}
			int delta = 100 - max;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 100 && a[i] > max)
				{
					a[i] += delta;
				}
			}
			myArray::InOut::arrayOut(a, n);
		}

		void task15935()
		{
			int const n = 2018;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < min && a[i] % 2 == 0)
				{
					min = a[i];
				}
			}
			int delta = min - 2;
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 == 0)
				{
					a[i] -= delta;
				}
			}
			myArray::InOut::arrayOut(a, n);
		}

		void task16052()
		{
			int const n = 30;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < min && a[i] % 6 != 0)
				{
					min = a[i];
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 6 != 0)
				{
					a[i] = min;
				}
			}
			myArray::InOut::arrayOut(a, n);
		}

		void task16400()
		{

			int const n = 30;
			int a[n];
			int min = INT_MAX;
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
			}
			int delta = 100 + min;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 100 && a[i] < min)
				{
					a[i] -= delta;
					for (int i = 0; i < n; i++)
					{
						if (a[i] > min * 2)
						{
							a[i] -= min * 2;
						}
					}
					myArray::InOut::arrayOut(a, n);
				}
			}
		}
		void task()
		{

			int const n = 6;
			int a[n];
			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
			}
			int max = INT_MIN;
			for (int i = 1; i < n; ++i)
			{
				if (a[i] < 100 && a[i] > max&& a[i] % 2 == 0)
				{
					max = a[i];
				}
			}
			int delta = 100 - max;
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 100 && a[i] > max&& a[i] % 2 == 0)
				{
					a[i] += delta;
				}
			}
		}
		void task17343()
		{
			int const n = 30;
			int a[n];
			int minOfEven = INT_MAX;
			int minOfOdd = INT_MAX;
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < minOfEven && a[i] % 2 == 0)
				{
					minOfEven = a[i];
				}
				if (a[i] < minOfOdd && a[i] % 2 == 1)
				{
					minOfEven = a[i];
				}
			}
			sum = minOfEven + minOfOdd;
			for (int i = 0; i < n; i++)
			{
				if (a[i] > sum)
				{
					a[i] -= sum;
				}
			}
			myArray::InOut::arrayOut(a, n);
		}
	}
	// end of namespace ege254

	namespace ege255
	{
		void task9706()
		{
			int const n = 30;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 1000 && a[i] > 99 && a[i] % 7 == 0 && a[i] < min)
				{
					min = a[i];
				}
			}
			if (min == INT_MAX)
			{
				cout << "НЕ Найдено";
			}
			else
			{
				cout << min;
			}
		}

		void task3605()
		{
			int const n = 30;
			int a[n];
			int minIndex = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] < 0 && i < minIndex)
				{
					minIndex = i;
				}
			}
			if (minIndex == INT_MAX)
			{
				cout << "Не Найдено";
			}
			else
			{
				cout << minIndex;
			}
		}

		void task3606()
		{
			int const n = 30;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 0)
				{
					min = a[i];
				}
			}
			if (min == INT_MAX)
			{
				cout << "Не Найдено";
			}
			else
			{
				cout << min;
			}
		}

		void task4703()
		{
			int const n = 30;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 0 && a[i] % 2 != 0)
				{
					min = a[i];
				}
			}
				cout << min;
		}

		void task2902()
		{
			int const n = 30;
			int a[n];
			int min = INT_MAX;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < n; i++)
			{
				if (a[i] > 20 && i < min)
				{
					min = a[i];
				}
			}
			cout << min;
		}	
	}
	// end of namespace ege255
}
// end of namespace ege