#include "Tiempo.h"

Tiempo::Tiempo() = default;

Tiempo::Tiempo(int horas, int minutos, int segundos)
{
    this->horas = horas;
    this->minutos = minutos;
    this->segundos = segundos;
    reduce();
}

Tiempo::Tiempo(const Tiempo &o)
{
    this->horas = o.horas;
    this->minutos = o.minutos;
    this->segundos = o.segundos;
    reduce();
}

void Tiempo::setHoras(const int horas)
{
    this->horas = horas;
}

int Tiempo::getHoras() const
{
    return (this->horas);
}

void Tiempo::setMinutos(const int minutos)
{
    this->minutos = minutos;
}

int Tiempo::getMinutos() const
{
    return (this->minutos);
}

void Tiempo::setSegundos(const int segundos)
{
    this->segundos = segundos;
}

int Tiempo::getSegundos() const
{
    return (this->segundos);
}

int Tiempo::getTiempototal() const
{
    int aux{};
    aux += (getHoras() * 3600);
    aux += (getMinutos() * 60);
    aux += (getSegundos());
    return aux;
}

Tiempo Tiempo::operator+ (const Tiempo &o)
{
    int Horas{this->getHoras() + o.getHoras()};
    int Minutos{this->getMinutos() + o.getMinutos()};
    int Segundos{this->getSegundos() + o.getSegundos()};
    return Tiempo(Horas, Minutos, Segundos);
}

Tiempo Tiempo::operator- (const Tiempo &o)
{
    int Horas{this->getHoras() - o.getHoras()};
    int Minutos{this->getMinutos() - o.getMinutos()};
    int Segundos{this->getSegundos() - o.getSegundos()};
    return Tiempo(Horas, Minutos, Segundos);
}

bool Tiempo::operator== (const Tiempo &o)
{
    return(this->getTiempototal() == o.getTiempototal());
}

bool Tiempo::operator!= (const Tiempo &o)
{
    return !(this->getTiempototal() == o.getTiempototal());
}

bool Tiempo::operator> (const Tiempo &o)
{
    return (this->getTiempototal() > o.getTiempototal());
}

bool Tiempo::operator>= (const Tiempo &o)
{
    return (this->getTiempototal() >= o.getTiempototal());
}

bool Tiempo::operator< (const Tiempo &o)
{
    return (this->getTiempototal() < o.getTiempototal());
}

bool Tiempo::operator<= (const Tiempo &o)
{
    return (this->getTiempototal() <= o.getTiempototal());
}

void Tiempo::reduce()
{
    int aux{getTiempototal()};
    if(aux >= 0)
    {
        setSegundos(aux % 60);
        aux /= 60;
        setMinutos(aux % 60);
        aux /= 60;
        if(aux > 24)
        {
            setHoras(aux % 24);
        }
        else
        {
            setHoras(aux);
        }
    }
    else
    {
        setSegundos(60 + aux % 60);
        aux /= 60;
        setMinutos(59 + aux % 60);
        aux /= 60;
        if(aux > -24)
        {
            setHoras(23 + aux);
        }
        else
        {
            setHoras(23 + aux % 24);
        }
    }
}

Tiempo::~Tiempo()
{

}

std::ostream& operator<< (std::ostream &output, const Tiempo &o)
{
    output << "Formato de 24 horas:\n" <<
    o.getHoras() << ':' << o.getMinutos() << ':' << o.getSegundos() << '\n'
    << "Formato de 12 horas:\n";
    if(o.getHoras() > 12)
    {
        output << o.getHoras() % 12 << ':' <<  o.getMinutos() << ':' << o.getSegundos() << " PM.\n";
    }
    else
    {
        output << o.getHoras() << o.getMinutos() << o.getSegundos() << " AM.\n";
    }
    return output;
}
