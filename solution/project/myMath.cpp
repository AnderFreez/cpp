#include "myMath.h"
#include "integerNumbers.h"

namespace myMath
{


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
	// end of factorial namespace

	namespace degree
	{
		int degree(int a, int b)
		{
			int n = 1;
			for (int i = 0; i < b; ++i)
			{
				n *= a;
			}
			return n;
		}
	}
	// end of degree namespace

	namespace extremum
	{
		/*
		принимает два целых числа, возвращает максимальное из них
		*/
		int max(int a, int b)
		{
			if (a > b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}

		/*
		принимает два целых числа, возвращает минимальное из них
		*/
		int min(int a, int b)
		{
			if (a < b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
	}
	// end of extremum namespace
}
// end of myMath namespace 