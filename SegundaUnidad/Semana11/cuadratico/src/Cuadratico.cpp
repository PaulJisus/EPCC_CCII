#include "Cuadratico.h"

Cuadratico::Cuadratico()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
}

Cuadratico::Cuadratico(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

Cuadratico::Cuadratico(const Cuadratico &o)
{
    this->a = o.a;
    this->b = o.b;
    this->c = o.c;
}

Cuadratico& Cuadratico::operator= (const Cuadratico &o)
{
    if(this == &o)
    {
        return *this;
    }
    this->a = o.a;
    this->b = o.b;
    this->c = o.c;
    return *this;
}

void Cuadratico::setA(const double a)
{
    this->a = a;
}

double Cuadratico::getA() const
{
    return (this->a);
}

void Cuadratico::setB(const double b)
{
    this->b = b;
}

double Cuadratico::getB() const
{
    return (this->b);
}

void Cuadratico::setC(const double c)
{
    this->c = c;
}

double Cuadratico::getC() const
{
    return (this->c);
}

void Cuadratico::setCuadratico(const double a, const double b, const double c)
{
    setA(a);
    setB(b);
    setC(c);
}

double Cuadratico::operator()(double x) const
{
    return((this->getA()*(x * x)) + (this->getB() * x) + (this->getC()));
}

Cuadratico::~Cuadratico()
{

}

std::ostream& operator<< (std::ostream &output, const Cuadratico &o)
{
    output << "f(x)= ( " << o.getA() << "x^2 + " << o.getB() << "x + " << o.getC() << " )\n";
    return output;
}
