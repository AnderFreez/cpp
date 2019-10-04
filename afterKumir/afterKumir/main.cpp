#include <iostream>
#include "myMath.h"
#include "sort.h"
#include "array.h"
#include "taskWithArray.h"
#include "Header.h"
#include "arithmetic.h"

using namespace std;

int main()
{
	int a[3];
	myArray::arrayRand(a, 3);
	myArray::arrayOut(a, 3);
	cout << taskWithArray::task17(a, 3);
	return 0;
}