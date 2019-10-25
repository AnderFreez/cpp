#include "myMath.h"
#include <iostream>

using namespace std;

namespace test
{
	namespace myMathTest
	{
		void factorial()
		{
			cout << "factorial testing:" << endl;
			int value = myMath::factorial(1);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::factorial(5);
			if (value == 120)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 120 << " returned value: " << value << endl;
			}
		}
	}
}