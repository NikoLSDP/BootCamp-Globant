#include "stdafx.h"
#include "operaciones_String.h"

bool compareNames(const char* str1, const char* str2) {
	if (strcmp(str1, str2) == 0) {
		return true;
	}
	else {
		return false;
	}
}