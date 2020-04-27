#include <iostream>
#include "home26042020.h"

using namespace std;

using namespace home26042020;

int main()
{
	char s[10];
	int i = 0;
	while (cin.get(s[i]))
	{
		++i;
	}

	cout << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << s[i];
	}
	return 0;
}