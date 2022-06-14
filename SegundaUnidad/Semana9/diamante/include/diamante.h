#ifndef DIAMANTE_H_
#define DIAMANTE_H_

#include <iostream>
#include<sstream>
#include<string>

class diamante
{
    public:
        diamante();
        diamante(char);
        std::string getForma();
        ~diamante();
    private:
        char letra;
};

#endif
