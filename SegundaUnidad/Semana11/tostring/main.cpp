#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template<typename T>
std::string to_string(const T &valor)
{
    std::stringstream ss;
    ss << valor << "\n";
    return ss.str();
}

int main()
{
    std::string a{"dfhgfhdfgs"};
    std::cout << to_string(a);
    std::vector<int> arr(10, 5);
    for (auto i{arr.begin()}; i < arr.end(); i++)
    {
        std::cout << to_string(*i);
    }
    return 0;
}
