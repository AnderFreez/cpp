#include <iostream>
#include "myArray.h"

using namespace std;

namespace myArray
{
	void arrayIn(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> a[i];
		}
	}

	namespace tasks
	{

	}
	// end of task namespace
}
// end of myArray namespace