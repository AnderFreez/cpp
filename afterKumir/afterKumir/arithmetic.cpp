#include "Limits.h"
#include <iostream>
using namespace std;
namespace arithmetic
{
	// +
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

	int amountOfDigit(int number)
	{
		int amount = 0;
		while (number != 0)
		{
			++amount;
			number /= 10;
		}
		return amount;
	}

	int square(int number)
	{
		int result = 0;
		for (int i = 1; i <= number; i++)
		{
			result = i * i;
		}
		return result;
	}

	int square2(int x)
	{
		x *= x;
		int y = x * x;
		x *= x;
		x *= x;
		x += y;
		return x;
	}

	int square3(int x)
	{
		int u = x;
		x *= x;
		int y = x + u;
		x *= x;
		x *= x;
		x *= x;
		x += y + u;
		x += y;
		return x;
	}
	
	int sumDigitSquares(int number)
	{
		int sum = 0;
		while (number != 0)
		{
			int digit = number % 10;
			if (digit % 2 == 1)
			{
				sum += digit * digit;
			}
		}
		return sum;
	}
}