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
	int a[5];
	myArray::arrayIn(a, 5);
	cout << taskWithArray::task14(a, 5);
	return 0;
}