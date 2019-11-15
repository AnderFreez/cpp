#pragma once

namespace myMath
{
	namespace factorial
	{
		int smartFactorialSum(int n);

		/*
		принимает натуральное число n, возвращает n! = 1 * 2 * 3 * .... * (n - 1) * n
		например: принимает 5, возвращает 1 * 2 * 3 * 4 * 5 = 120
		*/
		int factorial(int n);

		int factorialSum(int n);
	}
	// end of factorial namespace
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