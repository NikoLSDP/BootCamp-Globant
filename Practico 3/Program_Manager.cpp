#include "Program_Manager.h"
#include "stdafx.h"
#include "Operations.h"

int menu() {
	int a;
	cout << "Ejercicios del Práctico * 3 (Oper sizeOf y Limits) \n"
		"************************** \n"
		"\n"
		"1- Imprimir el sizeof de variables. \n"
		"2- Trabajar con los tipos de dato y sus representaciones. \n"
		"3- Imprimir los numeric limits. \n"
		"4- Imprimir por pantalla el resultado de las variables a y b. \n"
		"5- Arrays. \n" 
		"6- Salir del programa." << endl;

	cin >> a;

	return a;
}

void selection(int sel) {

	switch (sel) {

	case 1:
		funcSizeOf();
		break;

	case 2:
		funcFormats();
		break;

	case 3:
		funcLimits();
		break;

	case 4:
		funcComp();
		break;

	case 5:
		int selec = funcArr();
		if (selec == 3) {
			menu();
		}
		break;
	}

}

