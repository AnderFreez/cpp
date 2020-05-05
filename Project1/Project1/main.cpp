#include <iostream>
#include "home26042020.h"

using namespace std;

using namespace home26042020;

int myLog2(int n)
{
	int p = 0;
	int answer = 1;
	while (answer <= n)
	{
		answer *= 2;
		++p;
	}

	return p - 1;
}

void testsForMyLog2()
{
	if (myLog2(1) == 0)
	{
		
		cout << "TEST 1 PAAAAAAAASSED" << endl;
	}
	else
	{
		cout << "TEST 1 FAIIIIIIIIIIILED" << endl;
	}
	if (myLog2(32) == 5)
	{
		cout << "TEST 2 PAAAAAAAASSED" << endl;
	}
	else
	{
		cout << "TEST 2 FAIIIIIIIIIIILED" << endl;
	}
	if (myLog2(33) == 5)
	{
		cout << "TEST 3 PAAAAAAAASSED" << endl;
	}
	else
	{
		cout << "TEST 3 FAIIIIIIIIIIILED" << endl;
	}
	if (myLog2(31) == 4)
	{
		cout << "TEST 4 PAAAAAAAASSED" << endl;
	}
	else
	{
		cout << "TEST 4 FAIIIIIIIIIIILED" << endl;
	}
}

int main()
{
	testsForMyLog2();
	return 0;
}