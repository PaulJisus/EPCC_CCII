#include <iostream>

using namespace std;

void countdown(int);
void countdownR(int, int);

int main()
{
    int n{}, m{};
    std::cin >> n;
    countdown(n);
    countdownR(n, m);
    return 0;
}

void countdown(int n)
{
    if(n == 0)
    {
        std::cout << "Blastoff!\n";
    }
    else
    {
        std::cout << n << '\n';
        countdown(n - 1);
    }
}

void countdownR(int n, int m)
{
    if(m == n)
    {
        std::cout << m << std::endl;
    }
    else
    {
        std::cout << m << std::endl;
        countdownR(n, ++m);
    }

}
