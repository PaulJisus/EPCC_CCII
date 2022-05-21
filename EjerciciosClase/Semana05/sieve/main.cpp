#include <iostream>
#include <vector>

using namespace std;

void input();
void sieve(std::vector<bool>&, long long unsigned int);
void output(std::vector<bool>&, long long unsigned int);

int main()
{
    input();
    return 0;
}

void input()
{
    long long unsigned int number{};
    std::cout << "\n\tSieve of eratosthenes.\n\t______________________\n";
    std::cout << "\nEnter number:";
    std::cin >> number;
    vector<bool> prime(number + 1, true);
    sieve(prime, number);
    output(prime, number);

}

void sieve(std::vector<bool>& prime, long long unsigned int number)
{
    for (long long unsigned int i = 2; i * i <= number; i++)
    {
        if (prime[i] == true)
        {
            for (long long unsigned int j = i * i; j <= number; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void output(std::vector<bool>& prime, long long unsigned int number)
{
    std::cout << "Prime numbers less than " << number << " are:\n";
    for (long long unsigned int i = 2; i <= number; i++)
    {
        if (prime[i])
        {
            std::cout << i << " ";
        }
    }
    std::cout << endl;
}
