#include <ctime>
#include "myMath.h"
#include <iostream>

using namespace std;

namespace algorythmCompare
{
	void invertedNumber()
	{
		//setlocale(LC_ALL, "russian");
		int startTime1 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			myMath::inverted(123456789);
		}
		int endTime1 = clock();
		int time1 = endTime1 - startTime1;

		int startTime2 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			myMath::smartInverted(123456789);
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
			myMath::factorialSum(10);
		}
		int endTime1 = clock();
		int time1 = endTime1 - startTime1;

		int startTime2 = clock();
		for (int i = 0; i < 1000000; i++)
		{
			myMath::smartFactorialSum(10);
		}
		int endTime2 = clock();
		int time2 = endTime2 - startTime2;
		cout << "Factorial sum time = " << time1 << endl << "Smart factorial sum time = " << time2;
	}
}