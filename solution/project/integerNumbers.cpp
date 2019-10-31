#include "Limits.h"
#include <iostream>

using namespace std;
namespace integerNumbers
{
	namespace digits
	{
		namespace sum
		{
			// +
			int sumOfDigit(int number)
			{
				int sum = 0;
				while (number != 0)
				{
					sum += number % 10;
					number /= 10;
				}
				return sum;
			}

			int sumDigitSquares(int number)
			{
				int sum = 0;
				while (number != 0)
				{
					int digit = number % 10;
					if (digit % 2 == 1)
					{
						sum += digit * digit;
					}
				}
				return sum;
			}

			int sumSquaresOfOddDigits(int number)
			{
				int sum = 0;
				while (number != 0)
				{
					int digit = number / 10;
					if (digit % 2 == 1)
					{
						sum += digit * digit;
					}
					number /= 10;
				}
				return sum;
			}

			int sumFactorialOfEvenDigits(int number)
			{
				int sum = 0;

				while (number != 0)
				{
					int digit = number % 10;
					if (digit % 2 == 0)
					{
						sum += factorial::factorialSum(digit);
					}
					number /= 10;
				}

				return sum;
			}

			int sumOfOddDigits(int number)
			{
				int sum = 0;
				while (number != 0)
				{
					int digit = number % 10;
					if (digit % 2 == 1)
					{
						sum += digit;
					}
					number /= 10;
				}
				return sum;
			}

			int signSumOfDigits(int number)
			{
				int sum = 0;
				int sign = 1;
				while (number != 0)
				{
					int digit = number % 10;
					sum += sign * digit;
					sign *= -1;
					number /= 10;
				}
				return sum;
			}
		}

		namespace mult
		{
			// *
			int multiplicationOfDigit(int number)
			{
				int mult = 1;
				while (number != 0)
				{
					mult *= number % 10;
					number /= 10;
				}
				return mult;
			}
		}

		namespace amount
		{
			int amountOfDigit(int number)
			{
				int amount = 0;
				while (number != 0)
				{
					++amount;
					number /= 10;
				}
				return amount;
			}

			int task1(int number)
			{
				int amount = amountOfDigit(number);
				int sumFac = digits::sum::sumFactorialOfEvenDigits(number);
				int sumSqua = digits::sum::sumSquaresOfOddDigits(number);

				if (amount % 2 == 0)
				{
					return sumSqua;
				}

				if (amount % 2 == 1)
				{
					return sumFac;
				}
			}

			int task2(int number)
			{
				int amount = amountOfDigit(number);
				int sum = digits::sum::sumOfDigit(number);

				if (amount == sum)
				{
					return digits::sum::signSumOfDigits(number);
				}

				if (amount > sum)
				{
					return digits::sum::sumOfOddDigits(number);
				}

				if (amount < sum)
				{
					return digits::mult::multiplicationOfDigit(number);
				}
			}
		}
	}

	namespace factorial
	{
		int factorialSum(int n)
		{
			int s = 0;
			for (int i = 1; i <= n; i++)
			{
				s += factorial(i);
			}
			return s;
		}

		int factorial(int n)
		{
			int f = 1;
			for (int i = 2; i <= n; ++i)
			{
				f *= i;
			}
			return f;
		}
	}

	namespace divisibility
	{
		int stupidGCD(int a, int b)
		{
			int m = 0;
			if (a > b)
			{
				m = a;
			}
			else
			{
				m = b;
			}
			int d = 1;
			for (int i = 0; i <= m; i++)
			{
				if (m % i == 0)
				{
					d = i; 
				}
			}
			return d;
		}
	}
}