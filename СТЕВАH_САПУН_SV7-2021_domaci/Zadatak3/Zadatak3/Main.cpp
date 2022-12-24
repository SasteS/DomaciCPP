#include <iostream>
#include "Int.h"
#include "Double.h"
#include "Short.h"

int main() {
	try {
		std::string tip;

		std::cout << "Unesite jedno od tri znaka:" << std::endl << "i za int" << std::endl << "s za short" << std::endl << "d za double" << std::endl;
		std::cin >> tip;

		if (tip == "i") {
			int var1, var2;
			std::cin >> var1 >> var2;
			if (std::cin.fail()) {
				throw 10;
			}

			IntType(var1, var2);
		}
		else if (tip == "s") {
			short var1, var2;
			std::cin >> var1 >> var2;
			if (std::cin.fail()) {
				throw 10;
			}

			ShortType(var1, var2);
		}
		else if (tip == "d") {
			double var1, var2;
			std::cin >> var1 >> var2;
			if (std::cin.fail()) {
				throw 10;
			}

			DoubleType(var1, var2);
		}
		else {
			throw 11;
		}
	}
	catch (int x) {
		if (x == 10) {
			std::cout << "1. Values must be of same type." << std::endl << "2. Values must be of fitting type." << std::endl;
		}
		else if (x == 11) {
			std::cout << "Tip must be of eighter i, s or d.";
		}
	}

	return 0;
}