#include <iostream>

using namespace std;

template<typename T, std::size_t x, std::size_t y, std::size_t z, typename TT>
void multiplicar(T (&matrix)[x][y][z], TT n)
{
    for (std::size_t i {0}; i < x; i++)
    {
        for (std::size_t j{0}; j < y; j++)
        {
            for (std::size_t k{0}; k < z; k++)
            {
                matrix[i][j][k] *= n;
            }
        }
    }
}

template<typename T, size_t x,size_t y,size_t z>
void mostrar(T (&matrix)[x][y][z])
{
    std::cout << '{';
    for (std::size_t i{0}; i < x; i++)
    {
        std::cout << '{';
        for (std::size_t j{0}; j < y; j++)
        {
            std::cout << '{';
            for (std::size_t k{0}; k < z; k++)
            {
                std::cout << matrix[i][j][k];
                if(k != z - 1)
                {
                    std::cout << ", ";
                }
            }
            if( j < y - 1)
            {
                std::cout << "}, ";
            }
            else
            {
                std::cout << '}';
            }
        }
        if( i < x - 1)
        {
            std::cout << "},\n";
        }
        else
        {
            std::cout << '}';
        }
    }
    std::cout << "}\n";
}

int main()
{

    int x[3][4][2] = {{{1,2},{4,5},{7,8},{1,2}},
                    {{10,11},{13,14},{16,17},{1,2}},
                    {{19,20},{22,23},{25,26},{1,2}}};

    std::cout << "\nMatriz Inicial:\n\n";
    mostrar(x);
    multiplicar(x, 4);
    std::cout << "\nMatriz Multiplicada:\n\n";
    mostrar(x);

    return 0;
}
