#include<iostream>
#include "myMath.h"
#include "arithmetic.h"

using namespace std;


double myMath::arithmeticMeanOfDigit(int number)
{
	double sum = arithmetic::sumOfDigit(number);
	return  sum / arithmetic::amountOfDigit(number);
}