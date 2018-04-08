#include "stdafx.h"
#include "List_Menu.h"
#include "Lista.h"

void listMenu() {
	short select;
	std::cout << "1- Cargar enteros en la Lista." << std::endl;
	std::cout << "2- Imprimir Lista." << std::endl;
	std::cout << "3- Eliminar nodo de la Lista." << std::endl;
	std::cin >> select;
	switch (select)
	{
		case 1:
			addNode();
			break;

		case 2:
			printer();
			break;

		case 3:
			delNode();
			break;

		default:
		std::cout << "Ingresaste un numero erroneo, intentalo de nuevo." << std::endl;
		listMenu();
		break;
	}
}

void addNode() {
	LinkedList lst;
	int d;
	for (int i = 0; i < 3; i++) {
		std::cout << "Ingrese un número para la lista: " << std::endl;
		std::cin >> d;
		Node n(d);
		lst.addAtFront(&n);
	}
	listMenu();
}

void printer() {
	LinkedList lst;
	std::cout << "Los valores ingresados en la Lista son: " << std::endl;
	lst.printList();
}

void delNode() {
	int d;
	LinkedList lst;
	std::cout << "Ingrese el valor que desea eliminar: ";
	std::cin >> d;
	lst.deleteNode(d);
	listMenu();
}