#include <iostream>
#include <string>
#include <map>
#include <locale>

using namespace std;

int main()
{
    using str_size = std::string::size_type;
    using count_map = std::map<std::string, int>;
    count_map contador{};
    std::string palabra{};
    while(std::cin >> palabra)
    {
        std::string auxiliar{};
        for(char c : palabra)
        {
            if(std::isalnum(c, std::locale{" "}))
                auxiliar.push_back(c);
        }
        if(not auxiliar.empty())
            ++contador[palabra];
    }

     str_size largo{0};
     for (auto pair : contador)
        if (pair.first.size() > largo)
            largo = pair.first.size();

    for(auto pair : contador)
        std::cout << pair.first << '\t' << pair.second << '\n';
    return 0;
}
