#include "stdafx.h"
#include "program_Manager.h"
#include "swap.h"
#include "Lista.h"
#include "Nodo.h"
#include "List_Menu.h"

int menu() {
	int selection = 0;
	std::cout << "TP 4 (Punteros y Lista enlazada):\n";
	std::cout << "1- Validaciones. \n";
	std::cout <<"2- Swapeo. \n";
	std::cout << "3- Lista Enlazada. \n";
	std::cin >> selection;
	return selection;
}

void selections(int sel) {
	switch (sel) {
	case 1:
		std::cout << "Buscar el .cpp llamado referencias. " << std::endl;
		break;

	case 2:
		int a, b;
		a = 5;
		b = 7;
		std::cout << "Los valores antes del Swap_1." << std::endl;
		std::cout << "int a= " << a << " y su dirección es: " << &a << std::endl;
		std::cout << "int b= " << b << " y su dirección es: " << &b << std::endl;
		swap_1(&a, &b);
		std::cout << "Los valores después del Swap_1." << std::endl;
		std::cout << "int a= " << a << " y su dirección es: " << &a << std::endl;
		std::cout << "int b= " << b << " y su dirección es: " << &b << std::endl;

		std::cout << "\nLos valores antes del Swap_2." << std::endl;
		std::cout << "int a= " << a << " y su dirección es: " << &a << std::endl;
		std::cout << "int b= " << b << " y su dirección es: " << &b << std::endl;
		swap_2(a, b);
		std::cout << "Los valores después del Swap_2." << std::endl;
		std::cout << "int a= " << a << " y su dirección es: " << &a << std::endl;
		std::cout << "int b= " << b << " y su dirección es: " << &b << std::endl;
		break;

	case 3:
		listMenu();
		break;
	}
}
