#pragma once

namespace myMath
{
	namespace factorial
	{
		int smartFactorialSum(int n);

		/*
		��������� ����������� ����� n, ���������� n! = 1 * 2 * 3 * .... * (n - 1) * n
		��������: ��������� 5, ���������� 1 * 2 * 3 * 4 * 5 = 120
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
		��������� ��� ����� �����, ���������� ������������ �� ���
		*/
		int max(int a, int b);

		/*
		��������� ��� ����� �����, ���������� ����������� �� ���
		*/
		int min(int a, int b);
	}
	// end of extremum namespace
}
// end of myMath namespace 