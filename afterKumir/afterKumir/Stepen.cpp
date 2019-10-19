namespace myMath
{
	// �������� a � ������� b
	int degree(int a, int b)
	{
		int n = 1;
		for (int i = 0; i < b; ++i)
		{
			n *= a;
		}
		return n;
	}

	// �������� x � 8-�� �������
	int degree8(int x)
	{
		x *= x;
		x *= x;
		x *= x;
		return x;
	}

	int degree15(int x)
	{
		int y = x;
		x *= x;
		y *= x;
		x *= x;
		x *= x;
		x *= x;
		x *= y;
		return x;
	}
}