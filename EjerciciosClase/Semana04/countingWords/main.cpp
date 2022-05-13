#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    std::map<std::string, int> contador{};
    std::string palabra{};
    while(std::cin >> palabra)
        ++contador[palabra];
    for(auto element : contador)
        std::cout << element.first << '\t' << element.second << '\n';
    return 0;
}
