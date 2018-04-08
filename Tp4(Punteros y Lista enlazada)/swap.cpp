#include "stdafx.h"
#include "swap.h"

void swap_1(int *p1, int *p2) {
	int aux;
	aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}

void swap_2(int &p1, int &p2) {
	int aux2;
	aux2 = p1;
	p1 = p2;
	p2 = aux2;


}