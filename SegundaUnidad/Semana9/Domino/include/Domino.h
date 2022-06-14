#ifndef DOMINO_H_
#define DOMINO_H_

#include <vector>
#include <iostream>
#include <algorithm>

class Domino
{
    public:
        Domino();
        void setFicha(int, int);
        void printFicha();
        void getCombinaciones();
        void printCombinaciones();
        ~Domino();
    private:
        std::vector<std::pair<int, int>> ficha;
        std::vector<std::vector<std::pair<int, int>>> combinaciones;
};

#endif
