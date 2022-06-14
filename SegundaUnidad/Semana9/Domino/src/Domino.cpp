#include "Domino.h"

Domino::Domino() = default;

void Domino::setFicha(int x, int y)
{
    auto f = std::make_pair(x, y);
    ficha.push_back(f);
}

void Domino::printFicha()
{
    for (auto i : ficha)
    {
        std::cout << '[' << i.first << " | " << i.second << ']' << std::endl;
    }
}

void Domino::getCombinaciones()
{
    bool flag = false;
    do {
        for (auto i{0}; i < ficha.size() - 1; i++)
        {
            if (ficha[i].second != ficha[i + 1].first)
            {
                flag = true;
            }
        }
        if(ficha.front().first != ficha.back().second)
        {
            flag = true;
        }
        if (!flag)
        {
            combinaciones.push_back(ficha);
        }
        flag = false;
		}
		while (std::next_permutation(ficha.begin(), ficha.end()));
}

void Domino::printCombinaciones()
{
    std::cout << "Combinaciones:" << std::endl;
    if (combinaciones.size() > 0)
    {
        for (auto i : combinaciones)
        {
            std::cout << "Combinacion." << std::endl;
            for (auto j : i)
            {
                std::cout << '[' << j.first << " | " << j.second << ']' << std::endl;
            }
        }
    }
    else
    {
        std::cout << "Imposible combinar." << std::endl;
    }
}

Domino::~Domino()
{
    //dtor
}
