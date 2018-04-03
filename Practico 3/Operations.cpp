#include "Operations.h"
#include "stdafx.h"
#include <limits>
#include <float.h>

void funcSizeOf() {
	cout << "El tama�o de un short en bits es = " << sizeof(short) << endl;
	cout << "El tama�o de un int en bits es = " << sizeof(int) << endl;
	cout << "El tama�o de un float en bits es = " << sizeof(float) << endl;
	cout << "El tama�o de un double en bits es = " << sizeof(double) << endl;
	cout << "El tama�o de un long en bits es = " << sizeof(long) << endl;
	cout << "El tama�o de un long long en bits es = " << sizeof(long long) << endl;
	cout << "El tama�o de un size_t en bits es = " << sizeof(size_t) << endl;
}

void funcFormats() {
	char test = 65;
	printf("65 y sus representaciones: (printf) \n");
	printf("HEXA %#08X \n", test);
	printf("DECIMAL %u \n", test);
	printf("OCTAL %o \n", test);
	printf("CARACTER es %c \n", test);

	cout << "\n 65 y sus representaciones: (cout)" << endl;
	cout << "HEXA " << hex << (int)test << endl;
	cout << "DECIMAL " << dec << (int)test << endl;
	cout << "OCTAL " << oct << (int)test << endl;
	cout << "CARACTER " << test << endl;
}

void funcLimits() {
	cout << "min(short): " << numeric_limits<short>::min() << endl;
	cout << "max(short): " << numeric_limits<short>::max() << endl;
	cout << "min(int): " << numeric_limits<int>::min() << endl;
	cout << "max(int): " << numeric_limits<int>::max() << endl;
	cout << "min(float): " << numeric_limits<float>::min() << endl;
	cout << "max(float): " << numeric_limits<float>::max() << endl;
	cout << "min(double): " << numeric_limits<double>::min() << endl;
	cout << "max(double): " << numeric_limits<double>::max() << endl;
	cout << "min(long): " << numeric_limits<long>::min() << endl;
	cout << "max(long): " << numeric_limits<long>::max() << endl;
}

void funcComp() {
	int a= 0xFFFFFFFF;
	unsigned int b= 0xFFFFFFFF;
	cout << "int a= " << a << endl;
	cout << "unsigned int b= " << b << endl;
}

int funcArr() {
	int s;
	system("cls");
	cout << "Seleccione la opcion deseada:" << endl;
	cout << "1- Ingresar datos dentro del array (int)." << endl;
	cout << "2- Recorrerlo y mostrar su contenido." << endl;
	cout << "3-Volver al Men�." << endl;
	cin >> s;
	switch (s) {
		int vect[3];

		case 1:
		for (int i = 0; i < 3; i++) {
			printf("Ingrese el n�mero para la posici�n %d del vector: ", i);
			scanf_s("%d", &vect[i]);
		}
		cout << "Se ha cargado el vector en su totalidad.";
		_getch();
		funcArr();
		break;

	case 2:
		cout << "El vector contiene los siguientes n�meros enteros: " << endl;
		for (int i = 0; i < 3; i++) {
			cout << "Valor en la posici�n " << i << ": " << vect[i] << endl;
		}
		_getch();
		funcArr();
		break;

	case 3:
		system("cls");
		return s;
		break;

	default:
		cout << "El n�mero ingresado no es correcto.";
		_getch();
		funcArr();
		break;
	}
}