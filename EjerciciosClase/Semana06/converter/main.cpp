#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

long long decimaltobinary(int);

int main()
{
    int n{};
    std::cin >> n;
    std::cout << decimaltobinary(n);
    return 0;
}

long long decimaltobinary(int n)
{
    if(n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return (n % 2 + 10  * decimaltobinary(n / 2));
    }
}

