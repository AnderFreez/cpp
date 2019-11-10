#include <iostream>
#include "myArray.h"
#include "integerNumbers.h"
#include <ctime>

using namespace std;

namespace myArray
{
	namespace array
	{
		namespace maxMinArray
		{
			int max(int* a, int size)
			{
				int result = INT_MIN;
				for (int i = 0; i < size; i++)
				{
					if (a[i] > result)
					{
						result = a[i];
					}
				}
				return result;
			}

			int min(int* a, int size)
			{
				int result = INT_MAX;
				for (int i = 0; i < size; i++)
				{
					if (a[i] < result)
					{
						result = a[i];
					}
				}
				return result;
			}
		}
		// input array
		void arrayIn(int* a, int size)
		{
			for (int i = 0; i < size; i++)
			{
				cin >> a[i];
			}
		}

		// print array
		void arrayOut(int* a, int size)
		{
			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}

		// rand array
		void arrayRand(int* a, int size)
		{
			srand(time(0));
			for (int i = 0; i < size; i++)
			{
				a[i] = rand() % 100;
			}
		}
	}
	// end of array namespace

	namespace tasks
	{
		/*
		��������� ������ �� ����������� �����, ��������� ������������ �������, ������� 3
		���� ������ ���, �� ���������� -1
		*/
		int task1(int* a, int size)
		{
			int amount = 0;
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 3 == 0 && a[i] > result)
				{
					result = a[i];
					++amount;
				}
			}
			if (amount == 0)
			{
				return -1;
			}
			else
			{
				return result;
			}
		}

		/*
		��������� ������ �� ����������� �����, ��������� ���������� ���������, ������� 3
		� �������������� �� 7
		*/
		int task2(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 3 == 0 && a[i] % 10 == 7)
				{
					++result;
				}
			}
			return result;
		}

		/*
		��������� ������, ��������� ����� ���������, ������� 3
		� �������������� �� 7
		*/
		int task3(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 3 == 0 && a[i] % 10 == 7)
				{
					result += a[i];
				}
			}
			return result;
		}

		/*
		��������� ������ � ���������� ������������ ������� ������� 7
		� �������������� �� 9.
		*/
		int task4(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 7 == 0 && a[i] % 10 == 9 && a[i] > result)
				{
					result = a[i];
				}
			}
			return result;
		}

		/*
		��������� ������ � ���������� ���������� ������ ��������� ������� 7
		� ������� 78.
		*/
		int task5(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 2 == 0 && 7 < a[i] && a[i] < 78)
				{
					result += 1;
				}
			}
			return result;
		}

		/*
		��������� ������ � ���������� ������������ ������ �������,
		���� ���������� ������ ��������� ������, ��� ���������� ��������,
		� ������������ �������� �������,
		���� ���������� �������� ������, ��� ���������� ������.
		���� ���������� ������ ����� ���������� ��������,
		�� ������� ����� ��������� �������.
		*/
		int task6(int* a, int size)
		{
#pragma region initialize variables
			int oddAmount = 0;
			int evenAmount = 0;
			int maxOdd = INT_MIN;
			int maxEven = INT_MIN;
			int sum = 0;
#pragma endregion

			for (int i = 0; i < size; i++)
			{
				sum += a[i];
				if (a[i] % 2 == 0)
				{
					++evenAmount;
					if (a[i] > maxEven)
					{
						maxEven = a[i];
					}
				}
				else
				{
					++oddAmount;
					if (a[i] > maxOdd)
					{
						maxOdd = a[i];
					}
				}
			}

#pragma region return values

			if (evenAmount == oddAmount)
			{
				return sum;
			}
			if (evenAmount > oddAmount)
			{
				return maxEven;
			}
			if (oddAmount > evenAmount)
			{
				return maxOdd;
			}
#pragma endregion
		}

		/*
		��������� ������ � ���������� ������� �������������� ���������,
		������� 7.
		*/
		double task7(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 7 == 0)
				{
					result += a[i];
				}
			}
			return double(result) / size;
		}

		/*
		��������� ������ � ���������� �������
		���������� ������������� ��������� � ��.
		*/
		int task8(int* a, int size)
		{
			int amountPositive = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] > 0)
				{
					++amountPositive;
				}
			}
			return double(amountPositive) / size * 100;
		}

		/*
		��������� ������ � ���������� ��������
		����� ����������� ������ � �������� ���������.
		*/
		int task9(int* a, int size)
		{
			int chet = 0;
			int nechet = 0;
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 2 == 0)
				{
					chet += 1;
				}
				if (not(a[i] % 2 == 0))
				{
					nechet += 1;
				}
			}
			if (chet > nechet)
			{
				result = chet - nechet;
			}
			else
			{
				result = nechet - chet;
			}
			return result;
		}

		/*
		��������� ������ � ���������� �������� ����� ������ ���������,
		������� 3 � ������������� ���������, ������� 7.
		*/
		int task10(int* a, int size)
		{
#pragma region intialization
			int sum = 0;
			int product = 1;
#pragma endregion

#pragma region algorithm
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 3 == 0)
				{
					sum += 1;
				}
				if (a[i] % 7 == 0)
				{
					product *= a[i];
				}
			}
#pragma endregion

			return sum - product;
		}

		// return second max
		int task11(int* a, int size)
		{
			int max1 = INT_MIN;
			int max2 = INT_MIN;

			for (int i = 0; i < size; i++)
			{
				if (a[i] <= max2)
				{
					continue;
				}
				if (a[i] > max2&& a[i] <= max1)
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

			return max2;
		}

		// second max from internet doen't work properly. It's a pity );
		int task12(int* a, int size)
		{
			int max1 = INT_MIN;
			int max2 = INT_MIN;

			for (int i = 0; i < size; i++)
			{
				if (a[i] > max1) max1 = a[i];
				if (a[i] > max2&& max2 != max1) max2 = a[i];
			}

			return max2;
		}

		// ��������� ������ � ���������� ������ ��������
		int task13(int* a, int size)
		{
			int max1 = INT_MIN;
			int max2 = INT_MIN;
			int max3 = INT_MIN;
			for (int i = 0; i < size; i++)
			{
				if (a[i] <= max3)
				{
					continue;
				}
				if (a[i] > max3&& a[i] <= max2)
				{
					max3 = a[i];
					continue;
				}
				if (a[i] > max2&& a[i] <= max1)
				{
					max3 = max2;
					max2 = a[i];
					continue;
				}
				if (a[i] > max1)
				{
					max3 = max2;
					max2 = max1;
					max1 = a[i];
					continue;
				}
			}
			return max3;
		}

		/* ��������� ������ ���������� ����� � ����������
		������� �������������� ���������� �����,
		����� ���� ������� ����� 10
		*/
		int task14(int* a, int size)
		{
			int ed = 0;
			int des = 0;
			int result = INT_MIN;
			for (int i = 0; i < size; i++)
			{
				if (des + ed == 10)
				{
					result += a[i];
				}

			}
			if (result == INT_MIN)
			{
				cout << "��� ����� ����� ���� ������� ����� 10";// ���������
			}
			else
			{
				return result;
			}
		}

		/*
		��������� ������ � ����������
		����� � ������������ ������ ����
		*/
		int task15(int* a, int size)
		{
			int maxSum = 0;
			int index = 0;
			for (int i = 0; i < size; i++)
			{
				int sum = integerNumbers::digits::sum::sumOfDigit(a[i]);
				if (sum > maxSum)
				{
					maxSum = sum;
					index = i;
				}
			}

			return a[index];
		}

		/*
		��������� ������ ���������� ����� � ����������
		����� �
		������������ ������������� ����
		*/
		int task16(int* a, int size)
		{
			int maxMult = 0;
			int index = -1;
			for (int i = 0; i < size; i++)
			{
				int sum = integerNumbers::digits::mult::multiplicationOfDigit(a[i]);
				if (sum > maxMult)
				{
					maxMult = sum;
					index = i;
				}
			}

			return a[index];
		}

		/*
		��������� ������ ���������� ����� � ����������
		����� ���� ���� ���� �������
		*/
		int task17(int* a, int size)
		{
			int sum = 0;
			for (int i = 0; i < size; i++)
			{
				sum += integerNumbers::digits::sum::sumOfDigit(a[i]);
			}
			return sum;
		}

		/*
		������� � ������������ ������ ����, ���� � ������� ������ ��������� ������, ��� ��������
		������� � ������������ ������������� ����, ���� � ������� �������� ��������� ������, ��� ������
		������� �������������� ���� ���� ���� ��������� �������, ���� � ������� ������ � �������� ��������� �������.
		*/
		int task18AmountOfEven(int* a, int size)
		{
			int even = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 2 == 0)
				{
					++even;
				}
			}
			return even;
		}

		int task18AmountOfOdd(int* a, int size)
		{
			int odd = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 2 == 1)
				{
					++odd;
				}
			}

			return odd;
		}

		double task18ArithmeticMean(int* a, int size)
		{
			int result = 0;
			for (int i = 0; i < size; i++)
			{
				result += a[i];
			}

			return double(result) / size;
		}

		double task18(int* a, int size)
		{
			if (task18AmountOfEven(a, size) == task18AmountOfOdd(a, size))
			{
				return task18ArithmeticMean(a, size);
			}

			if (task18AmountOfEven(a, size) > task18AmountOfOdd(a, size))
			{
				return task15(a, size);
			}

			if (task18AmountOfEven(a, size) < task18AmountOfOdd(a, size))
			{
				return task16(a, size);
			}
		}
	}
	// end of tasks namespace
}
// end of myArray namespace