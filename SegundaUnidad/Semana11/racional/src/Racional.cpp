#include "Racional.h"

#include <numeric>

Racional::Racional()
{
    this->numerador = 0;
    this->denominador = 1;
}

Racional::Racional(int numerador, int denominador)
{
    if(denominador == 0)
    {
        throw std::invalid_argument("The denominator cannot be zero.\n");
    }
    else
    {
        this->numerador = numerador;
        this->denominador = denominador;
        reduce();
    }
}

Racional::Racional(const Racional &o)
{
    if(o.denominador == 0)
    {
        throw std::invalid_argument("The denominator cannot be zero.\n");
    }
    else
    {
        this->numerador = o.numerador;
        this->denominador = o.denominador;
        reduce();
    }
}

int Racional::getNumerador() const
{
    return this->numerador;
}

int Racional::getDenominador() const
{
    return this->denominador;
}

void Racional::setRacional(const int numerador = 0, const int denominador = 1)
{
    if(denominador == 0)
    {
        throw std::invalid_argument("The denominator cannot be zero.\n");
    }
    else
    {
        this->numerador = numerador;
        this->denominador = denominador;
        reduce();
    }
}

double Racional::getDouble() const
{
    double aux_n{(double)this->getNumerador()};
    double aux_d{(double)this->getDenominador()};
    return (aux_n / aux_d);
}

void Racional::reduce()
{
    if(getDenominador() < 0)
    {
        this->numerador = -getNumerador();
        this->denominador = -getDenominador();
    }
    int mcd{std::gcd(getNumerador(), getDenominador())};
    this->numerador = getNumerador() / mcd;
    this->denominador = getDenominador() / mcd;
}

Racional& Racional::operator= (const Racional &o)
{
    if(this == &o)
    {
        return *this;
    }
    this->numerador = o.getNumerador();
    this->denominador = o.getDenominador();
    return *this;
}

Racional Racional::operator+ (const Racional &o)
{
    Racional aux;
    if(this->getDenominador() == o.getDenominador())
    {
        aux.setRacional(this->getNumerador() + o.getNumerador(), this->getDenominador());
    }
    else
    {
        int mcm{std::lcm(this->getDenominador(), o.getDenominador())};
        int numerador_1{(mcm / this->getDenominador()) * this->getNumerador()};
        int numerador_2((mcm / o.getDenominador()) * o.getNumerador());
        aux.setRacional(numerador_1 + numerador_2, mcm);
    }
    aux.reduce();
    return aux;
}

Racional Racional::operator- (const Racional &o)
{
    Racional aux;
    if(this->getDenominador() == o.getDenominador())
    {
        aux.setRacional(this->getNumerador() - o.getNumerador(), this->getDenominador());
    }
    else
    {
        int mcm{std::lcm(this->getDenominador(), o.getDenominador())};
        int numerador_1{(mcm / this->getDenominador()) * this->getNumerador()};
        int numerador_2((mcm / o.getDenominador()) * o.getNumerador());
        aux.setRacional(numerador_1 - numerador_2, mcm);
    }
    aux.reduce();
    return aux;
}

Racional Racional::operator* (const Racional &o)
{
    Racional aux;
    aux.setRacional(this->getNumerador() * o.getNumerador(), this->getDenominador() * o.getDenominador());
    aux.reduce();
    return aux;
}

Racional Racional::operator/ (const Racional &o)
{
    Racional aux;
    aux.setRacional(this->getNumerador() * o.getDenominador(), o.getNumerador() * this->getDenominador());
    aux.reduce();
    return aux;
}

Racional& Racional::operator+= (const Racional &o)
{
    if(this->getDenominador() == o.getDenominador())
    {
        this->setRacional(this->getNumerador() + o.getNumerador(), this->getDenominador());
    }
    else
    {
        int mcm{std::lcm(this->getDenominador(), o.getDenominador())};
        int numerador_1{(mcm / this->getDenominador()) * this->getNumerador()};
        int numerador_2((mcm / o.getDenominador()) * o.getNumerador());
        this->setRacional(numerador_1 + numerador_2, mcm);
    }
    this->reduce();
    return *this;
}

Racional& Racional::operator-= (const Racional &o)
{
    if(this->getDenominador() == o.getDenominador())
    {
        this->setRacional(this->getNumerador() - o.getNumerador(), this->getDenominador());
    }
    else
    {
        int mcm{std::lcm(this->getDenominador(), o.getDenominador())};
        int numerador_1{(mcm / this->getDenominador()) * this->getNumerador()};
        int numerador_2((mcm / o.getDenominador()) * o.getNumerador());
        this->setRacional(numerador_1 - numerador_2, mcm);
    }
    this->reduce();
    return *this;
}

Racional& Racional::operator*= (const Racional &o)
{
    this->setRacional(this->getNumerador() * o.getNumerador(), this->getDenominador() * o.getDenominador());
    this->reduce();
    return *this;
}

Racional& Racional::operator/= (const Racional &o)
{
    this->setRacional(this->getNumerador() * o.getDenominador(), o.getNumerador() * this->getDenominador());
    this->reduce();
    return *this;
}

Racional::~Racional()
{

}

std::ostream& operator<< (std::ostream &output, const Racional &o)
{
    output << o.getNumerador() << '/' << o.getDenominador() << '\n';
    return output;
}

std::istream& operator>> (std::istream &input, Racional &o)
{
    std::cout << "\nIngrese un numero racional (numerador / denominador):" << std::endl;
    int numerador{0}, denominador{0};
    char sep{'\0'};
    if (not (input >> numerador >> sep))
    {
        input.setstate(std::ios::failbit);
    }
    else if (sep != '/')
    {
        input.unget();
        o.setRacional(numerador);
    }
    else if(input >> denominador)
    {
        o.setRacional(numerador, denominador);
    }
    else
    {
        input.setstate(std::ios::failbit);
    }
    return input;
}
