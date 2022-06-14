#include <iostream>

#include "diamante.h"

using namespace std;

int main()
{
    diamante d('A');
	std::cout << d.getForma();
	diamante d1('C');
	std::cout << d1.getForma();
	diamante d2('E');
	std::cout << d2.getForma();
    return 0;
}
