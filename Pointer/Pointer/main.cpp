#include <iostream>

using namespace std;

void arrayRight(int size, int* a)
{
	int temp = a[size - 1];
	for (int i = size - 1; i >= 1; --i)
	{
		a[i] = a[i - 1];
	}
	a[0] = temp;
}

void arrayLeft(int* a, int size)
{
	int temp = a[0];
	for (int i = 0; i < size - 1; ++i)
	{
		a[i] = a[i + 1];
	}
	a[size - 1] = temp;
}

void func(int* x);

void help()
{
	int n = 5;
	int* pn = &n;
	func(pn);
	cout << n << endl << *pn << endl << pn << endl;
	int x = 5;
	int y = x;

	cout << &x << " " << &y << endl;

	int a[3];
	a[0] = 1; a[1] = 2; a[2] = 3;
	for (int i = 0; i < 3; ++i)
	{
		cout << *(a + i) << " " << a[i] << " " << a + i << endl;
	}

	int b[3];

	int v = 5;
	cout << endl << &v;
}

void printArray(int* a, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << a[i] << " ";
	}
}

void rotate(int a[], unsigned size, int shift)
{
	for (int i = 0; i < shift % size; ++i)
	{
		arrayLeft(a, size);
	}
}

void func(int* x)
{
	++(*x);
}

int main()
{
	int a[5];
	for (int i = 0; i < 5; ++i)
	{
		a[i] = i + 1;
	}
	rotate(a, 5, 13);
	printArray(a, 5);
	return 0;
}