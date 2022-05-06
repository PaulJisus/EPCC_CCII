#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    std::vector<int> numbers{};
    int n{};
    while (std::cin >> n)
    {
        numbers.push_back(n);
    }
    std::sort(numbers.begin(), numbers.end());
    std::cout << "\n\tNumbers in ascending order.\n";
    std::cout << "\t===========================\n";
    for(unsigned i = {0}; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << '\n';
    }
    return 0;
}
