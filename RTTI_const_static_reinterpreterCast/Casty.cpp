#include <iostream>

// Const_cast<nowy_typ>(obiekt_do_rzutowania) - sciaga status const lub volatile. Dzia³a tylko na pointerach lub referencjach

void change(const int* a, int n) 
{
	int* c;
	c = const_cast<int*>(a);				// Bez const_cast - nie dzia³a poniewa¿ nie mozna przypisac const int* do int* 
											// gdy znaczylo to ze za pomoc¹ int* moznaby³oby modyfikowac wartoœc do niego przypisan¹
}


int main()
{
	int number = 13;
	const int* a = &number;


	int* change_pnt = const_cast<int*>(a);
	*change_pnt = 15;

	std::cout << number << std::endl;
	std::cout << std::endl;

	double realNumber = 5.6;

	// Static_cast jest uzywany do podstawowych rzutowaniach np double/float na int:

	int integer = static_cast<int>(realNumber);

	std::cout << integer << std::endl;

	return 0;
}


/* Reinterpreter_cast to ju¿ totalna CIEKAWOSTKA KTÓRA MO¯E SIÊ POJAWIÆ NA KOLOSIE. U¿ywany jest w:

	- rzutowaniu strumienia bajtów na tablice liczb ca³kowitych 

	- konwersji na zupe³nie typy


  Ogólnie u¿ywany w rzutowaniach niskopoziomowych

*/