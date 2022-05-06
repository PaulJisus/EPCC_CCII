#include <iostream>

void input();
void output();

int time{};

using namespace std;

int main()
{
    input();
    output();
    return 0;
}

void input()
{
    std::cout << "\nEnter the number of seconds to convert: ";
    std::cin >> time;
    std::cout << '\n' << time << " seconds = ";
}

void output()
{
    int hours{}, minutes{}, seconds{};
    seconds = time % 60;
    time /= 60;
    minutes = time % 60;
    time /= 60;
    hours = time;
    std::cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds\n";
}
