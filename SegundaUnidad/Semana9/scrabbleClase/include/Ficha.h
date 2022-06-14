#ifndef FICHA_H_
#define FICHA_H_

#include <iostream>

using namespace std;

class Ficha
{
    public:
        Ficha();
        Ficha(char, int);
        void print();
        ~Ficha();
    private:
        char letra;
        int valor;
};

#endif
