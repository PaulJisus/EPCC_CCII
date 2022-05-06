#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int MaxProduct (std::vector<int>& numbers){
    int max{numeric_limits<int>::min()};
    int max_2{numeric_limits<int>::min()};
    for (unsigned i = {0}; i < numbers.size(); i++){
        if (numbers[i] > max){
            max_2 = max;
            max = numbers[i];
        }
        else if(numbers[i] > max_2 && numbers[i] != max)
        {
            max_2 = numbers[i];
        }
    }
    return max * max_2;
}

int main(){
    std::vector<int> numbers{};
    int n{};
    while (std::cin >> n)
    {
        numbers.push_back(n);
    }
    if(numbers.size() < 2)
    {
        std::cout << "You cannot find two numbers in an array of size less than two.\n";
    }
    std::cout << MaxProduct(numbers) << "\n";
    return 0;
}
