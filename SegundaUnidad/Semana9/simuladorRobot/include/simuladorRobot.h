#ifndef SIMULADORROBOT_H_
#define SIMULADORROBOT_H_

#include <iostream>
#include <string>

class simuladorRobot
{
    public:
        simuladorRobot();
        simuladorRobot(int, int, std::string);
        void setPosicion(std::string);
        std::string getPosicion();
        void Derecha();
        void Izquierda();
        void Avanzar();
        void Direccion(std::string);
        void Print();
        ~simuladorRobot();
    private:
        int x;
        int y;
        std::string posicion;
};

#endif
