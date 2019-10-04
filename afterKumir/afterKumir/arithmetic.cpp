#include "Limits.h"
#include <iostream>
using namespace std;
namespace arithmetic
{
	// +
	int sumOfDigit3(int number)
	{
		int ed = number % 10;
		number /= 10;
		int des = number % 10;
		number /= 10;
		int sot = number % 10;

		return ed + des + sot;
	}

	int sumOfDigit(int number)
	{
		int sum = 0;
		while (number != 0)
		{
			sum += number % 10;
			number /= 10;
		}
		return sum;
	}

	// *
	int multiplicationOfDigit3(int number)
	{
		int ed = number % 10;
		number /= 10;
		int des = number % 10;
		number /= 10;
		int sot = number % 10;

		return ed * des * sot;
	}

	int multiplicationOfDigit(int number)
	{
		int mult = 1;
		while (number != 0)
		{
			mult *= number % 10;
			number /= 10;
		}
		return mult;
	}
}