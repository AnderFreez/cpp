#include "algorithmCompare.h"
#include <iostream>
#include <ctime>
#include "integerNumbers.h"

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
}