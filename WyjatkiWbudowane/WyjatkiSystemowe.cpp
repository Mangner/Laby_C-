#include <iostream>
#include <exception>


// Wszystkie wyjatki systemowe dziedzicz¹ po klasie exception wiêc bêdziemy mogli jest ³apaæ u¿ywaj¹c: "std::exception& error"

class Test
{
public:
	double a[1000000];
};


// Przyk³ad z³apania wyj¹tków


//int main()
//{
//	Test* tab = nullptr;
//
//	try
//	{
//		int c = 1000 * 1000;
//		tab = new Test[c];
//	}
//	catch (std::exception& error)
//	{
//		std::cout << error.what() << std::endl;
//	}
//
//}




// Jednak wnioskiem z tych labów jest to by nie u¿ywaæ wyj¹tków albo ich u¿ywaæ jak najrzadziej poniewa¿ s¹ ma³o wydajne :(

// O to jak rozwi¹zaæ bad_alloc bez wyj¹tku

int main()
{
	Test* ptr;

	int c = 1000 * 1000;
	ptr = new(std::nothrow) Test[c];				// std::nothrow u¿ywane przy operatorze new zmusza new w przypadku niepowodzenia do zwracania NULLPTR a nie BAD_ALLOC

	if (ptr == nullptr)								// W przypadku gdy new Ÿle zalookuje pamiec zwraca null
		std::cout << "Zla alokacja" << std::endl;

	return 0;
}

// I tak powinniœmy dzia³aæ szukaæ obejœæ systemu wyj¹tków :)
// Wyj¹tki powinniœmy stosowaæ do RZADKICH B£ÊDÓW/ZDARZEÑ nietypowych

/*
		Testy Jednostkowe - Testy które sprawdzaj¹ w kodzie dzia³anie jedenj funkcji/klasy ogólnie funkcjlonalnoœci

*/