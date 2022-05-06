#include <iostream>

void input();
void multiplicationTable();

int n{};

using namespace std;

int main()
{
    input();
    multiplicationTable();
    return 0;
}

void input()
{
    std::cout << "\nEnter multiplication table size: ";
    std::cin >> n;
}

void multiplicationTable()
{
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            std::cout << ' ' << i * j << ' ';
        }
        std::cout << '\n';
    }
}
