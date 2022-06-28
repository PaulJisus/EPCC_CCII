#include <iostream>

#include "Cuadratico.h"

using namespace std;

int main() {
    Cuadratico c;
    Cuadratico c1(2.4, 5.3, 7.8);
    c.setCuadratico(3, 5, 7);
    double f_0 = c(3);
    double g_0 = c1(5);
    std::cout << c;
    std::cout << "Resultado con x = 3\n" << f_0 << '\n';
    std::cout << c1;
    std::cout << "Resultado con x = 5\n" << g_0 << '\n';
}
