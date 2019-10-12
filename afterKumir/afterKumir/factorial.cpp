#include "myMath.h"
namespace myMath
{
	int myMath::factorial(int n)
	{
		int f = 1;
		for (int i = 2; i <= n; ++i)
		{
			f *= i;
		}
		return f;
	}
	int factorial2(int n)
	{
		int s = 0;
		for (int i = 0; i <= n; i++)
		{
			s += factorial(i);
		}
		return s;
	}
}