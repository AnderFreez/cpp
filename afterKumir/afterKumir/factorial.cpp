#include "myMath.h"
#include <cassert>

namespace myMath
{
	int myMath::factorial(int n)
	{
		assert(n >= 1);
		int f = 1;
		for (int i = 2; i <= n; ++i)
		{
			f *= i;
		}
		return f;
	}

	int factorialSum(int n)
	{
		int s = 0;
		for (int i = 1; i <= n; i++)
		{
			s += factorial(i);
		}
		return s;
	}

	int smartFactorialSum(int n)
	{
		int a = 1;
		int sum = 0;
		for (int i = 0; i <= n; i++)
		{
			sum += a * i;
		}
		return sum;
	}
}