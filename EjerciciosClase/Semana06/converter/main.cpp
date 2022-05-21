#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void input();
int decimaltobinary(std::vector<int>&, int);
int binarytodecimal(std::vector<int>&, int);
void output(std::vector<int>&);

int main()
{
    input();
    return 0;
}

void input()
{
    int number{};
    std::cout << "Insert Decimal Number:\n";
    std::cin >> number;
    vector<int> numbers;
    decimaltobinary(numbers, number);
    std::cout << "\nBinary:\n";
    output(numbers);
    std::cout << "\nDecimal:\n" << binarytodecimal(numbers, 0);
}

int decimaltobinary(std::vector<int>& numbers, int number)
{
    if(number == 1 || number == 0)
    {
        numbers.push_back(number);
        return 0;
    }
    else
    {
        numbers.push_back(number % 2);
        return (decimaltobinary(numbers, number / 2));
    }
}

void output(std::vector<int>& numbers)
{
    std::reverse(numbers.begin(), numbers.end());
    for(unsigned i{0}; i < numbers.size(); i++)
    {
        std::cout << numbers[i];
    }
    std::cout << std::endl;
}

int binarytodecimal(std::vector<int>& numbers, int n)
{
    if(numbers.size() == 0)
    {
        return n;
    }
    else
    {
        n += numbers.front()*(pow(2, numbers.size() - 1));
        numbers.erase(numbers.begin());
        return(binarytodecimal(numbers, n));
    }
}
