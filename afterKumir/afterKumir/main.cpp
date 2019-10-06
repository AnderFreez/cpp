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
	int a[4];
	myArray::arrayIn(a, 4);
	cout << taskWithArray::task18(a, 4);
	return 0;
}