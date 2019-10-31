#include <iostream>

using namespace std;
int NTE()
{
	int n;
	for (int i = 1; i < 10; i++)
	{
		cin >> n;
		if (n % 2 == 0)
		{
			return n;
		}
	}

	return -1;
}