namespace sort
{
	void swap(int* a, int size, int index1, int index2)
	{
		int temp = a[index1];
		a[index1] = a[index2];
		a[index2] = temp;
	}

	void iteration(int* a, int size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a, size, i, i + 1);
			}
		}
	}

	void bubble(int* a, int size)
	{
		for (int i = 0; i < size; i++)
		{
			iteration(a, size);
		}
	}
}