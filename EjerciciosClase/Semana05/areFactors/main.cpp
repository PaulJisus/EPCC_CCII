#include <iostream>
#include <vector>

using namespace std;

bool areFactors(std::vector<int>&, int);

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
    if(!areFactors(numbers, n1))
    {
        std::cout << "No divisible.\n";
    }
    else
    {
        std::cout << "Divisible.\n";
    }
    return 0;
}

bool areFactors(std::vector<int>& numbers, int n)
{
    bool aux = false;
    for (unsigned i{0}; i < numbers.size(); i++)
    {
        if(numbers[i] % n == 0)
        {
            aux = true;
        }
        else
        {
            aux = false;
        }
    }
    return aux;
}
