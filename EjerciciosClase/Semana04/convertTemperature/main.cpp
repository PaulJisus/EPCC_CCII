#include <iostream>
#include <iomanip>

void input();
double convert(double);
void output();

double celsius{}, fahrenheit{};

using namespace std;

int main()
{
    input();
    output();
    return 0;
}

void input()
{
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;
}

double convert(double celsius)
{
    fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
}

void output()
{
    std::cout << std::setprecision(1) << std::fixed << celsius << " C = " << convert(celsius) << " F\n";
}
