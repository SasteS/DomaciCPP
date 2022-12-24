#include <iostream>
#include "Fun1.h"
#include <string>

std::string fun1(unsigned int a) {
	if (a == 0) {
		return "0";
	}

	int ostatak;
	std::string s = "";

	while (a != 0) {
		ostatak = a % 16;
		a /= 16;

		switch (ostatak) //case swith - manuelni konverter u hex zapis, pravi string koji ima hex zapis prosledjenog broja
		{
		case 10:
			s = "A" + s;
			break;
		case 11:
			s = "B" + s;
			break;
		case 12:
			s = "C" + s;
			break;
		case 13:
			s = "D" + s;
			break;
		case 14:
			s = "E" + s;
			break;
		case 15:
			s = "F" + s;
			break;
		default:
			s = std::to_string(ostatak) + s;
			break;
		}
	}
	return s;
}