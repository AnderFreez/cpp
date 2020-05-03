#include <iostream>
#include "home26042020.h"

using namespace std;

using namespace home26042020;

void yjas(int n)
{
	int p = 1;
	int answer = 1;
	while (answer <= n)
	{
		answer *= 2;
		++p;
	}
	p -= 2;
	cout << p;
}

int main()
{
	int n = 33;
	yjas(n);
	return 0;
}