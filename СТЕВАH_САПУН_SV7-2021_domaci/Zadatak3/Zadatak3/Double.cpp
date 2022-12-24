#include <iostream>
#include "Double.h"

void DoubleType(double arg1, double arg2) {
	double veci;
	if (arg1 > arg2) {
		veci = arg1;
	}
	else {
		veci = arg2;
	}

	std::cout << veci << std::endl << arg1 + arg2 << std::endl << arg1 - arg2 << std::endl << arg1 * arg2 << std::endl << arg1 / arg2 << std::endl;
}