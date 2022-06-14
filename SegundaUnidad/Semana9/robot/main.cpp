#include <iostream>

#include "robot.h"

using namespace std;

bool verificar(vector<robot>);

int main()
{
    std::vector<robot> robots;
	for(int i{0}; i < 100; i++)
	{
		robots.push_back(robot());
	}
	std::cout << "Nombres Iniciales de los robots." << std::endl;
	for(int i{0}; i <= robots.size(); i++)
    {
		robots[i].print();
	}
	for(int i{0}; i <= robots.size(); i++)
    {
		robots[i].resetear();
	}
	std::cout << "Nombres de los robots luego del reseteo." << std::endl;
    for(int i{0}; i <= robots.size(); i++)
    {
		robots[i].print();
	}
	if(verificar(robots))
    {
        std::cout << "No se repiten los nombres.\n";
    }

}

bool verificar(vector<robot> aux)
{
	for(int i{0}; i <= aux.size(); i++)
    {
        for(int j{0}; j <= aux.size(); j++)
		{
			if (aux[i].getNombre() == aux[j].getNombre())
            {
				aux[j].resetear();
			}
		}
	}
	return true;
}
