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
	cout << "Seleccione la operaci�n deseada: \n"
		"\n"
		"1- El cuadrado de n�mero. \n"
		"2- La suma de dos n�meros. \n"
		"3- El �rea de un c�rculo. \n"
		"4- El m�ximo de dos n�meros. \n"
		"5- Concatenaci�n de nombres de variables. \n"
		"6- Imprimir por pantalla un texto (literal). \n"
		"7- Comparaci�n de cadena. \n"
		"8- Operaciones binarias. \n"
		"9- Intercambiar dos variables. \n"
		"10- Salir del Men�." << endl;
	cin >> choosed;
	return choosed;
}

void selection(int sel) {

		switch (sel) {

		case 1: //La potencia de un n�mero
			int base;
			cout << "Ingresa el n�mero de base: ";
			cin >> base;
			cout << "El cuadrado del n�mero ingresado es = " << square(base) << endl;
			break;

		case 2: //La suma de dos n�meros
			int a, b;
			cout << "Ingresa el primer n�mero: ";
			cin >> a;
			cout << "Ingresa el segundo n�mero: ";
			cin >> b;
			cout << "La suma de los n�meros es = " << sum(a, b) << endl;
			break;

		case 3: //El �rea de un c�rculo
			double r;
			cout << "Ingrese el radio del circulo (En cm): ";
			cin >> r;
			cout << "El �rea del c�rculo es de = " << area(r) << "cm." << endl;
			break;

		case 4: //Comparaci�n de dos n�meros
			int x, y;
			cout << "Ingresa el primer n�mero: ";
			cin >> x;
			cout << "Ingresa el segundo n�mero: ";
			cin >> y;
			if (max(x, y) == x) {
				cout << "El numero mayor es el primero = " << x << endl;
			}
			else {
				cout << "El numero mayor es el segundo = " << y << endl;
			}
			break;

		case 5: //Concatenaci�n de nombres de variables.
			concateNames();
			break;

		case 6: //Imprimir por pantalla un texto (literal).
			printer();
			break;

		case 7: //Comparaci�n de cadena.
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