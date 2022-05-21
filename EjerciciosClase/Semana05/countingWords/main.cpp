#include <iostream>
#include <string>
#include <map>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    std::map<std::string, int> contador{};
    std::string palabra{};
    while(std::cin >> palabra)
    {
        std::string auxiliar{};
        for(char c : palabra)
        {
            if(std::isalnum(c, std::locale{""}))
            {
                auxiliar.push_back(c);
            }
        }
        if(!auxiliar.empty())
        {
            ++contador[palabra];
        }
    }

    std::string::size_type largo{0};
    for (auto pair : contador)
    {
        if (pair.first.size() > largo)
        {
            largo = pair.first.size();
        }
    }

    constexpr int tam_cont{10};
    for(auto pair : contador)
    {
        std::cout << setw(tam_cont) << pair.first << setw(tam_cont) << pair.second << '\n';
    }

    return 0;
}
