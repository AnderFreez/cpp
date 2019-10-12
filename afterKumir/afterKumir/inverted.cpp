#include "myMath.h"
#include "arithmetic.h"

int myMath::inverted(int number)
{
	int n = arithmetic::amountOfDigit(number) - 1;
	int result = 0;
	while (number != 0)
	{
		int digit = number % 10;
		result += digit * myMath::degree(10, n);
		number /= 10;
		--n;
	}
	return result;
}