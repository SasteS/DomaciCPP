#include <iostream>
#include "Zad1.h"

void zad1() {
	int fib = 0;
	int i = 0;
	int var1 = 0;
	int var2 = 1;

	while (fib >= 0 && fib <= INT32_MAX) { //posle 45 iteracije prekoraci int_max i predje da radi komplement 2 odnosno negativne zato mu stoji i uslov da je fib >= 0
		fib = var1 + var2;
		var1 = var2;
		var2 = fib;
		i++;
	}
	std::cout << "max broj: " << var1 << "; max iteracija: " << i - 1 << std::endl;
}