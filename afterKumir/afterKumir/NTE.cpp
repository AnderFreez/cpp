#include <iostream>

using namespace std;

void NTE()
{
	int n;
	for (int i = 1; i < 10; i++)
	{
		cin >> n;
		if (n % 2 == 0)
		{
			cout << n;
			return;
		}
	}

	cout << -1;
	return;
}