#include <iostream>

#include "Domino.h"

using namespace std;

int main()
{
    Domino d1;
	d1.setFicha(5, 4);
	d1.setFicha(4, 8);
	d1.setFicha(8, 6);
	d1.setFicha(6, 5);
	std::cout << "Usted Tiene." << std::endl;
	d1.printFicha();
	d1.getCombinaciones();
	d1.printCombinaciones();
}
