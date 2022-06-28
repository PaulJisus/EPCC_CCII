#include <iostream>

#include "Contador.h"

using namespace std;

int main()
{
    Contador c(7);
    std::cout << c;
    c++;
    std::cout << c;
    std::cout << c.size << std::endl;
    Contador c1;
    std::cout << c1;
    c1++;
    std::cout << c1;
    std::cout << Contador::size;
    return 0;
}
