#ifndef TIEMPO_H_
#define TIEMPO_H_

#include <iostream>

class Tiempo
{
    public:
        Tiempo();
        Tiempo(int, int, int);
        Tiempo(const Tiempo &);
        void setHoras(const int);
        int getHoras() const;
        void setMinutos(const int);
        int getMinutos() const;
        void setSegundos(const int);
        int getSegundos() const;
        int getTiempototal() const;
        void reduce();
        Tiempo operator+ (const Tiempo &);
        Tiempo operator- (const Tiempo &);
        bool operator== (const Tiempo &);
        bool operator!= (const Tiempo &);
        bool operator> (const Tiempo &);
        bool operator>= (const Tiempo &);
        bool operator< (const Tiempo &);
        bool operator<= (const Tiempo &);
        ~Tiempo();
    private:
        int horas;
        int minutos;
        int segundos;
};

std::ostream& operator<< (std::ostream &, const Tiempo &);

#endif
