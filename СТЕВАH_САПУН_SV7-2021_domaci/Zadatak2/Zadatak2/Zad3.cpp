#include <iostream>
#include "Fun3.h"
#include <string>

int fun3(std::string arg) {
	try {
		if (arg.substr(0, 2) == "0x") {
			arg = arg.substr(2, arg.length()); //ako je hex bio 0xnesto skida mu samo 0x za laksu konverziju
		}
		else if (arg.substr(0, 1) == "-") {
			throw 10;
		}

		int a;
		int b;
		int temp;
		int stepen = 0;
		std::string Temp_string;

		for (int i = arg.length() - 1; i > -1; i--) //ide unazad korz string
		{
			Temp_string = arg.substr(i, 1); //izoluje samo jedan karakter koji ce da prebaci u odgovarajucu brojnu vrednost

			switch (arg[i]) //char vrednosti su celobrojne, caseovi gledaju ascii vrednosti karaktera
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

			if (i == arg.length() - 1) { //po logici konverzije iz hex u dec formira a
				a = temp;
			}
			else {
				a = a + std::pow(16, stepen) * temp;
			}
			stepen++;
		}

		if (a > UINT32_MAX || a < 0) {
			throw 10;
		}

		return a;
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