// Practico 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Program_Manager.h"

int main()
{
	locale::global(locale("spanish"));
	int a = menu();
	while (a > 0 && a < 6) {
		selection(a);
		_getch();
		system("cls");
		a = menu();
	}

    return 0;
}

