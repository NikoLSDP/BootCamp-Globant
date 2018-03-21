#include "stdafx.h"
#include"operaciones_Binarias.h"

using namespace std;
void pushLeft() {
	short int px, py, pz;
	px = 0;
	py = 1;
	pz = 2;
	cout << "0 << 2 bit a la izquierda == " << (px << 2) << endl;
	cout << "1 << 2 bit a la izquierda == " << (py << 2) << endl;
	cout << "2 << 2 bit a la izquierda == " << (pz << 2) << endl;
}

void pushRight() {
	short int px, py, pz;
	px = 32;
	py = 128;
	pz = 4;
	cout << "32 >> 2 bit a la derecha == " << (px >> 2) << endl;
	cout << "128 >> 2 bit a la derecha == " << (py >> 2) << endl;
	cout << "4 >> 2 bit a la derecha == " << (pz >> 2) << endl;
}

void andBin() {
	int x = 6;
	int y = 16;
	cout << " El resultado de 6 AND 18 es = " << (6 & 18) << endl;
}

void orBin() {
	int x = 6;
	int y = 16;
	cout << " El resultado de 6 OR 18 es = " << (6 ^ 18) << endl;
}