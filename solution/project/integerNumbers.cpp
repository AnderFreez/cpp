#include "Limits.h"
#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"

using namespace std;

namespace integerNumbers
{
	namespace digits
	{
		namespace sum
		{
			int sumOfSquares(int n)
			{
				int sum = 0;
				for (int i = 0; i <= n; i++)
				{
					sum += i * i;
				}
				return sum;
			}

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
						sum += myMath::factorial::factorial(digit);
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

			int signSum(int n)
			{
				int sign = 1;
				int sum = 0;
				for (int i = 1; i <= n; i++)
				{
					sum += sign * i;
					sign *= -1;
				}
				return sum;
			}

			int sumOfEven(int n)
			{
				int sum = 0;
				for (int i = 1; i <= n; i++)
				{
					if (i % 2 == 0)
					{
						sum += i;
					}
				}
				return sum;
			}

			int sumOfOdd(int n)
			{
				int sum = 0;
				for (int i = 1; i <= n; i++)
				{
					if (i % 2 != 0)
					{
						sum += i;
					}
				}
				return sum;
			}

			int sum(int n)
			{
				int sum = 0;
				for (int i = 1; i <= n; i++)
				{
					sum += i;
				}
				return sum;
			}
		}
		// end of sum namespace

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
		// end of mult namespace

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
		}
		// end of amount namespace

		namespace inverted
		{
			int smartInverted(int number)
			{
				int result = 0;
				while (number != 0)
				{
					int digit = number % 10;
					result = 10 * result + digit;
					number /= 10;
				}
				return result;
			}

			int inverted(int number)
			{
				int n = integerNumbers::digits::amount::amountOfDigit(number) - 1;
				int result = 0;
				while (number != 0)
				{
					int digit = number % 10;
					result += digit * myMath::degree::degree(10, n);
					number /= 10;
					--n;
				}
				return result;
			}
		}
		// end of inverted namespace

		namespace tasks
		{
			int task1(int number)
			{
				int amount = amount::amountOfDigit(number);
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

				return 0;
			}

			int task2(int number)
			{
				int amount = amount::amountOfDigit(number);
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

				return 0;
			}
		}
		// end of tasks namespace
	}
	
	
	namespace divisibility
	{
		bool isDivider(int a, int b, int d)
		{
			return (a % d == 0) && (b % d == 0);
		}

		int stupidGCD(int a, int b)
		{
			int d = 1;
			for (int i = 2; i <= a; i++)
			{
				if (isDivider(a, b, i))
				{
					d = i; 
				}
			}
			return d;
		}

		int euclid(int a, int b)
		{
			a = myMath::extremum::max(a, b);
			b = myMath::extremum::min(a, b);

			while (b != 0)
			{
				int temp = a;
				a = b;
				b = temp % b;
			}

			return a;
		}

		double arithmeticMeanOfDigit(int number)
		{
			double sum = digits::sum::sumOfDigit(number);
			return  sum / digits::amount::amountOfDigit(number);
		}
	}
}