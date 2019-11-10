#pragma once

namespace myMath
{
	namespace inverted
	{
		int smartInverted(int number);

		int inverted(int number);
	}
	namespace degree
	{
		int degree(int a, int b);
	}
	// end of degree namespace

	namespace extremum
	{
		/*
		принимает два целых числа, возвращает максимальное из них
		*/
		int max(int a, int b);

		/*
		принимает два целых числа, возвращает минимальное из них
		*/
		int min(int a, int b);
	}
	// end of extremum namespace
}
// end of myMath namespace 