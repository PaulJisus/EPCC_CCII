#include "Ficha.h"

Ficha::Ficha() = default;

Ficha::Ficha(char letra, int valor)
{
	this->letra = letra;
	this->valor = valor;
}
void Ficha::print()
{
	std::cout << "Letra: " << letra << "\t-\t";
	std::cout << "Valor: " << valor << std::endl;
}
Ficha::~Ficha()
{
}
