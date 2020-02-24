#include <iostream>
#include "windows.h"

using namespace std;

static HANDLE _ConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);//Консоль вывода

BOOL SetCurrentPos(SHORT x, SHORT y)
{
	COORD pos = { x,y };
	return SetConsoleCursorPosition(_ConsoleOut, pos);
}

int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	for (int i = 0; i < 10; ++i)
	{
		cout << "*";
		Sleep(200);
	}
	SetCurrentPos(0, 0);
	SetConsoleTextAttribute(handle, FOREGROUND_BLUE);
	for (int i = 0; i < 10; ++i)
	{
		cout << "*";
		Sleep(500);
	}
	return 0;
}