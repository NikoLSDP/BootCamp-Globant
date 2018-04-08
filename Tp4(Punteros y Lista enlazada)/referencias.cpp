#include "stdafx.h"
#include "referencias.h"

void referencias() {
	int var;
	var = 40;
	int &ref = var;//VALID

	//int &ref = 1; NOT VALID

	/*int var2 = 1;
	int *ptr;
	int &ref2 = var2;
	*ptr = ref2; NOT VALID*/
}