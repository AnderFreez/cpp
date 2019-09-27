#include <iostream>
#include "myMath.h"
#include "sort.h"
#include "array.h"
#include "taskWithArray.h"

using namespace std;

int main()
{
	int const n = 5;
	int a[n];

	myArray::arrayIn(a, n);

	cout << taskWithArray::task12(a, n);

	return 0;
}