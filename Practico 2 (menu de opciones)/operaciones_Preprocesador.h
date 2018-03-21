#pragma once

#define CONCATNAMES(nam1,nam2) (#nam1###nam2)
#define PRINTER (printf("This is just a test."))

void concateNames();

void printer();