#include "ege.h"
#include "myArray.h"
#include <iostream>

using namespace std;

namespace ege
{
	namespace ege251
	{
		void task7682()
		{
			int const n = 5;
			int a[n];
			myArray::arrayIn(a, n);
			int amount = 0;

			for (int i = 0; i < n - 1; i++)
			{
				int sum = a[i] + a[i + 1];
				if (sum % 2 == 0 && sum % 4 != 0)
				{
					++amount;
				}
			}

			if (amount == 0)
			{
				cout << "No pairs";
			}
			else
			{
				cout << amount;
			}
		}
	}
	// end of namespace ege251

	namespace ege252
	{

	}
	// end of namespace ege252

	namespace ege253
	{

	}
	// end of namespace ege253

	namespace ege254
	{

	}
	// end of namespace ege254

	namespace ege255
	{

	}
	// end of namespace ege255
}
// end of namespace ege