#include "myMath.h"

int myMath::degree(int a, int b)
{
	int n = 1;
	for (int i = 0; i < b; ++i)
	{
		n *= a;
	}
	return n;
}