#include <iostream>
#include <random>

void input();
int generaterandom();
void output();

int number{};

using namespace std;

int main()
{
    input();
    output();
    return 0;
}

void input()
{
    std::cout << "\nI'm thinking of a number between 1 and 100(including both).\n";
    std::cout << "Can you guess what it is\n";
    std::cout << "Type a number: ";
    std::cin >> number;
}

int generaterandom()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);
    return distr(eng);
}

void output()
{
    int random = generaterandom();
    std::cout << "Your guess is: " << number;
    std::cout << "\nThe number I was thinking of is: " << random;
    if(number > random)
    {
        std::cout << "\nYou were off by: " << number - random << '\n';
    }
    else if(number < random)
    {
        std::cout << "\nYou were close by: " << random - number << '\n';
    }
    else
    {
        std::cout << "\nWe think the same number\n";
    }
}
