#ifndef HISTOGRAMATEMPLATE_H_
#define HISTOGRAMATEMPLATE_H_

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class histogramaTemplate
{
    public:
        histogramaTemplate(std::vector<T>);
        void setIntervalSize (T);
        T getIntervalSize();
        void Sturges();
        T getIntervalos();
        std::vector<T> histograma();
        void print(std::vector<T>);
        ~histogramaTemplate();
    private:
        std::vector<T> elementos;
        std::vector<T> frecuencias;
        T intervalSize;
};

#endif

template<typename T>
histogramaTemplate<T>::histogramaTemplate(std::vector<T> elementos)
{
    this->intervalSize = 0;
    std::sort(elementos.begin(), elementos.end());
    for(long long unsigned int i{0}; i < elementos.size(); i++)
    {
        this->elementos.push_back(elementos[i]);
    }
}

template<typename T>
void histogramaTemplate<T>::setIntervalSize(T intervalSize)
{
    this->intervalSize = intervalSize;
}

template <typename T>
T histogramaTemplate<T>::getIntervalSize()
{
    return(this->intervalSize);
}

template <typename T>
void histogramaTemplate<T>::Sturges()
{
    setIntervalSize(1 + 3.322(log10(elementos.size())));
}

template <typename T>
T histogramaTemplate<T>::getIntervalos()
{
    T r = elementos.back() - elementos.front() + 1;
    T w = r / getIntervalSize();
    return w;
}

template <typename T>
std::vector<T> histogramaTemplate<T>::histograma()
{
    print(elementos);
    std::vector<T> aux{};
    for(auto i = elementos.front(); i <= elementos.back()+ getIntervalos(); i += getIntervalos())
    {
        frecuencias.push_back(i);
    }
    for(auto i = frecuencias.begin(); i < frecuencias.end()-1; i++)
    {
        int contador{};
        for(auto j : elementos)
        {
            if(j >= *i && j <* (i + 1))
            {
                contador++;
            }
        }
        aux. push_back(contador);
    }
    return aux;
}

template <typename T>
void histogramaTemplate<T>::print(std::vector<T> elemento1)
{
    std::cout << '\n';
    for(auto i: elemento1)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

template <typename T>
histogramaTemplate<T>::~histogramaTemplate()
{

}

