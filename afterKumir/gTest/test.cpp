#include "pch.h"
#include "../afterKumir/taskWithArray.h"
#include "../afterKumir/array.h"

TEST(Extremum, Task13)
{
	int a[5];
	myArray::arrayRand(a, 5);
	EXPECT_EQ(taskWithArray::task13(a, 5), 1);
}