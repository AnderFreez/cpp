#include<iostream>

using namespace std;

int arithmeticMean(int a)
{
	int ed, des, sot, tys, d;
	ed = a % 10;
	a = a / 10;
	des = a % 10;
	a = a / 10;
	sot = a % 10;
	a = a / 10;
	tys = a % 10;
	d = tys * 1000 + ed * 100 + des * 10 + sot + 10;
	return d;
}