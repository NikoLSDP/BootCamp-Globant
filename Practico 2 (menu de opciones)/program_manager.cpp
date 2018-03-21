#include "stdafx.h"
#include "operaciones_matematicas.h"
#include "operaciones_String.h"
#include "operaciones_Logicas.h"
#include "operaciones_Preprocesador.h"
#include"operaciones_Binarias.h"

using namespace std;

int menu()
{
	int choosed;
	cout << "Seleccione la operación deseada: \n"
		"\n"
		"1- El cuadrado de número. \n"
		"2- La suma de dos números. \n"
		"3- El área de un círculo. \n"
		"4- El máximo de dos números. \n"
		"5- Concatenación de nombres de variables. \n"
		"6- Imprimir por pantalla un texto (literal). \n"
		"7- Comparación de cadena. \n"
		"8- Operaciones binarias. \n"
		"9- Intercambiar dos variables. \n"
		"10- Salir del Menú." << endl;
	cin >> choosed;
	return choosed;
}

void selection(int sel) {

		switch (sel) {

		case 1: //La potencia de un número
			int base;
			cout << "Ingresa el número de base: ";
			cin >> base;
			cout << "El cuadrado del número ingresado es = " << square(base) << endl;
			break;

		case 2: //La suma de dos números
			int a, b;
			cout << "Ingresa el primer número: ";
			cin >> a;
			cout << "Ingresa el segundo número: ";
			cin >> b;
			cout << "La suma de los números es = " << sum(a, b) << endl;
			break;

		case 3: //El área de un círculo
			double r;
			cout << "Ingrese el radio del circulo (En cm): ";
			cin >> r;
			cout << "El área del círculo es de = " << area(r) << "cm." << endl;
			break;

		case 4: //Comparación de dos números
			int x, y;
			cout << "Ingresa el primer número: ";
			cin >> x;
			cout << "Ingresa el segundo número: ";
			cin >> y;
			if (max(x, y) == x) {
				cout << "El numero mayor es el primero = " << x << endl;
			}
			else {
				cout << "El numero mayor es el segundo = " << y << endl;
			}
			break;

		case 5: //Concatenación de nombres de variables.
			concateNames();
			break;

		case 6: //Imprimir por pantalla un texto (literal).
			printer();
			break;

		case 7: //Comparación de cadena.
			char str1[100];
			char str2[100];
			cout << "Ingrese el primer String: ";
			cin >> str1;
			cout << "Ingrese el segundo String: ";
			cin >> str2;
			if (compareNames(str1, str2)) {
				cout << "Los strings son iguales" << endl;
			}
			else {
				cout << "Los strings son diferentes" << endl;
			}
			break;

		case 8: //Operaciones binarias.
			pushLeft();
			pushRight();
			andBin();
			orBin();
			break;

		case 9:
			int c = 5;
			int d = 7;
			swap(&c, &d);
			cout << c << d << endl;
			break;
		}
}