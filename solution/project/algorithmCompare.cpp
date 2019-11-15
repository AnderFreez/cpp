#include "algorithmCompare.h"
#include <iostream>
#include <ctime>
#include "integerNumbers.h"
#include "myMath.h"

using namespace std;

namespace algorithmCompare
{
	void GCD()
	{
		int replays = 1000000;

		int startTime1 = clock();
		for (int i = 0; i < replays; i++)
		{
			integerNumbers::divisibility::stupidGCD(1071, 462);
		}
		int endTime1 = clock();
		int time1 = endTime1 - startTime1;

		int startTime2 = clock();
		for (int i = 0; i < replays; i++)
		{
			integerNumbers::divisibility::euclid(1071, 462);
		}
		int endTime2 = clock();
		int time2 = endTime2 - startTime2;
		cout << "stupidGCD time = " << time1 << endl << "euclid time = " << time2;
	}

	void invertedNumber()
	{
		//setlocale(LC_ALL, "russian");
		int startTime1 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			integerNumbers::digits::inverted::inverted(123456789);
		}
		int endTime1 = clock();
		int time1 = endTime1 - startTime1;

		int startTime2 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			integerNumbers::digits::inverted::smartInverted(123456789);
		}
		int endTime2 = clock();
		int time2 = endTime2 - startTime2;
		cout << "Inverted time = " << time1 << endl << "Smart Inverted time = " << time2;
	}

	void factorialSum()
	{
		//setlocale(LC_ALL, "russian");
		int startTime1 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			myMath::factorial::factorialSum(10);
		}
		int endTime1 = clock();
		int time1 = endTime1 - startTime1;

		int startTime2 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			myMath::factorial::smartFactorialSum(10);
		}
		int endTime2 = clock();
		int time2 = endTime2 - startTime2;
		cout << "Factorial sum time = " << time1 << endl << "Smart factorial sum time = " << time2;
	}
}