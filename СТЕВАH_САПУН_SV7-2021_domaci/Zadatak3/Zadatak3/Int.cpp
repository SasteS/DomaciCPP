#include <iostream>
#include "Int.h"

void IntType(int arg1, int arg2) {
	int veci;
	if (arg1 > arg2) {
		veci = arg1;
	}
	else {
		veci = arg2;
	}

	std::cout << veci << std::endl << arg1 + arg2 << std::endl << arg1 - arg2 << std::endl << arg1 * arg2 << std::endl << arg1 / arg2 << std::endl;
}