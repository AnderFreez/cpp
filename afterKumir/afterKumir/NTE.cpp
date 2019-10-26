#include <iostream>

using namespace std;
int NTE()
{
	int digits;
	cin >> digits;
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			digits = i;
			continue;
		}
	}
	cout << digits;
	return 0;
}