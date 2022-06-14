#include <iostream>

#include "simuladorRobot.h"

using namespace std;

int main()
{
    std::cout << "Posicion inicial del robot" << std::endl;
	simuladorRobot r1(7, 3, "Norte");
	r1.Print();
	std::cout << "Posicion final del robot" << std::endl;
	r1.Direccion("DAAIAI");
	r1.Print();
}
