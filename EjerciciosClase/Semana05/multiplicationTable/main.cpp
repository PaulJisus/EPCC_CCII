#include <iostream>
#include <vector>

void input();
void multiplicationTable(std::vector<std::vector<int>>&, long long unsigned int, long long unsigned int);
void output(std::vector<std::vector<int>>&, long long unsigned int, long long unsigned int);

using namespace std;

int main()
{
    input();
    return 0;
}

void input()
{
    long long unsigned int multiplying{}, multiplier{};
    std::cout << "\nEnter the size of the multiplication table.\n";
    std::cout << "Enter the multiplying: ";
    std::cin >> multiplying;
    std::cout << "Enter the multiplier: ";
    std::cin >> multiplier;
    std::vector<std::vector<int>> product(multiplying + 1, std::vector<int>(multiplier + 1, 0));
    multiplicationTable(product, multiplying + 1, multiplier + 1);
    output(product, multiplying + 1, multiplier + 1);
}

void multiplicationTable(std::vector<std::vector<int>>& product, long long unsigned int multiplying, long long unsigned int multiplier)
{
    for(long long unsigned int i{1}; i < multiplying; i++)
    {
        for(long long unsigned int j{1}; j < multiplier; j++)
        {
            product[i][j] = i * j;
        }
    }
}

void output(std::vector<std::vector<int>>& product, long long unsigned int multiplying, long long unsigned int multiplier)
{
    long long unsigned int i{}, j{};
    std::cout << "*\t| ";
    for(j = 1; j < multiplier; j++)
    {
        std::cout << j << '\t';
    }
    std::cout << std::endl << "________|";
    for(j = 1; j < multiplying; j++)
    {
        std::cout << "________";
    }
    std::cout << std::endl;
    for(i = 1; i < multiplying; i++)
    {
        std::cout << i << "\t| ";
        for(j = 1; j < multiplier; j++)
        {
            std::cout << product[i][j] << '\t';
        }
        std::cout << '\n';
    }
}
