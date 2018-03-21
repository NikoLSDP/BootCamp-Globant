#include "stdafx.h"
#include "operaciones_Preprocesador.h"

void concateNames() {
	printf("Los nombres de las variables unidos forman: %s", CONCATNAMES(var1, var2));
}

void printer() {
	PRINTER;
}