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
				cout << "�� �������";
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
				cout << "�� �������";
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
				cout << "�� �������";
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
				cout << "�� �������";
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
				cout << "�� �������";
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
			int maxNegativeLength = INT_MIN;
			int currentNegativeLength = 0;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] < a[i + 1])
				{
					++currentNegativeLength;
				}
				else
				{
					if (currentNegativeLength > maxNegativeLength)
					{
						maxNegativeLength = currentNegativeLength;
						currentNegativeLength = 0;
					}
				}
				if (currentNegativeLength > maxNegativeLength)
				{
					maxNegativeLength = currentNegativeLength;
				}
			}
			cout << maxNegativeLength;
		}
	}
	// end of namespace ege254

	namespace ege255
	{

	}
	// end of namespace ege255
}
// end of namespace ege