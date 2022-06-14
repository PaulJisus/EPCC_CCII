#include "Scrabble.h"

    auto eng = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine gen(eng);
    uniform_int_distribution<char> rand_ascii('A','Z');
    uniform_int_distribution<> rand_digits(1,100);

Scrabble::Scrabble() = default;

Scrabble::Scrabble(std::string nombre)
{
	this->nombre = nombre;
}
void Scrabble::getFichas()
{
    for(unsigned int i{0}; i < 7; i++)
    {
			Ficha aux(getLetra(), getValor());
			fichas.push_back(aux);
    }
}

char Scrabble::getLetra()
{
    return rand_ascii(gen);
}

int Scrabble::getValor()
{
    return rand_digits(gen);
}

void Scrabble::print()
{
	std::cout<<"Nombre del jugador: " << nombre << std::endl;
	for(Ficha &i: fichas)
    {
		i.print();
	}
}

Scrabble::~Scrabble()
{
    //dtor
}
