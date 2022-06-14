#include "reinas.h"

reinas::reinas()
{
    this->tablero = std::string(64, '_');
}

void reinas::setB(int x, int y)
{
    this->B = std::make_pair(x, y);
}

std::pair<int, int> reinas::getB()
{
    return this->B;
}

void reinas::setN(int x, int y)
{
    this->N = std::make_pair(x, y);
}

std::pair<int, int> reinas::getN()
{
    return this->N;
}

void reinas::posicionar()
{
    tablero[getB().first + getB().second * 8] = 'B';
    tablero[getN().first + getN().second * 8] = 'N';
}

void reinas::moverB(int x, int y)
{
    tablero[getB().first + getB().second * 8] = '_';
    setB(x, y);
    tablero[getB().first + getB().second * 8] = 'B';
}

void reinas::moverN(int x, int y)
{
    tablero[getN().first + getN().second * 8] = '_';
    setN(x, y);
    tablero[getN().first + getN().second * 8] = 'N';
}

void reinas::print()
{
		for(int i{}; i < 8; i++)
        {
			for(int j{}; j < 8; j++)
            {
                std::cout << tablero[j + i * 8] << " ";
            }
			std::cout << std::endl;
		}
		if(verificar())
        {
            std::cout << "Si se pueden atacar.\n";
        }
        else
        {
            std::cout << "No se pueden atacar.\n";
        }
}

bool reinas::verificar()
{
    if(getB().first == getN().first || getB().second == getN().second
       || abs(getB().first - getN().first) == abs(getB().second - getN().second))
    {
        return true;
    }
    else
    {
        return false;
    }
}

reinas::~reinas()
{
    //dtor
}
