// Tp4(Punteros y Lista enlazada).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "program_Manager.h" 
#include "Nodo.h"
#include "Lista.h"



int main()
{
	std::locale::global(std::locale("spanish"));
	int choosed = menu();
	selections(choosed);
	_getch();
    return 0;
}

