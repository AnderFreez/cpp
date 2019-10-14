#include "myMath.h"

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
		for (int  i = 1; i <= n; i++)
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

	}
}