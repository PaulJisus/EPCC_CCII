#include "Contador.h"

Contador::Contador()
{
    this->contador = 0;
    this->size++;
}

Contador::Contador(int contador)
{
    this->contador = contador;
    this->size++;
}

Contador::Contador(const Contador &o)
{
    this->contador = o.contador;
    this->size++;
}

int Contador::valor() const
{
    return this->contador;
}

Contador& Contador::operator++()
{
    ++contador;
    return *this;
}

Contador Contador::operator++(int)
{
    Contador aux = *this;
    ++*this;
    return aux;
}

Contador::~Contador()
{
    this->size--;
}

std::ostream& operator<< (std::ostream &output, const Contador &o)
{
    output << o.valor() << '\n';
    return output;
}
