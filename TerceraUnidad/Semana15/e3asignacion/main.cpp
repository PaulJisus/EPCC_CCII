#include <iostream>

#include "LinkedList.h"

using namespace std;

int main(){
	LinkedList l1;
	for(int i{0}; i < 10; i+=2)
    {
        l1.insert(i);
    }
	std::cout << "\nPrimera lista:\n";
	std::cout << l1;
    LinkedList l2;
    l2 = l1;
    std::cout << "\n\nLista copiada:\n";
	std::cout << l2;
//	LinkedList l3;
//	l3 = l2 + l1;
//	std::cout << "\n\n" << l3;
	return 0;
}
