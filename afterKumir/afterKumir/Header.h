#pragma once

#include <iostream>
#include "taskWithArray.h"

using namespace std;

namespace tesingtaskwitharray
{
	void test13()
	{
		int const n1 = 5;
		int a1[n1] = { 1, 2, 3, 4, 5 };
		if (taskWithArray::task13(a1, 5) == 3)
		{
			cout << "test1 passed" << endl;
		}
		else
		{
			cout << "test1 failed" << endl;
		}

		int const n2 = 6;
		int a2[n2] = { 1, 2, 3, 3, 4, 5 };
		if (taskWithArray::task13(a2, 6) == 3)
		{
			cout << "test2 passed" << endl;
		}
		else
		{
			cout << "test2 failed" << endl;
		}

		int const n3 = 7;
		int a3[n3] = { 1, 2, 3, 4, 5, 6, 7 };
		if (taskWithArray::task13(a3, n3) == 5)
		{
			cout << "test3 passed" << endl;
		}
		else
		{
			cout << "test3 failed" << endl;
		}
	}
}