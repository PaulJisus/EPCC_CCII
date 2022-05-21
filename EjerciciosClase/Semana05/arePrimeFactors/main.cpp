#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool prime(int);
bool arePrimeFactors(std::vector<int>&, int);

int main(){
    std::vector<int> numbers{};
    int n{}, n1{};
    std::cout << "Insert number: ";
    std::cin >> n1;
    std::cout << "Insert vector:\n";
    while (std::cin >> n)
    {
        numbers.push_back(n);
    }
    if(!arePrimeFactors(numbers, n1))
    {
        std::cout << "False.\n";
    }
    else
    {
        std::cout << "True.\n";
    }
    return 0;
}

bool prime(int n)
{
    bool is_prime = true;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for(int i{2}; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

bool arePrimeFactors(std::vector<int>& numbers, int n)
{
    bool aux = false;
    int product{1};
    for (unsigned i{0}; i < numbers.size(); i++)
    {
        product *= numbers[i];
        if(prime(numbers[i]))
        {
            aux = true;
        }
        else
        {
            aux = false;
        }
    }
    if(aux == true && product == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

