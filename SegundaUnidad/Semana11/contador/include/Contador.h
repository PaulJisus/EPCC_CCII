#ifndef CONTADOR_H_
#define CONTADOR_H_

#include <iostream>

class Contador
{
    public:
        Contador();
        Contador(int);
        Contador(const Contador &);
        int valor() const;
        Contador operator ++(int);
        Contador& operator ++();
        ~Contador();
        inline static unsigned int size;
    private:
        int contador;
};


std::ostream& operator<< (std::ostream &, const Contador &);

#endif
