#include <iostream>
#include "Short.h"

void ShortType(short arg1, short arg2) {
	short veci;
	if (arg1 > arg2) {
		veci = arg1;
	}
	else {
		veci = arg2;
	}

	std::cout << veci << std::endl << arg1 + arg2 << std::endl << arg1 - arg2 << std::endl << arg1 * arg2 << std::endl << arg1 / arg2 << std::endl;
}