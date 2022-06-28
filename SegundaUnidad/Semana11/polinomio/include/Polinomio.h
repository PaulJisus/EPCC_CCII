#ifndef POLINOMIO_H_
#define POLINOMIO_H_

#include <iostream>
#include <vector>

template <typename T>
class Polinomio
{
    public:
        Polinomio<T>();
        ~Polinomio<T>();
    private:
        int grado;
        vector<T> coeficiente;
};

#endif
