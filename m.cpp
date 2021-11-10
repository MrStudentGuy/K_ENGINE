#include <iostream>
#include <Windows.h>
#include <cwchar>
#include "pubvars.h"
#include "ari.h"
#include "geo.h"

using namespace std;

int option;

void Font()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 20;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

void Ask()
{
	option = 0;

	cout << "1: Arithmetics" << endl;
	cout << "2: Geometry" << endl;
	cin >> option;
}

void Analyze()
{
	switch (option)
	{
		case 1:
			Ar();
			break;
		case 2:
			Geo();
			break;
		default:
			cout << "Unknown Option. Application quitting.";
			break;
	}
}

int main()
{	
	Font();
	Ask();
	Analyze();
	return 0;
}