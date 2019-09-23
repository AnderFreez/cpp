#include "myMath.h"
#include "Limits.h"

int myMath::max(int a, int b, int c, int d)
{
	int result = a;
	if (b > result)
	{
		result = b;
	}
	if (c > result)
	{
		result = c;
	}
	if (d > result)
	{
		result = d;
	}
	return result;
}

int myMath::max(int* a, int size)
{
	int result = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > result)
		{
			result = a[i];
		}
	}
	return result;
}

int myMath::min(int* a, int size)
{
	int result = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if (a[i] < result)
		{
			result = a[i];
		}
	}
	return result;
}