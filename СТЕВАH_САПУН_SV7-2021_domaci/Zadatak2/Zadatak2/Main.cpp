#include <iostream>
#include "Fun1.h"
#include "Fun3.h"
#include "Fun2.h"

int main() {

	try {
		//drugi pod a
		std::cout << "Unesite broj: ";
		unsigned long long int a;
		std::cin >> a;

		if (a > 4294967295) { // s obzirom da je trazen neoznaceni integer uzimanjem unsigned long long inta se moze dobiti veca vrednost od obicnog opsega inta te ako uneti broj predje preko maksimalnog broja uinta baca se exception
			throw 10;
		}
		else if (std::cin.fail()) {
			throw 11;
		}

		std::cout << "hex: 0x" << fun1(a) << std::endl << std::endl;

		//drugi pod b
		std::string hex1;
		std::string hex2;

		std::cout << "Unesite broj(hex): ";
		std::cin >> hex1;
		std::cout << "Unesite broj(hex): ";
		std::cin >> hex2;
		std::cout << "zbir: 0x" << fun2(hex1, hex2) << std::endl << std::endl;

		//drugi pod c
		std::cout << "Unesite broj(hex): ";
		std::cin >> hex1;
		std::cout << "int: " << fun3(hex1);
	}
	catch (int x) {
		if (x == 10) {
			std::cout << "Out of bounds of unsigned int range [0 - 4294967295 (0xffffffff)].";
		}
		else if (x == 11) {
			std::cout << "Number expexcted.";
		}
		else {
			std::cout << "Error";
		}
	}
	return 0;
}