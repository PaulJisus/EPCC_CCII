#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

void input();
void letterHist(std::string);

int main()
{
    input();
    return 0;
}

void input()
{
    std::string word{};
    std::cout << "Enter the first word:\n";
    getline(std::cin, word);
    word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
    letterHist(word);
}

void letterHist(std::string word)
{
    std::map<char, int> abcd{};
    for(int i{65}; i <= 90; i++)
    {
        ++abcd[i];
    }
    transform(word.begin(), word.end(), word.begin(), [](unsigned char d){ return toupper(d); });
    sort(word.begin(), word.end());
    for(char c : word)
    {
        if(std::isalpha(c))
        {
            ++abcd[c];
        }
    }
    for(auto pair: abcd)
    {
        std::cout << pair.first << "| ";
        for(int i{1}; i < pair.second; i++)
        {
            std::cout << "=";
        }
        std::cout << std::endl;
    }
}
