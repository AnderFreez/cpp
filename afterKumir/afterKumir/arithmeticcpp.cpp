#include "Limits.h"
#include <iostream>
using namespace std;
namespace arithmetic
{
	// +
	int plus(int* a, int size)
	{
		int ed = INT_MIN;
		int des = INT_MIN;
		int sot = INT_MIN;
		int d = INT_MIN;
		ed = a % 10;
		a = a / 10;
		des = a % 10;
		a = a / 10;
		sot = a % 10;
		d = ed + des + sot
		return d;
	}

	// -
	/*int minus(int* a, int size)
	{
		int ed = INT_MIN;
		int des = INT_MIN;
		int sot = INT_MIN;
		int d = INT_MIN;
		ed = a % 10;
		a = a / 10;
		des = a % 10;
		a = a / 10;
		sot = a % 10;
		for (int i = 0; i < size; i++)
		{
			if ()

		}
	}*/

}