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
		int f = 1;
		
		for (int i = n; i >= 2; --i)
		{
			f = 1 + i * f;
		}

		return f;
	}
}