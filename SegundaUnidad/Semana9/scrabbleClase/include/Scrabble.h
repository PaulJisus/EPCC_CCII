#ifndef SCRABBLE_H_
#define SCRABBLE_H_

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <random>

#include "Ficha.h"

class Scrabble
{
    public:
        Scrabble();
        Scrabble(std::string);
        void getFichas();
        char getLetra();
        int getValor();
        void print();
        ~Scrabble();
    private:
        std::string nombre;
        vector<Ficha> fichas;
};

#endif
