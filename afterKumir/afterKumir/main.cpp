#include <iostream>
#include "myMath.h"
#include "sort.h"
#include "array.h"
#include "taskWithArray.h"
#include "Header.h"
#include "arithmetic.h"
#include "algorythm.h"

using namespace std;

int main()
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