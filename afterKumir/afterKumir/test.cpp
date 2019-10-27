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

		void degree()
		{
			cout << "degree testing:" << endl;
			int value = myMath::degree(1, 29);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::degree(2, 10);
			if (value == 1024)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 120 << " returned value: " << value << endl;
			}
		}

		void arithmeticMean()
		{
			cout << "arithmeticMean testing:" << endl;
			int value = myMath::arithmeticMean(1111);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::arithmeticMean(2222);
			if (value == 2)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void inverted()
		{
			cout << "inverted testing:" << endl;
			int value = myMath::inverted(6589423);
			if (value == 3249856)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::inverted(2834956);
			if (value == 6594382)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void factorialSum()
		{
			cout << "factorialSum testing:" << endl;
			int value = myMath::factorialSum(1111);
			if (value == -125961703)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::factorialSum(2222);
			if (value == -125961703)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void smartFactorialSum()
		{
			cout << "smartFactorialSum testing:" << endl;
			int value = myMath::smartFactorialSum(1111);
			if (value == -125961703)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::smartFactorialSum(2222);
			if (value == -125961703)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sum()
		{
			cout << "sum testing:" << endl;
			int value = myMath::sum(5);
			if (value == 15)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::sum(6);
			if (value == 21)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sumOfOdd()
		{
			cout << "sumOfOdd testing:" << endl;
			int value = myMath::sumOfOdd(10);
			if (value == 25)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumOfOdd(11);
			if (value == 36)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value;
			}
		}

		void sumOfEven()
		{
			cout << "sumOfEven testing:" << endl;
			int value = myMath::sumOfEven(5);
			if (value == 6)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumOfEven(6);
			if (value == 12)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void signSum()
		{
			cout << "signSum testing:" << endl;
			int value = myMath::signSum(5);
			if (value == 3)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::signSum(6);
			if (value == -3)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sumOfSquares()
		{
			cout << "sumOfSquares testing:" << endl;
			int value = myMath::sumOfSquares(1);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumOfSquares(2);
			if (value == 5)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sumOfOddDigits()
		{
			cout << "sumOfOddDigits testing:" << endl;
			int value = myMath::sumOfOddDigits(23);
			if (value == 3)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumOfOddDigits(63);
			if (value == 3)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void signSumOfDigits()
		{
			cout << "signSumOfDigits testing:" << endl;
			int value = myMath::signSumOfDigits(32);
			if (value == -1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::signSumOfDigits(436);
			if (value == 7)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void smartInverted()
		{
			cout << "smartInverted testing:" << endl;
			int value = myMath::smartInverted(634);
			if (value == 436)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::smartInverted(654);
			if (value == 456)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void task2()
		{
			cout << "task2 testing:" << endl;
			int value = myMath::task2(1111);
			if (value == 0)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::task2(346);
			if (value == 72)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sumSquaresOfOddDigits()
		{
			cout << "sumSquaresOfOddDigits testing:" << endl;
			int value = myMath::sumSquaresOfOddDigits(5);
			if (value == 0)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumSquaresOfOddDigits(6);
			if (value == 0)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}

		void sumFactorialOfEvenDigits()
		{
			cout << "sumFactorialOfEvenDigits testing:" << endl;
			int value = myMath::sumFactorialOfEvenDigits(23);
			if (value == 3)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = myMath::sumFactorialOfEvenDigits(22);
			if (value == 6)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << value << " returned value: " << value << endl;
			}
		}
	}
}