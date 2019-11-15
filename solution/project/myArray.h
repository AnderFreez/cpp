#pragma once

namespace myArray
{
	namespace InOut
	{
		// input array
		void arrayIn(int* a, int size);

		// print array
		void arrayOut(int* a, int size);

		// rand array
		void arrayRand(int* a, int size);
	}
	// end of array namespace
	
	namespace maxMinArray
	{
		int max(int* a, int size);

		int min(int* a, int size);
	}
	// end of maxMinArray namespace

	namespace tasks
	{
		/*
		��������� ������ �� ����������� �����, ��������� ������������ �������, ������� 3
		���� ������ ���, �� ���������� -1
		*/
		int task1(int* a, int size);

		/*
		��������� ������ �� ����������� �����, ��������� ������������ �������, ������� 3
		���� ������ ���, �� ���������� -1
		*/
		int task1(int* a, int size);

		/*
		��������� ������, ��������� ����� ���������, ������� 3
		� �������������� �� 7
		*/
		int task3(int* a, int size);

		/*
		��������� ������ � ���������� ������������ ������� ������� 7
		� �������������� �� 9.
		*/
		int task4(int* a, int size);

		/*
		��������� ������ � ���������� ���������� ������ ��������� ������� 7
		� ������� 78.
		*/
		int task5(int* a, int size);

		/*
		��������� ������ � ���������� ������������ ������ �������,
		���� ���������� ������ ��������� ������, ��� ���������� ��������,
		� ������������ �������� �������,
		���� ���������� �������� ������, ��� ���������� ������.
		���� ���������� ������ ����� ���������� ��������,
		�� ������� ����� ��������� �������.
		*/
		int task6(int* a, int size);

		/*
		��������� ������ � ���������� ������� �������������� ���������,
		������� 7.
		*/
		double task7(int* a, int size);

		/*
		��������� ������ � ���������� �������
		���������� ������������� ��������� � ���.
		*/
		int task8(int* a, int size);

		/*
		��������� ������ � ���������� ��������
		����� ����������� ������ � �������� ���������.
		*/
		int task9(int* a, int size);

		/*
		��������� ������ � ���������� �������� ����� ������ ���������,
		������� 3 � ������������� ���������, ������� 7.
		*/
		int task10(int* a, int size);

		// return second max
		int task11(int* a, int size);

		// second max from internet doen't work properly. It's a pity );
		int task12(int* a, int size);

		// ��������� ������ � ���������� ������ ��������
		int task13(int* a, int size);

		/* ��������� ������ ���������� ����� � ����������
		������� �������������� ���������� �����,
		����� ���� ������� ����� 10
		*/
		int task14(int* a, int size);

		/*
		��������� ������ � ����������
		����� � ������������ ������ ����
		*/
		int task15(int* a, int size);

		/*
		��������� ������ ���������� ����� � ����������
		����� �
		������������ ������������� ����
		*/
		int task16(int* a, int size);

		/*
		��������� ������ ���������� ����� � ����������
		����� ���� ���� ���� �������
		*/
		int task17(int* a, int size);

		/*
		������� � ������������ ������ ����, ���� � ������� ������ ��������� ������, ��� ��������
		������� � ������������ ������������� ����, ���� � ������� �������� ��������� ������, ��� ������
		������� �������������� ���� ���� ���� ��������� �������, ���� � ������� ������ � �������� ��������� �������.
		*/
		double task18(int* a, int size);

	}
	// end of tasks namespace
}
// end of myArray namespace