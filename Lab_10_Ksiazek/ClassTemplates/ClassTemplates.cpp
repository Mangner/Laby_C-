#include <iostream>
#include "KlasaSzablonowa.h"

// Podobnie jak funckje klasy mog� mie� szablon.


int main()
{

	KlasaSzablonowa<std::string> obiektKlasy;				// Deklarujac obiekt klasy szablonowej musimy zkonkretyzowac typ <KonkretnyTyp>
	obiektKlasy.setVariable("Dupa");

	std::cout << obiektKlasy.getVariable() << std::endl;

	return 0;
}




// Ciekawostki na Kolosa bo lubi SB jebn��
/*
	1. Templaty mog� obs�ugiwa� nie tylko typy proste ale i Z�O�ONE JAK OBIEKTY NASZYCH KLAS.
	2. Szablony mog� r�wnie� mie� KILKA PARAMETR�W W TYM DOMY�LNE np  template<class T1,class T2 = int>
	3. Mo�e si� przytrafi� �e b�dziemy potrzebowa� jawnej specjalizacji (konkretyzacji ) szablonu. np:
				
				template <> 
				class A<std::string>
				{
				private:
					std::string a;

				public:
					std::string getVar();
					void setVar(std::string var);
				}

	I wtedy robimy wszystkie metody pod zkonkretyzowany typ.	

*/