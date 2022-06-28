#include <iostream>

#include "Tiempo.h"

using namespace std;

int main()
{
    Tiempo t(23, 34, 56);
    Tiempo t1(45, 56, 43);
    Tiempo t2;
    std::cout << t;
    std::cout << t1;
    t2 = t1 - t;
    std::cout << t2;
    if(t < t1)
    {
        std::cout << "Si.\n";
    }
    else
    {
        std::cout << "No.\n";
    }
    return 0;
}
