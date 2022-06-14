#include <iostream>

#include "reinas.h"

using namespace std;

int main()
{
    reinas r;
	r.setB(2, 3);
	r.setN(3, 6);
	r.posicionar();
	r.print();
	r.moverB(2, 3);
	r.moverN(5, 6);
	r.print();
}
