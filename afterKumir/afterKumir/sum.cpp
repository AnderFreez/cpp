#include "myMath.h"
#include "arithmetic.h"

namespace myMath
{
	int sum(int n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
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

	int sumOfSquares(int n)
	{
		int sum = 0;
		for (int i = 0; i <= n; i++)
		{
			sum += i * i;
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

	int CHTOTOwithDigit(int number)
	{
		int result = 1;
		int mult = 1;
		int sum = 0;
		int amount = arithmetic::amountOfDigit(number);
		int sumOfDigit = arithmetic::sumOfDigit(number);
		while (number != 0)
		{
			int digit = number % 10;
			if (amount < sumOfDigit)
			{
				result = arithmetic::multiplicationOfDigit(number);
				
			}
			if (amount == sumOfDigit)
			{
				result = signSumOfDigits(number);
				
			}
			if (amount > sumOfDigit)
			{
				if (digit % 2 == 0)
				{
					result = arithmetic::sumOfDigit(number);
					
				}
				
			}
			number /= 10;
		}
		return result;
	}
}