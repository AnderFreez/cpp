namespace taskWithArray
{
	/*
	��������� ������ �� ����������� �����, ��������� ������������ �������, ������� 3
	���� ������ ���, �� ���������� -1
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
	��������� ������ �� ����������� �����, ��������� ���������� ���������, ������� 3
	� �������������� �� 7
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
	��������� ������, ��������� ����� ���������, ������� 3
	� �������������� �� 7
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
	��������� ������ � ���������� ������������ ������� ������� 7
	� �������������� �� 9.
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
	��������� ������ � ���������� ���������� ������ ��������� ������� 7
	� ������� 78.
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
	��������� ������ � ���������� ������������ ������ �������,
	���� ���������� ������ ��������� ������, ��� ���������� ��������,
	� ������������ �������� �������,
	���� ���������� �������� ������, ��� ���������� ������.
���� ���������� ������ ����� ���������� ��������,
�� ������� ����� ��������� �������.
	*/
	int task6(int* a, int size)
	{

	}

	/*
	��������� ������ � ���������� ������� �������������� ���������,
	������� 7.
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
	��������� ������ � ���������� �������
	���������� ������������� ��������� � ��.
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
	��������� ������ � ���������� ��������
	����� ����������� ������ � �������� ���������. 
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
	��������� ������ � ���������� �������� ����� ������ ���������,
	������� 3 � ������������� ���������, ������� 7.
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