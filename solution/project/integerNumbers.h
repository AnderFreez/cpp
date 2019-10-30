#pragma once

namespace integerNumbers
{
	namespace digits
	{
		namespace sum
		{
			int sumOfDigit(int number);

			int sumDigitSquares(int number);

			int sumSquaresOfOddDigits(int number);

			int sumFactorialOfEvenDigits(int number);

			int sumOfOddDigits(int number);

			int signSumOfDigits(int number);
		}
		// end of sum namespace

		namespace mult
		{
			int multiplicationOfDigit(int number);
		}

		namespace amount
		{
			int amountOfDigit(int number);

			int task1(int number);

			int task2(int number);
		}
		// end of mult namespace
	}
	// end of digits namespace

	namespace factorial
	{
		/*
		принимает натуральное число n, возвращает n! = 1 * 2 * 3 * .... * (n - 1) * n
		например: принимает 5, возвращает 1 * 2 * 3 * 4 * 5 = 120
		*/
		int factorial(int n);

		int factorialSum(int n);
	}
	// end of factorial namespace

	namespace divisibility
	{
		/*
		глупый поиск НОДа
		принимает два натуральных числа, возвращает их наибольший общий делитель
		например: принимает 72 и 81, возвращает 9
		*/
		int stupidGCD(int a, int b);
	}
	// end of divisibility namespace
}
// end of integerNumbers namespace