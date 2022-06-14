#include "simuladorRobot.h"

simuladorRobot::simuladorRobot() = default;

simuladorRobot::simuladorRobot(int x, int y, std::string posicion)
{
	this->x = x;
	this->y = y;
	this->posicion = posicion;
}

void simuladorRobot::setPosicion(std::string posicion)
{
    this->posicion = posicion;
}

std::string simuladorRobot::getPosicion()
{
    return(this->posicion = posicion);
}

void simuladorRobot::Derecha()
{
	if(getPosicion() == "Oeste")
    {
		setPosicion("Norte");
	}
	else if(getPosicion() == "Norte")
    {
		setPosicion("Este");
	}
	else if(getPosicion() == "Este")
    {
		setPosicion("Sur");
	}
	else
    {
		setPosicion("Oeste");
	}
}
void simuladorRobot::Izquierda()
{
	if(getPosicion() == "Oeste")
    {
		setPosicion("Sur");
	}
	else if(getPosicion() == "Sur")
    {
		setPosicion("Este");
	}
	else if(getPosicion() == "Este")
    {
		setPosicion("Norte");
	}
	else
    {
		setPosicion("Oeste");
	}
}
void simuladorRobot::Avanzar()
{
	if(getPosicion() == "Oeste")
    {
		x--;
	}
	else if(getPosicion() == "Norte")
    {
        y++;
	}
	else if(getPosicion() == "Este")
    {
		x++;
	}
	else
    {
		y--;
	}
}
void simuladorRobot::Direccion(std::string direccion)
{
	for(int i{}; i < direccion.length(); i++)
    {
		if(direccion[i] == 'D')
		{
			Derecha();
		}
		else if(direccion[i] == 'I')
		{
			Izquierda();
		}
		else if(direccion[i] == 'A')
		{
			Avanzar();
		}
        else
        {
            std::cout << "Instruccion no valida.\n";
        }
	}
}
void simuladorRobot::Print()
{
	std::cout << "{ " << x << " , " << y <<  " }" << " mirando al "<< posicion << std::endl;
}

simuladorRobot::~simuladorRobot()
{

}
