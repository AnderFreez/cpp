#pragma once

namespace integerNumbers
{
	namespace digits
	{
		namespace sum
		{
			/*
			принимает число возвращает сумму цифр числа
			например: 2222 = 2 + 2 + 2 + 2 = 8
			*/
			int sumOfDigit(int number);

			/*
			принимает число возвращает сумму квадратов цифр
			например: 2222 = 2^2 + 2^2 + 2^2 + 2^2 = 16
			*/
			int sumDigitSquares(int number);

			/*
			принимает число возвращает сумму квадратов нечётных цифр
			например: 2309 = 3^2 + 9^2 = 90
			*/
			int sumSquaresOfOddDigits(int number);

			/*
			принимает число возвращает сумму факториалов чётных цифр
			например: 2357 = 2! = 2 * 1 = 2
			*/
			int sumFactorialOfEvenDigits(int number);

			/*
			принимает число возвращает сумму нечётных цифр
			например: 2389 = 3 + 9 = 12
			*/
			int sumOfOddDigits(int number);

			/*
			принимает число возвращает знакочередующуюся сумму цифр
			например: 3156 = 6 - 5 + 1 - 3 = -1
			*/
			int signSumOfDigits(int number);
		}
		// end of sum namespace

		namespace mult
		{
			/*
			принимает число возвращает произведение цифр числа
			например: 14 = 1 * 4 = 4
			*/
			int multiplicationOfDigit(int number);
		}
		// end of mult namespace

		namespace amount
		{
			/*
			принимает число возвращает количество цифр в числе
			например: 8183124 = 7
			*/
			int amountOfDigit(int number);
		}
		// end of mult namespace

		namespace tasks
		{
			/*
			принимает натуральное число
			если количество цифр числа меньше суммы его цифр, возвращает произведение цифр числа
			если количество цифр числа равно сумме его цифр, возвращает знакочередующуюся сумму цифр числа
			если количество цифр числа больше суммы его цифр, возвращает сумму нечётных цифр числа
			*/
			int task2(int number);

			/*
			принимает натуральное число
			если количество цифр числа чётное, возвращает сумму квадратнов нечётных цифр
			если количество цифр числа чётное, возвращает сумму факториалов чётных цифр
			*/
			int task1(int number);
		}
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
		принимает три целых целых, проверяет является ли третье делителем первых двух
		*/
		bool isDivider(int a, int b, int d);

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