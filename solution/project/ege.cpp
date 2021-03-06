#include "ege.h"
#include "myArray.h"
#include <iostream>

using namespace std;

namespace ege
{
	namespace ege24
	{
		namespace ege241
		{
			void task8672()
			{
				int number = 0;
				int mult = 1;
				int amount = 0;
				for (int i = 0; i < 4; i++)
				{
					cin >> number;
					if (number > 0)
					{
						++amount;
						mult *= number;
					}
				}
				if (amount == 0)
				{
					cout << "NO";
				}
				else
				{
					cout << amount << " " << mult;
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
				}
				cout << sum << " " << max;
			}
		}
		// end of namespace ege241

		namespace ege242
		{
			void task7935()
			{
				double sum = 0;
				double a;
				cin >> a;
				int k = 0;
				while (sum < a)
				{
					++k;
					sum += 1 / k;
				}
				cout << k;
			}

			void task9208()
			{
				double a;
				cin >> a;
				double k = 0;
				double sum = 0;
				while (sum < a)
				{
					++k;
					sum += 1 / k;
				}
				cout << k;
			}

			void task16399()
			{
				int a = 0;
				cin >> a;
				int after = 1;
				int n = 0;
				while (after < a)
				{
					++n;
					after *= n;
				}
				int before = after / n;
				if (a - before <= after - a)
				{
					cout << before;
				}
				else
				{
					cout << after;
				}
			}
		}
		// end of namespace ege242

		namespace ege243
		{
			void task4568()
			{
				double x = 0;
				cin >> x;
				if (x >= -3 && x <= 1)
				{
					cout << "B";
					return;
				}
				if (x >= 5 && x <= 9)
				{
					cout << "D";
					return;
				}
				cout << "None";
			}
		}
		// end of namespace ege243

		namespace ege244
		{
			void task8112()
			{
				int x;
				cin >> x;
				int max = INT_MIN;
				int amount = 0;
				while (x != 0)
				{
					int digit = x % 10;
					if (digit % 3 == 0 && digit > max)
					{
						max = digit;
						++amount;
					}
					x /= 10;
				}
				if (amount == 0)
				{
					cout << "NO";
				}
				else
				{
					cout << max;
				}
			}

			void task9375()
			{
				int x;
				cin >> x;
				int sum = 0;
				while (x != 0)
				{
					int digit = x % 10;
					if (digit < 7)
					{
						sum += digit;
					}
					x /= 10;
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

			void task5372()
			{
				int x;
				cin >> x;
				int amount = 0;
				while (x != 0)
				{
					++amount;
					x /= 10;
				}
				cout << amount;
			}

			void task5468()
			{
				int x;
				cin >> x;
				int mult = 1;
				while (x != 0)
				{
					int digit = x % 10;
					mult *= digit;
					x /= 10;
				}
				cout << mult;
			}

			void task5500()
			{
				int x;
				cin >> x;
				int max = INT_MIN;
				while (x != 0)
				{
					int digit = x % 10;
					if (digit > max)
					{
						max = digit;
					}
					x /= 10;
				}
				cout << max;
			}
		}
		// end of namespace ege244
	}
	// end of namespace ege24

	namespace ege25
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
					if (a[i] == 4 || a[i] == 5)
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
				for (int i = 0; i < n - 2; ++i)
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
					cout << "�� �������";
				}
				else
				{
					cout << min;
				}
			}

			void task3602()
			{
				int const n = 30;
				int a[n];
				int minIndex = INT_MAX;
				int count = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> a[i];
				}
				for (int i = 0; i < n; i++)
				{
					if (a[i] < 0 && i < minIndex)
					{
						minIndex = i;
						++count;
					}
				}
				if (count == 0)
				{
					cout << "�� �������";
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
				int count = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> a[i];
				}
				for (int i = 0; i < n; i++)
				{
					if (a[i] > 0)
					{
						min = a[i];
						++count;
					}
				}
				if (count == 0)
				{
					cout << "�� �������";
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
					if (a[i] > 20 && a[i] < min)
					{
						min = a[i];
					}
				}
				cout << min;
			}
		}
		// end of namespace ege255
	}
	// end of namespace ege25


	namespace ege27
	{
		namespace ege274
		{
			void task11363()
			{
				int n = 0;
				cin >> n;
				int sumOfMax = 0;
				int minSubtructNotDividedBy3 = INT_MAX;
				int amount = 0;
				int a = 0;
				int b = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> a >> b;
					if (a > b)
					{
						sumOfMax += a;
					}
					else
					{
						sumOfMax += b;
					}
					if (abs(a - b) < minSubtructNotDividedBy3 && abs(a - b) % 3 != 0)
					{
						minSubtructNotDividedBy3 = abs(a - b);
						++amount;
					}
				}
				if (sumOfMax % 3 != 0)
				{
					cout << sumOfMax;
					return;
				}
				if (amount == 0)
				{
					cout << 0;
					return;
				}
				cout << sumOfMax - minSubtructNotDividedBy3;
			}

			void task13476()
			{
				int n = 0;
				cin >> n;
				int indexOfLastMin = -1;
				int lastMin = INT_MAX;
				int sumOfDigits[28];
				for (int i = 0; i < 28; ++i)
				{
					sumOfDigits[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int sum = 0;
					while (number != 0)
					{
						sum += number % 10;
						number /= 10;
					}
					++sumOfDigits[sum];
				}
				for (int i = 0; i > 28; ++i)
				{
					if (sumOfDigits[i] <= lastMin)
					{
						lastMin = sumOfDigits[i];
						indexOfLastMin = i;
					}
				}
				cout << indexOfLastMin;
			}

			void task13530()
			{
				int n;
				cin >> n;
				int digits[10];
				int maxFrequencyOfDigit = INT_MIN;
				int lastMin = INT_MAX;
				int indexOfLastMin = -1;
				for (int i = 0; i < 10; i++)
				{
					digits[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number;
					cin >> number;
					while (number != 0)
					{
						int digit = number % 10;
						number /= 10;
						++digits[digit];
					}
				}
				for (int i = 0; i < 10; i++)
				{
					if (digits[i] >= maxFrequencyOfDigit)
					{
						maxFrequencyOfDigit = digits[i];
						indexOfLastMin = i;
					}
				}
				cout << indexOfLastMin;
			}

			void task13611()
			{
				int n;
				cin >> n;
				int lengths[9];
				int maxOfLengths = INT_MIN;
				int indexOfLastMin = -1;
				for (int i = 0; i < 9; i++)
				{
					lengths[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number;
					cin >> number;
					int amount = 0;
					while (number != 0)
					{
						++amount;
						number /= 10;
					}
					++lengths[amount];
				}
				for (int i = 0; i < 10; i++)
				{
					if (lengths[i] >= maxOfLengths)
					{
						maxOfLengths = lengths[i];
						indexOfLastMin = i;
					}
				}
			}

			void task13638()
			{
				int n;
				cin >> n;
				int lengths[9];
				int minOfLengths = INT_MIN;
				int indexOfFirstMin = -1;
				for (int i = 0; i < 9; i++)
				{
					lengths[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number;
					cin >> number;
					int amount = 0;
					while (number != 0)
					{
						++amount;
						number /= 10;
					}
					++lengths[amount];
				}
				for (int i = 0; i < 10; i++)
				{
					if (lengths[i] <= minOfLengths)
					{
						minOfLengths = lengths[i];
						indexOfFirstMin = i;
					}
				}
			}

			void task14286()
			{
				int n;
				cin >> n;
				int lengths[9];
				int minOfLengths = INT_MAX;
				int indexOfFirstMin = -1;
				for (int i = 0; i < 9; i++)
				{
					lengths[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number;
					cin >> number;
					int amount = 0;
					while (number != 0)
					{
						++amount;
						number /= 10;
					}
					++lengths[amount];
				}
				for (int i = 0; i < 10; i++)
				{
					if (lengths[i] <= minOfLengths && lengths[i] > 0)
					{
						minOfLengths = lengths[i];
						indexOfFirstMin = i;
					}
				}
				cout << indexOfFirstMin;
			}

			void tas2k11363()
			{
				int n = 0;
				cin >> n;
				int sumOfMax = 0;
				int minSubtructNotDividedBy3 = INT_MAX;
				int amount = 0;
				int a = 0;
				int b = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> a >> b;
					if (a > b)
					{
						sumOfMax += a;
					}
					else
					{
						sumOfMax += b;
					}
					if (abs(a - b) < minSubtructNotDividedBy3 && abs(a - b) % 3 != 0)
					{
						minSubtructNotDividedBy3 = abs(a - b);
						++amount;
					}
				}
				if (sumOfMax % 3 != 0)
				{
					cout << sumOfMax;
					return;
				}
				if (amount == 0)
				{
					cout << 0;
					return;
				}
				cout << sumOfMax - minSubtructNotDividedBy3;
			}

			void tas2k13476()
			{
				int n = 0;
				cin >> n;
				int indexOfLastMin = -1;
				int lastMin = INT_MAX;
				int sumOfDigits[28];
				for (int i = 0; i < 28; ++i)
				{
					sumOfDigits[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int sum = 0;
					while (number != 0)
					{
						sum += number % 10;
						number /= 10;
					}
					++sumOfDigits[sum];
				}
				for (int i = 0; i < 28; ++i)
				{
					if (sumOfDigits[i] <= lastMin && sumOfDigits[i] > 0)
					{
						lastMin = sumOfDigits[i];
						indexOfLastMin = i;
					}
				}
				cout << indexOfLastMin;
			}

			void task13557()
			{
				int n = 0;
				cin >> n;
				int s = 0;
				int amount = 0;
				int minNotDividedBy6 = INT_MAX;
				int a = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> a;
					s += a;
					if (a % 6 != 0 && a < minNotDividedBy6)
					{
						minNotDividedBy6 = a;
						++amount;
					}
				}

				if (s % 6 != 0)
				{
					cout << n << " " << s;
					return;
				}
				if (amount != 0)
				{
					cout << n - 1 << " " << s - minNotDividedBy6;
					return;
				}
				cout << 0 << " " << 0;
			}

			void task13754()
			{
				int n = 0;
				cin >> n;
				int n2 = 0;
				int n13 = 0;
				int n26 = 0;
				int n0 = 0;
				int a = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> a;
					if (a % 2 == 0 && a % 13 != 0)
					{
						++n2;
					}
					if (a % 2 != 0 && a % 13 == 0)
					{
						++n13;
					}
					if (a % 2 == 0 && a % 13 == 0)
					{
						++n26;
					}
					if (a % 2 != 0 && a % 13 != 0)
					{
						++n0;
					}
				}
				cout << n2 * n13 + n2 * n26 + n0 * n26 + n26 * (n26 - 1) / 2;
			}
			
			void task13423()
			{
				int n = 0;
				cin >> n;
				int indexOfFirstMax = -1;
				int firstMax = INT_MIN;
				int sumOfDigits[28];
				for (int i = 0; i < 28; ++i)
				{
					sumOfDigits[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int sum = 0;
					while (number != 0)
					{
						sum += number % 10;
						number /= 10;
					}
					++sumOfDigits[sum];
				}
				for (int i = 0; i < 28; ++i)
				{
					if (sumOfDigits[i] > firstMax)
					{
						firstMax = sumOfDigits[i];
						indexOfFirstMax = i;
					}
				}
				cout << indexOfFirstMax;
			}

			void task13503()
			{
				int n;
				cin >> n;
				int digits[10];
				int maxFrequencyOfDigit = INT_MIN;
				for (int i = 0; i < 10; i++)
				{
					digits[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number = 0;
					cin >> number;
					while (number != 0)
					{
						int digit = number % 10;
						++digits[digit];
						number /= 10;
					}
				}
				for (int i = 0; i < 10; i++)
				{
					if (digits[i] > maxFrequencyOfDigit)
					{
						maxFrequencyOfDigit = digits[i];
					}
				}
				for (int i = 9; i >= 0; --i)
				{
					if (digits[i] == maxFrequencyOfDigit)
					{
						cout << i << " ";
					}
				}
			}

			void task14242()
			{
				int n = 0;
				cin >> n;
				int indexOfFirstMax = -1;
				int lastMax = INT_MIN;
				int sumOfDigits[28];
				for (int i = 0; i < 10; ++i)
				{
					sumOfDigits[i] = 0;
				}
				int number = 0;
				for (int i = 0; i < n; ++i)
				{
					cin >> number;
					int sum = 0;
					while (number != 0)
					{
						int digit = number % 10;
						int digit2 = number % 100;
						sum += digit + digit2;
						number /= 10;
					}
					++sumOfDigits[sum];
				}
				for (int i = 0; i < 10; ++i)
				{
					if (sumOfDigits[i] > lastMax)
					{
						lastMax = sumOfDigits[i];
						indexOfFirstMax = i;
					}
				}
				cout << indexOfFirstMax;
			}

			void task18729()
			{
				int n = 0;
				cin >> n;
				int maxRemainder[117];
				for (int i = 1; i < 117; i++)
				{
					maxRemainder[i] = 0;
				}
				int max01 = 0;
				int max02 = 0;
				for (int i = 0; i < n; i++)
				{
					int number = 0;
					cin >> number;
					int remainder = number % 117;
					if (number > maxRemainder[remainder])
					{
						maxRemainder[remainder] = number;
					}
					if (remainder == 0)
					{
						if (number <= max02)
						{

						}
						if (number > max02 && number <= max01)
						{
							max02 = number;
						}
						if (number > max01)
						{
							max02 = max01;
							max01 = number;
						}
					}
				}
				int maxSum = 0;
				int n1 = 0;
				int n2 = 0;
				for (int i = 1; i < 59; i++)
				{
					if (maxRemainder[i] != 0 && maxRemainder[117 - i] != 0)
					{
						int sum = maxRemainder[i] + maxRemainder[117 - i];
						if (sum > maxSum)
						{
							maxSum = sum;
							n1 = maxRemainder[i];
							n2 = maxRemainder[117 - i];
						}
					}
				}
				if ((max01 != 0 && max02 != 0) || (maxSum != 0))
				{
					if (max01 + max02 > maxSum)
					{
						cout << max01 << " " << max02;
					}
					else
					{
						cout << n1 << " " << n2;
					}
				}
				else
				{
					cout << "NO";
				}
			}

			void task14713()
			{
				int n = 0;
				cin >> n;
				int maxRemainber[7];
				for (int i = 0; i < 7; i++)
				{
					maxRemainber[i] = 0;
				}
				for (int i = 0; i < n; i++)
				{
					int number = 0;
					cin >> number;
					int remainber = number % 7;
					++maxRemainber[remainber];
				}
				int result = 0;
				for (int i = 1; i <= 6; ++i)
				{
					result += maxRemainber[i] * maxRemainber[7 - i];
				}
				result += maxRemainber[0] * (maxRemainber[0] - 1) / 2;
				cout << result;
			}

			void task18806()
			{
				int n = 0;
				cin >> n;
				int maxRemainder[120];
				for (int i = 1; i < 120; i++)
				{
					maxRemainder[i] = 0;
				}
				int max01 = 0;
				int max02 = 0;
				for (int i = 0; i < n; i++)
				{
					int number = 0;
					cin >> number;
					int remainder = number % 120;
					if (number > maxRemainder[remainder])
					{
						maxRemainder[remainder] = number;
					}
					if (remainder == 0)
					{
						if (number <= max02)
						{

						}
						if (number > max02&& number <= max01)
						{
							max02 = number;
						}
						if (number > max01)
						{
							max02 = max01;
							max01 = number;
						}
					}
				}
				int maxSum = 0;
				int n1 = 0;
				int n2 = 0;
				for (int i = 1; i < 60; i++)
				{
					if (maxRemainder[i] != 0 && maxRemainder[120 - i] != 0)
					{
						int sum = maxRemainder[i] + maxRemainder[120 - i];
						if (sum > maxSum)
						{
							maxSum = sum;
							n1 = maxRemainder[i];
							n2 = maxRemainder[120 - i];
						}
					}
				}
				if ((max01 != 0 && max02 != 0) || (maxSum != 0))
				{
					if (max01 + max02 > maxSum)
					{
						cout << max01 << " " << max02;
					}
					else
					{
						cout << n1 << " " << n2;
					}
				}
				else
				{
					cout << "NO";
				}
			}

			void task9708()
			{
				int n = 0;
				cin >> n;
				int a = 0;
				int max141 = 0;
				int max142 = 0;
				int max2 = 0;
				int max0 = 0;
				int max7 = 0;
				int maxmax = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> a;
					if (a % 2 == 0 && a % 7 == 0)
					{
						if (a <= max142)
						{

						}
						if (a > max142&& max141 >= a)
						{
							max142 = a;
						}
						if (a > max141)
						{
							max142 = max141;
							max141 = a;
						}
					}
					if (a % 2 == 0 && a % 7 != 0 && a > max2)
					{
						max2 = a;
					}
					if (a % 2 != 0 && a % 7 == 0 && a > max7)
					{
						max7 = a;
					}
					if (a % 2 != 0 && a % 7 != 0 && a > max0)
					{
						max0 = a;
					}
				}
				if (max2 * max7 > maxmax)
				{
					maxmax = max2 * max7;
				}
				if (max141 * max7 > maxmax)
				{
					maxmax = max141 * max7;
				}
				if (max141 * max2 > maxmax)
				{
					maxmax = max141 * max2;
				}
				if (max141 * max0 > maxmax)
				{
					maxmax = max141 * max0;
				}
				if (max141 * max142 > maxmax)
				{
					maxmax = max141 * max142;
				}
				cout << maxmax;
			}

			void task6971()
			{
				int n = 0;
				cin >> n;
				int r = 0;
				int max51 = 0;
				int max52 = 0;
				int max21 = 0;
				int max22 = 0;
				int max01 = 0;
				int max02 = 0;
				for (int i = 0; i < n; i++)
				{
					if (r <= max52)
					{

					}
					if (r > max52&& max51 >= r)
					{
						max52 = r;
					}
					if (r > max51)
					{
						max52 = max51;
						max51 = r;
					}
					if (r <= max22)
					{

					}
					if (r > max22&& max21 >= r)
					{
						max22 = r;
					}
					if (r > max21)
					{
						max22 = max21;
						max21 = r;
					}
					if (r <= max02)
					{

					}
					if (r > max02&& max01 >= r)
					{
						max02 = r;
					}
					if (r > max01)
					{
						max02 = max01;
						max01 = r;
					}
				}
				cout << 0;
			}

			void task6202()
			{
				setlocale(LC_ALL, "russian");
				int number;
				int znach;
				int znach2 = 1;
				int amount = 0;
				int max = INT_MIN;
				int max0 = INT_MIN;
				int max7 = INT_MIN;
				cin >> number;
				while (number != 0)
				{
					if (number % 7 == 0 && number % 49 != 0 && number > max7)
					{
						max7 = number;
					}
					if (number % 7 != 0 && number % 49 != 0 && number > max)
					{
						max0 = number;
					}
					cin >> number;
					++amount;
				}
				cin >> znach;
				znach2 = max7 * max0;
				if (znach2 % 7 == 0 && znach2 % 49 != 0)
				{
					if (znach == znach2)
					{
						cout << "������� �����:" << amount << endl << "����������� ��������:" << znach << endl << "����������� ��������:" << znach2 << endl << "�������� �������";
					}
					else
					{
						cout << "������� �����:" << amount << endl << "����������� ��������:" << znach << endl << "����������� ��������:" << znach2 << endl << "�������� �� �������";
					}
				}
			}

			void task13373()
			{
				setlocale(LC_ALL, "russian");
				int n;
				cin >> n;
				int r;
				int max262 = 0;
				int max13 = 0;
				int max2 = 0;
				int max0 = 0;
				int max261 = 0;
				int maxmax = 0;
				int znach = 0;
				int number = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> number;
					if (number % 2 == 0 && number % 13 != 0 && number > max2)
					{
						max2 = number;
					}
					if (number % 2 != 0 && number % 13 == 0 && number > max13)
					{
						max13 = number;
					}
					if (number % 2 != 0 && number % 13 != 0 && number > max0)
					{
						max0 = number;
					}
					if (number % 2 == 0 && number % 13 == 0)
					{
						if (number <= max262)
						{

						}
						if (number > max262&& max261 >= number)
						{
							max262 = number;
						}
						if (number > max261)
						{
							max262 = max261;
							max261 = number;
						}
					}
				}
				cin >> znach;
				if (max2 * max13 > maxmax)
				{
					maxmax = max2 * max13;
				}
				if (max261 * max13 > maxmax)
				{
					maxmax = max261 * max13;
				}
				if (max261 * max2 > maxmax)
				{
					maxmax = max261 * max2;
				}
				if (max261 * max0 > maxmax)
				{
					maxmax = max261 * max0;
				}
				if (max261 * max262 > maxmax)
				{
					maxmax = max261 * max262;
				}
				if (maxmax == znach)
				{
					cout << "����������� ����������� ��������:" << maxmax << endl << "�������� �������";
				}
				else
				{
					cout << "����������� ����������� ��������:" << maxmax << endl << "�������� �� �������";
				}
			}

			void task18096()
			{
				int n;
				cin >> n;
				int n31 = 0;
				int n2 = 0;
				int n62 = 0;
				int n0 = 0;
				int number = 0;
				for (int i = 0; i < n; i++)
				{
					cin >> number;
					if (number % 2 == 0 && number % 31 == 0)
					{
						++n62;
					}
					if (number % 2 != 0 && number % 31 == 0)
					{
						++n31;
					}
					if (number % 2 == 0 && number % 31 != 0)
					{
						++n2;
					}
					if (number % 2 != 0 && number % 31 != 0)
					{
						++n0;
					}
				}
				cout << n62 * n2 + n62 * n31 + n62 * n0 + (n62 * (n62 - 1) / 2) + n31 * n2;
			}
		}
		// end of namespace ege274
	}
	// end of namespace ege27
}
// end of namespace ege