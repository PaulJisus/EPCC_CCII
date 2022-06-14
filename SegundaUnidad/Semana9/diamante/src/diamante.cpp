#include "diamante.h"

diamante::diamante()
{
    this->letra = 'A';
}

diamante::diamante(char letra)
{
    this->letra = letra;
}

std::string diamante::getForma()
{
    std::string forma{};
	std::stringstream ss{};
	int aux = letra - 65, temp{};
	char c = 65;
	while (c <= letra)
	{
		for (int i{0}; i < aux; i++)
        {
			ss << '*';
        }
		if (temp > 0)
		{
			ss << c;
			for (int j{0}; j < temp; j++)
            {
                ss << '*';
            }
			ss << c;
			temp++;
		}
		else
        {
            ss << c;
        }
		for (int j = 0; j < aux; j++)
        {
            ss << '*';
        }
		ss << std::endl;
		aux--;
		temp++;
		c++;
	}
	c -= 2;
	aux = 1;
	temp -= 4;
	while (c >= 'A')
	{
		for (int i{0}; i < aux; i++)
        {
            ss << '*';
        }
		if (temp > 0)
		{
			ss << c;
			for (int j{0}; j < temp; j++)
            {
                ss << '*';
            }
			ss << c;
			temp--;
		}
		else
        {
            ss << c;
        }
		for (int i{0}; i < aux; i++)
        {
            ss << '*';
        }
		ss << std::endl;
		aux++;
		temp--;
		c--;
	}
	ss << std::endl;
	forma = ss.str();
	return forma;
}

diamante::~diamante()
{

}
