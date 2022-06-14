#ifndef REINAS_H
#define REINAS_H

#include <vector>
#include <iostream>
#include <string>

class reinas
{
    public:
        reinas();
        void setB(int, int);
        std::pair<int, int> getB();
        void setN(int, int);
        std::pair<int, int> getN();
        void posicionar();
        void moverB(int, int);
        void moverN(int, int);
        bool verificar();
        void print();
        ~reinas();
    private:
        std::string tablero;
        std::pair<int,int> B;
        std::pair<int,int> N;
};

#endif
