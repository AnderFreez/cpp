#include <iostream>
#include "myMath.h"
#include "sort.h"
#include "array.h"

using namespace std;

int main()
{
	int a[5];
	myArray::arrayRand(a, 5);
	myArray::arrayOut(a, 5);
	sort::swap(a, 5, 0, 4);
	myArray::arrayOut(a, 5);
	
	return 0;
}