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

	/*
	принимает массив и возвращает максимальный элемент кратный 7
	и оканчивающийся на 9.
	*/
	int task4(int* a, int size)
	{
		int result = 0;
			for (int i = 0; i < size; i++)
			{
				if (a[i] % 7 == 0 && a[i] % 10 == 9)
				{
					result += a[i];
				}
			}
		return result;
	}

	/*
	принимает массив и возвращает количество чётных элементов больших 7
	и меньших 78.
	*/
	int task5(int* a, int size)
	{
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 2 == 0 && 7 < a[i] > 78)
			{
				result = +1;
			}
		}
		return result;
	}

	/*
	принимает массив и возвращает максимальный чётный элемент,
	если количество чётных элементов больше, чем количество нечётных,
	и максимальный нечётный элемент,
	если количество нечётных больше, чем количество чётных.
Если количество чётных равно количеству нечётных,
то вернуть сумму элементов массива.
	*/
	int task6(int* a, int size)
	{

	}

	/*
	принимает массив и возвращает среднее арифметическое элементов,
	кратных 7.
	*/
	int task7(int* a, int size)
	{
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 7 == 0)
			{
				result = a[i];
			}
		}
		return result;
	}

	/*
	принимает массив и возвращает процент
	содержания положительных элементов в нём.
	*/
	int task8(int* a, int size)
	{
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] > 0)
			{

			}
		}

	}

	/*
	принимает массив и возвращает разность
	между количеством чётных и нечётных элементов. 
	*/
	int task9(int* a, int size)
	{
		int chet = 0;
		int nechet = 0;
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 2 == 0)
			{
				chet = +1;
			}
			if (not(a[i] % 2 == 0 ))
			{
				nechet = +1;
			}
		}
		if (chet > nechet)
		{
			result = chet - nechet;
		}
		else
		{
			result = nechet - chet;
		}
		return result;
	}

	/*
	принимает массив и возвращает разность между суммой элементов,
	кратных 3 и произведением элементов, кратных 7.
	*/
	int task10(int* a, int size)
	{
		int summ = 0;
		int pro = 0;
		int result = 0;
		for (int i = 0; i < size; i++)
		{
			if (a[i] % 3 == 0)
			{
				summ =+ 1
			}
		}



	}
}