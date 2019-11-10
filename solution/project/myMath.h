#pragma once

namespace myMath
{
	namespace inverted
	{
		int smartInverted(int number);

		int inverted(int number);
	}
	namespace degree
	{
		int degree(int a, int b);
	}
	// end of degree namespace

	namespace extremum
	{
		/*
		��������� ��� ����� �����, ���������� ������������ �� ���
		*/
		int max(int a, int b);

		/*
		��������� ��� ����� �����, ���������� ����������� �� ���
		*/
		int min(int a, int b);
	}
	// end of extremum namespace
}
// end of myMath namespace 