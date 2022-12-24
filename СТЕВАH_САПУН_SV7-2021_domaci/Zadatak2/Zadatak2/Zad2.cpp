#include <iostream>
#include "Fun2.h"
#include "Fun1.h"
#include <string>

std::string fun2(std::string hex1, std::string hex2) {
	try {
		if (hex1.substr(0, 2) == "0x" && hex2.substr(0, 2) == "0x") {
			hex1 = hex1.substr(2, hex1.length());
			hex2 = hex2.substr(2, hex2.length());
		}
		else if (hex1.substr(0, 1) == "-" || hex2.substr(0, 2) == "0x") {
			throw 10;
		}

		int a;
		int b;
		int temp;
		int stepen = 0;
		std::string Temp_string;

		for (int i = hex1.length() - 1; i > -1; i--) //ide unazad po stringu
		{
			Temp_string = hex1.substr(i, 1); //izoluje po jedan karakter

			switch (hex1[i])
			{
			case 65:
				temp = 10;
				break;
			case 66:
				temp = 11;
				break;
			case 67:
				temp = 12;
				break;
			case 68:
				temp = 13;
				break;
			case 69:
				temp = 14;
				break;
			case 70:
				temp = 15;
				break;
			case 97:
				temp = 10;
				break;
			case 98:
				temp = 11;
				break;
			case 99:
				temp = 12;
				break;
			case 100:
				temp = 13;
				break;
			case 101:
				temp = 14;
				break;
			case 102:
				temp = 15;
				break;
			default: //ukoliko je neki drugi karakter provera da li odgovara bkarakterima koji mogu da idu u hex broj
				if (Temp_string != "0" && Temp_string != "1" && Temp_string != "2" && Temp_string != "3" && Temp_string != "4" && Temp_string != "5" && Temp_string != "6" && Temp_string != "7" && Temp_string != "8" && Temp_string != "9") {
					throw 11;
				}
				temp = std::stoi(Temp_string);
				break;
			}

			if (i == hex1.length() - 1) {
				a = temp;
			}
			else {
				a = a + std::pow(16, stepen) * temp;
			}
			stepen++;
		}

		stepen = 0;
		for (int i = hex2.length() - 1; i > -1; i--) //radi isti postupak kao prethodna for samo za hex2
		{
			Temp_string = hex2.substr(i, 1);

			switch (hex2[i])
			{
			case 65:
				temp = 10;
				break;
			case 66:
				temp = 11;
				break;
			case 67:
				temp = 12;
				break;
			case 68:
				temp = 13;
				break;
			case 69:
				temp = 14;
				break;
			case 70:
				temp = 15;
				break;
			case 97:
				temp = 10;
				break;
			case 98:
				temp = 11;
				break;
			case 99:
				temp = 12;
				break;
			case 100:
				temp = 13;
				break;
			case 101:
				temp = 14;
				break;
			case 102:
				temp = 15;
				break;
			default:
				if (Temp_string != "0" && Temp_string != "1" && Temp_string != "2" && Temp_string != "3" && Temp_string != "4" && Temp_string != "5" && Temp_string != "6" && Temp_string != "7" && Temp_string != "8" && Temp_string != "9") {
					throw 11;
				}
				temp = std::stoi(Temp_string);
				break;
			}

			if (i == hex2.length() - 1) {
				b = temp;
			}
			else {
				b = b + std::pow(16, stepen) * temp;
			}
			stepen++;
		}
		return fun1(a + b);
	}
	catch (int x) {
		if (x == 10) {
			std::cout << "Value too large/too small.";
		}
		else if (x == 11) {
			std::cout << "Value cant contain non hex digits.";
		}
		else {
			std::cout << "Error.";
		}
	}
	return 0;
}