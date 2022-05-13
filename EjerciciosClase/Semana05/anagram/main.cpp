#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool anagram(std::string word1, std::string word2)
{
    int n1 = word1.length();
    int n2 = word2.length();
    if (n1 != n2)
        return false;
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    for (long long i = 0; i < n1; i++)
        if (word1[i] != word2[i])
            return false;
    return true;
}

int main()
{
    std::string word1 = "solo";
    std::string word2 = "oslo";
    if (anagram(word1, word2))
        std::cout << "Are anagram";
    else
        std::cout << "Aren't anagram";
    return 0;
}
