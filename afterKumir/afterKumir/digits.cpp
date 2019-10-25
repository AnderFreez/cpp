#include "myMath.h"
#include "arithmetic.h"

namespace myMath
{
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
				sum += factorialSum(digit);
			}
			number /= 10;
		}

		return sum;
	}

	int task1(int number)
	{
		int amount = arithmetic::amountOfDigit(number);
		int sumFac = sumFactorialOfEvenDigits(number);
		int sumSqua = sumSquaresOfOddDigits(number);

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
		int amount = arithmetic::amountOfDigit(number);
		int sum = arithmetic::sumOfDigit(number);

		if (amount == sum)
		{
			return signSumOfDigits(number);
		}

		if (amount > sum)
		{
			return sumOfOddDigits(number);
		}

		if (amount < sum)
		{
			return arithmetic::multiplicationOfDigit(number);
		}
	}
}