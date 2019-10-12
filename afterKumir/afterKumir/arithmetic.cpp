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
}