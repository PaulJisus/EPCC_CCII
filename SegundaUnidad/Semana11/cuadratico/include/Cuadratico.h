#ifndef CUADRATICO_H_
#define CUADRATICO_H_

#include <iostream>

class Cuadratico
{
    public:
        Cuadratico();
        Cuadratico(double, double, double);
        Cuadratico(const Cuadratico &);
        void setA(const double);
        double getA() const;
        void setB(const double);
        double getB() const;
        void setC(const double);
        double getC() const;
        void setCuadratico(const double, const double, const double);
        Cuadratico &operator= (const Cuadratico &);
        double operator()(double) const;
        ~Cuadratico();
    private:
        double a;
        double b;
        double c;
};

std::ostream& operator<< (std::ostream &, const Cuadratico &);

#endif
