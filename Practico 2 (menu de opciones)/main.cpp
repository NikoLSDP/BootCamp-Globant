// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "program_manager.h"
#include "operaciones_matematicas.h"

using namespace std;

int main()
{
	locale::global(locale("spanish"));
	int a = menu();
	while (a > 0 && a < 10) {
		selection(a);
		_getch();
		system("cls");
		a = menu();
	}
    return 0;
}

