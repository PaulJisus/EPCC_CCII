#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sieve(int);

int main()
{
    int n = 50;
    sieve(n);
    return 0;
}

void sieve(int n)
{
    bool primo[n + 1];
    memset(primo, true, sizeof(primo));
    for (int i = 2; i * i <= n; i++) {
        if (primo[i] == true) {
            for (int j = i * i; j <= n; j += i)
                primo[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (primo[i])
            std::cout << i << " ";
}
