#include "myMath.h"

namespace myMath
{
	namespace degree
	{

	}
	// end of degree namespace

	namespace extremum
	{
		/*
		��������� ��� ����� �����, ���������� ������������ �� ���
		*/
		int max(int a, int b)
		{
			if (a > b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}

		/*
		��������� ��� ����� �����, ���������� ����������� �� ���
		*/
		int min(int a, int b)
		{
			if (a < b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
	}
	// end of extremum namespace
}
// end of myMath namespace 