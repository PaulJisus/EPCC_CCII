#ifndef ROBOT_H_
#define ROBOT_H_

#include <iostream>
#include <sstream>
#include <vector>
#include <random>
#include <chrono>

using namespace std;

class robot
{
    public:
        robot();
        char getLetra();
        int getValor();
        std::string getNombre();
        void resetear();
        void print();
        ~robot();
    private:
        std::string nombre;
};

#endif
