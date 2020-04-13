#include <iostream>
#include "algorithmCompare.h"
#include "oge.h"
#include "ege.h"
#include "integerNumbers.h"
#include "myArray.h"
#include "myMath.h"
#include "sort.h"
#include "test.h"
#include "work131219.h"
#include "work201219.h"

using namespace std;

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
	
}
int main()
{
	int k = 20;
	int m = 10;
	swap(m, k);
	cout << m << " " << k;
	return 0;
}