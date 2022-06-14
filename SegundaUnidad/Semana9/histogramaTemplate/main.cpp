#include <iostream>
#include <vector>
#include <algorithm>
#include "histogramaTemplate.h"

using namespace std;

int main()
{
    std::vector<int> arr{10, 2, 9, 7, 5, 6, 1, 3, 8, 4};
	histogramaTemplate<int> ht(arr);
	ht.setIntervalSize(5);
	ht.print(ht.histograma());
	return 0;
}
