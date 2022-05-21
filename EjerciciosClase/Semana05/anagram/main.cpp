#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool anagram(std::string, std::string);

int main()
{
    std::string word1{};
    std::string word2{};
    std::cout << "Enter the first word:\n";
    getline(std::cin, word1);
    std::cout << "Enter the second word:\n";
    getline(std::cin, word2);
    word1.erase(std::remove(word1.begin(), word1.end(), ' '), word1.end());
    word2.erase(std::remove(word2.begin(), word2.end(), ' '), word2.end());
    if (anagram(word1, word2))
    {
        std::cout << "Are anagram";
    }
    else
    {
        std::cout << "Aren't anagram";
    }
    return 0;
}

bool anagram(std::string word1, std::string word2)
{
    if (word1.length() != word2.length())
    {
        return false;
    }
    transform(word1.begin(), word1.end(), word1.begin(), [](unsigned char c){ return toupper(c); });
    transform(word2.begin(), word2.end(), word2.begin(), [](unsigned char d){ return toupper(d); });
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    for (long long unsigned int i{0}; i < word1.length(); i++)
    {
        if (word1[i] != word2[i])
        {
            return false;
        }
    }
    return true;
}
