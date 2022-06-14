#include "robot.h"

    auto eng = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine gen(eng);
    uniform_int_distribution<char> rand_ascii('A','Z');
    uniform_int_distribution<> rand_digits(100, 999);


robot::robot()
{
    nombre = getNombre();
}

char robot::getLetra()
{
    return rand_ascii(gen);
}

int robot::getValor()
{
    return rand_digits(gen);
}

std::string robot::getNombre()
{
    std::stringstream ss;
    ss << getLetra() << getLetra() << getLetra() << getValor();
    string nombre = ss.str();
    return nombre;
}

void robot::resetear()
{
    this->nombre = getNombre();
}

void robot::print()
{
    std::cout << "Nombre: " << getNombre() << std::endl;
}

robot::~robot()
{

}
