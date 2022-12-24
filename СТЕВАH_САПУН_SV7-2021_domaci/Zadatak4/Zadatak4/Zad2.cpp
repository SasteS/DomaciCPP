#include <iostream>
#include "Zad2.h"

void zad2() {
	long fib = 0;
	int i = 0;
	long var1 = 0;
	long var2 = 1;

	while (fib >= 0 && fib <= LONG_MAX) { //posle 45 iteracije prekoraci long_max i predje da radi komplement 2 odnosno negativne zato mu stoji i uslov da je fib >= 0
		fib = var1 + var2;
		var1 = var2;
		var2 = fib;
		i++;
	}
	std::cout << "max broj: " << var1 << "; max iteracija: " << i - 1 << std::endl;
}