#include <iostream>

using namespace std;

void arrayOut(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void arrayRand(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand();
	}
}