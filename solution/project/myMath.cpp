#include "myMath.h"

namespace myMath
{
	namespace degree
	{

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