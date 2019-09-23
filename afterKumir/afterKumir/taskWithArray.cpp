namespace taskWithArray
{
	/*
	принимает массив из натуральных чисел, возращает максимальный элемент, кратный 3
	если такого нет, то возвращает -1
	*/
	int task1(int* a, int size)
	{
		int amount = 0;
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0 && a[i] > result)
			{
				result = a[i];
				++amount;
			}
		}
		if (amount == 0)
		{
			return -1;
		}
		else
		{
			return result;
		}
	}

	/*
	принимает массив из натуральных чисел, возращает количество элементов, кратных 3
	и оканчивающихся на 7
	*/
	int task2(int* a, int size) 
	{
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0 && a[i] % 10 == 7)
			{
				++result;
			}
		}
		return result;
	}

	/*
	принимает массив, возращает сумму элементов, кратных 3
	и оканчивающихся на 7
	*/
	int task3(int* a, int size)
	{
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0 && a[i] % 10 == 7)
			{
				result += a[i];
			}
		}
		return result;
	}
}