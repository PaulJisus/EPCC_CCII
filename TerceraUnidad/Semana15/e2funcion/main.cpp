#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

float sumafi(float a, int b)
{
    return a + b;
}

double restalf(float a, double b)
{
    return a - b;
}

long multiplicaid(int a, long b)
{
    return a * b;
}

template<typename T, typename U, typename V>
T funcion(T (*operacion)(U, V), U a, V b)
{
	return operacion(a, b);
}

int main()
{
    auto aux = std::setprecision(std::numeric_limits<long double>::digits10 + 1);
	std::cout << "Suma: " << aux << fixed << funcion(sumafi, 4.0f, 5) << std::endl;
	std::cout << "Resta: " << fixed << funcion(restalf, 4.0f, 5.0) << std::endl;
	std::cout << "Multiplicacion: " << funcion(multiplicaid, 4, 5L) << std::endl;
    return 0;
}
