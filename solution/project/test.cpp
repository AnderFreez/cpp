#include "test.h"
#include <iostream>
#include "integerNumbers.h"
#include "myMath.h"

using namespace std;

namespace test
{
	namespace integerNumbersTest
	{
		namespace divisibility
		{
			void isDivider()
			{
				
			}

			void stupidGCD()
			{

			}

			void euclid()
			{

			}
		}
	}
	// end of integerNumbersTest namespace

	namespace myMathTest
	{
		void factorial()
		{
			cout << "factorial testing:" << endl;
			int value = integerNumbers::factorial::factorial(1);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = integerNumbers::factorial::factorial(5);
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
			int value = myMath::degree::degree(1, 29);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = myMath::degree::degree(2, 10);
			if (value == 1024)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 1024 << " returned value: " << value << endl;
			}
		}

		void arithmeticMean()
		{
			cout << "arithmeticMean testing:" << endl;
			double value = integerNumbers::divisibility::arithmeticMeanOfDigit(1111);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value;
			}

			value = integerNumbers::divisibility::arithmeticMeanOfDigit(2222);
			if (value == 2)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 2 << " returned value: " << value << endl;
			}
		}

		void inverted()
		{
			cout << "inverted testing:" << endl;
			int value = myMath::inverted::inverted(6589423);
			if (value == 3249856)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 3249856 << " returned value: " << value;
			}

			value = myMath::inverted::inverted(2834956);
			if (value == 6594382)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 6594382 << " returned value: " << value << endl;
			}
		}

		void factorialSum()
		{
			cout << "factorialSum testing:" << endl;
			int value = integerNumbers::factorial::factorialSum(1111);
			if (value == -125961703)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = integerNumbers::factorial::factorialSum(2222);
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
			int value = integerNumbers::factorial::smartFactorialSum(1111);
			if (value == -125961703)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			value = integerNumbers::factorial::smartFactorialSum(2222);
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
			int value = integerNumbers::digits::sum::sum(5);
			if (value == 15)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 15 << " returned value: " << value;
			}

			value = integerNumbers::digits::sum::sum(6);
			if (value == 21)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 21 << " returned value: " << value << endl;
			}
		}

		void sumOfOdd()
		{
			cout << "sumOfOdd testing:" << endl;
			int value = integerNumbers::digits::sum::sumOfOdd(10);
			if (value == 25)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 25 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::sumOfOdd(11);
			if (value == 36)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 36 << " returned value: " << value;
			}
		}

		void sumOfEven()
		{
			cout << "sumOfEven testing:" << endl;
			int value = integerNumbers::digits::sum::sumOfEven(5);
			if (value == 6)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 6 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::sumOfEven(6);
			if (value == 12)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 12 << " returned value: " << value << endl;
			}
		}

		void signSum()
		{
			cout << "signSum testing:" << endl;
			int value = integerNumbers::digits::sum::signSum(5);
			if (value == 3)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 3 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::signSum(6);
			if (value == -3)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << -3 << " returned value: " << value << endl;
			}
		}

		void sumOfSquares()
		{
			cout << "sumOfSquares testing:" << endl;
			int value = integerNumbers::digits::sum::sumOfSquares(1);
			if (value == 1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 1 << " returned value: " << value << endl;
			}

			int value = integerNumbers::digits::sum::sumOfSquares(2);
			if (value == 5)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 5 << " returned value: " << value << endl;
			}
		}

		void sumOfOddDigits()
		{
			cout << "sumOfOddDigits testing:" << endl;
			int value = integerNumbers::digits::sum::sumOfOddDigits(23);
			if (value == 3)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 3 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::sumOfOddDigits(63);
			if (value == 3)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 3 << " returned value: " << value << endl;
			}
		}

		void signSumOfDigits()
		{
			cout << "signSumOfDigits testing:" << endl;
			int value = integerNumbers::digits::sum::signSumOfDigits(32);
			if (value == -1)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << -1 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::signSumOfDigits(436);
			if (value == 7)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 7 << " returned value: " << value << endl;
			}
		}

		void smartInverted()
		{
			cout << "smartInverted testing:" << endl;
			int value = myMath::inverted::smartInverted(634);
			if (value == 436)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 436 << " returned value: " << value << endl;
			}

			value = myMath::inverted::smartInverted(654);
			if (value == 456)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 456 << " returned value: " << value << endl;
			}
		}

		void task2()
		{
			cout << "task2 testing:" << endl;
			int value = integerNumbers::digits::tasks::task2(1111);
			if (value == 0)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 0 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::tasks::task2(346);
			if (value == 72)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 72 << " returned value: " << value << endl;
			}
		}

		void sumSquaresOfOddDigits()
		{
			cout << "sumSquaresOfOddDigits testing:" << endl;
			int value = integerNumbers::digits::sum::sumSquaresOfOddDigits(5);
			if (value == 25)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 25 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::sumSquaresOfOddDigits(46);
			if (value == 0)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 0 << " returned value: " << value << endl;
			}
		}

		void sumFactorialOfEvenDigits()
		{
			cout << "sumFactorialOfEvenDigits testing:" << endl;
			int value = integerNumbers::digits::sum::sumFactorialOfEvenDigits(23);
			if (value == 2)
			{
				cout << "test1 passed" << endl;
			}
			else
			{
				cout << "test1 failed" << endl;
				cout << "awaited value: " << 2 << " returned value: " << value << endl;
			}

			value = integerNumbers::digits::sum::sumFactorialOfEvenDigits(22);
			if (value == 4)
			{
				cout << "test2 passed" << endl;
			}
			else
			{
				cout << "test2 failed" << endl;
				cout << "awaited value: " << 4 << " returned value: " << value << endl;
			}
		}
	}
	// end of myMathTest namespace

	namespace sortTest
	{

	}
	// end of sortTest namespace

	namespace myArrayTest
	{

	}
	// end of myArrayTest namespace
}
// end of test namespace