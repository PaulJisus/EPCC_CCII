#include <iostream>

#include "Racional.h"

using namespace std;

int main()
{
    try
    {
        Racional r;
        std::cout << r;
        Racional r1(1,4);
        std::cout << r1;
        r = r1;
        std::cout << r;
        r1.setRacional(1, 2);
        std::cout << r1;
        Racional r3;
        r3 = r1 + r;
        std::cout << r3;
        r3 = r - r1;
        std::cout << r3;
        r3 = r / r1;
        std::cout << r3;
        r3 = r1 / r;
        std::cout << r3;
        r /= r1;
        std::cout << r;
        std::cout << r.getDouble();
        Racional r4;
        std::cin >> r4;
        std::cout << r4;
        Racional r5(3, 0);
        std::cout << r5;
    }catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    return 0;
}
