#include <iostream>

#include "Scrabble.h"

using namespace std;

int main()
{
    Scrabble j("Juan");

	j.getFichas();
	j.print();

	Scrabble e("Ernesto");
	e.getFichas();
	e.print();

	Scrabble a("Alberto");
	a.getFichas();
	a.print();

	Scrabble ad("Adriana");
	ad.getFichas();
	ad.print();
}
