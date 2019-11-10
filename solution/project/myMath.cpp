#include "myMath.h"
#include "integerNumbers.h"

namespace myMath
{
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
				result += digit * degree::degree(10, n);
				number /= 10;
				--n;
			}
			return result;
	}
}
// end of myMath namespace 