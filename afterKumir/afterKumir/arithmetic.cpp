#include "Limits.h"
#include <iostream>
using namespace std;
namespace arithmetic
{
	// +
	int plus(int* b, int size)
	{
		int a = INT_MIN;
		int ed = INT_MIN;
		int des = INT_MIN;
		int sot = INT_MIN;
		int d = INT_MIN;
		ed = a % 10;
		a = a / 10;
		des = a % 10;
		a = a / 10;
		sot = a % 10;
		d = ed + des + sot;
		cout << d;
		return d;
	}
	
	// -
	int minus(int* b, int size)
	{
		int ed = INT_MIN;
		int des = INT_MIN;
		int sot = INT_MIN;
		int d = INT_MIN;
		int a = INT_MIN;
		ed = a % 10;
		a = a / 10;
		des = a % 10;
		a = a / 10;
		sot = a % 10;
		if (ed > des && ed > sot && des > sot)
		{
			d = ed - des - sot;
		}
		if (ed > des && ed > sot && des < sot)
		{
			d = ed - sot - des;
		}
		if (ed < des && des > sot && ed < sot)
		{
			d = des - sot - ed;
		}
		if (ed < des && des > sot && ed > sot)
		{
			d = des - ed - sot;
		}
		if (ed < sot && des < sot && ed > sot)
		{
			d = sot - ed - sot;
		}
		if (ed < sot && des < sot && ed < sot)
		{
			d = sot - sot - ed;
		}
		return d;
	}
}