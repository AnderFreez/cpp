#pragma once
namespace myMath
{
	// calculate factorial
	int factorial(int n);

	// degree
	int degree(int a, int b);

	// max
	int max(int a, int b, int c, int d);

	double arithmeticMean(int number);

	//
	int max(int* a, int size);

	int min(int* a, int size);

	int inverted(int number);

	/*
	принимает натуральное n, возвращает 1! + 2! + 3! + ... + n!.
    Например, примает 5, возвращает 1! + 2! + 3! + 4! + 5!.
	*/
	int factorialSum(int n);

	/*
	принимает натуральное число n, возвращает сумму чисел от 1 до n, то есть 1 + 2 + 3 + 4 + .... + n.
    Например, принимает 5, возвращает 1 + 2 + 3 + 4 + 5.
	*/
	int sum(int n);

	/*
	принимает натуральное число n, возвращает сумму чётных чисел из диапазона от 1 до n, то есть 2 + 4 + 6 + 8 + .... .
    Например, принимает 7, возвращает 2 + 4 + 6.
	*/
	int sumOfEven(int n);

	/*
	принимает натуральное число n, возвращает сумму нечётных чисел из диапазона от 1 до n
	например, принимает 10, возвращает 1 + 3 + 5 + 7 + 9
	*/
	int sumOfOdd(int n);

	/*
	принимает натуральное число n, возвращает 1 - 2 + 3 - 4 + 5 - .......(то есть знакочередующуюся сумму) 
	*/
	int signSum(int n);

	/*
	принимает натуральное число n, возвращает сумму квадратов чисел от 1 до n
	например, принимает 5, возвращает 1^2 + 2^2 + 3^2 + 4^2 + 5^2
	Где x^2 = x * x
	*/
	int sumOfSquares(int n);

	int sumOfOddDigits(int number);

	int signSumOfDigits(int number);

	int smartInverted(int number);

	int CHTOTOwithDigit(int number);
}