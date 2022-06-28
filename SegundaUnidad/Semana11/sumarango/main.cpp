#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
T sumarango(std::vector<T> &x, int inicio, int fin, T valor = 0)
{
    T suma{};
    for (auto i{x.begin() + inicio}; i <= x.begin() + fin; i++)
    {
        suma += *i;
    }
    return (suma + valor);
}

template<typename T>
void mostrar(std::vector<T> &x, int inicio, int fin)
{
    for (auto i{x.begin() + inicio}; i < x.begin() + fin; i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> arr;
    std::string opcion{};
    int aux{}, inicio{}, fin{}, valor{};
    std::cout << "Ingrese la cantidad de elementos del vector:\n";
    std::cin >> aux;
    for (int i = 0; i < aux; i++)
    {
        std::cout << "Ingrese el elemento de la posicion: "<< i <<" :\n";
        std::cin >> valor;
        arr.push_back(valor);
    }
    std::cout << "\nValores iniciales:\n";
    mostrar(arr, 0, arr.size());
    std::cout << "Establezca el rango:\n";
    std::cout << "Inicio:\n";
    std::cin >> inicio;
    std::cout << "Fin:\n";
    std::cin >> fin;
    std::cout << "\nDesea ingresar un valor inicial:\n";
    std::cin >> opcion;
    if(opcion == "Si" || opcion == "SI" || opcion == "si" || opcion == "sI" || opcion == "S" || opcion == "s")
    {
        std::cout << "Ingrese el valor Inicial: ";
        std::cin >> aux;
        std::cout << "Los elemenetos en el rango son:\n";
        mostrar(arr, inicio, fin + 1);
        std::cout << "El valor inicial es:\n" << aux;
        std::cout << "\nLa suma resultante es:\n" << sumarango(arr, inicio, fin, aux);
    }
    else
    {
        std::cout << "Los elemenetos en el rango son:\n";
        mostrar(arr, inicio, fin + 1);
        std::cout << "La suma resultante es:\n" << sumarango(arr, inicio, fin);
    }
}
