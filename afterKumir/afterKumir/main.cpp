#include <iostream>
#include "myMath.h"
#include "sort.h"
#include "array.h"
#include "taskWithArray.h"
#include "Header.h"

using namespace std;

int main()
{
	
	int a[5];
	myArray::arrayRand(a, 5);
	myArray::arrayOut(a, 5);
	return 0;
}