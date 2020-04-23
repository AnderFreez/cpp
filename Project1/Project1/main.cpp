#include <iostream>
// #include "class20042020.h"

using namespace std;
// using namespace class20042020;

#define MAX(x, y, r)\
int x1 = x;\
int y1 = y;\
if (x1 < y1)\
{\
	r = y1;\
}\
else\
{\
	r = x1;\
}\

int main()
{
	int r;
	int x = 10;
	int y = 20;
	MAX(++x, ++y, r)
	cout << r;
	return 0;
}