#ifndef RACIONAL_H_
#define RACIONAL_H_

#include <iostream>

class Racional
{
    public:
        Racional();
        Racional(int, int);
        Racional(Racional const &);
        int getDenominador() const;
        int getNumerador() const;
        void setRacional(const int, const int);
        double getDouble() const;
        Racional &operator= (const Racional &);
        Racional operator+ (const Racional &);
        Racional operator- (const Racional &);
        Racional operator* (const Racional &);
        Racional operator/ (const Racional &);
        Racional &operator+= (const Racional &);
        Racional &operator-= (const Racional &);
        Racional &operator*= (const Racional &);
        Racional &operator/= (const Racional &);
        ~Racional();
    private:
        void reduce();
        int numerador;
        int denominador;
};

std::ostream& operator<< (std::ostream &, const Racional &);
std::istream& operator>> (std::istream &, Racional &);

#endif
