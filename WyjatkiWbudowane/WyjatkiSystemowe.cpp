#include <iostream>
#include <exception>


// Wszystkie wyjatki systemowe dziedzicz� po klasie exception wi�c b�dziemy mogli jest �apa� u�ywaj�c: "std::exception& error"

class Test
{
public:
	double a[1000000];
};


// Przyk�ad z�apania wyj�tk�w


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




// Jednak wnioskiem z tych lab�w jest to by nie u�ywa� wyj�tk�w albo ich u�ywa� jak najrzadziej poniewa� s� ma�o wydajne :(

// O to jak rozwi�za� bad_alloc bez wyj�tku

int main()
{
	Test* ptr;

	int c = 1000 * 1000;
	ptr = new(std::nothrow) Test[c];				// std::nothrow u�ywane przy operatorze new zmusza new w przypadku niepowodzenia do zwracania NULLPTR a nie BAD_ALLOC

	if (ptr == nullptr)								// W przypadku gdy new �le zalookuje pamiec zwraca null
		std::cout << "Zla alokacja" << std::endl;

	return 0;
}

// I tak powinni�my dzia�a� szuka� obej�� systemu wyj�tk�w :)
// Wyj�tki powinni�my stosowa� do RZADKICH B��D�W/ZDARZE� nietypowych

/*
		Testy Jednostkowe - Testy kt�re sprawdzaj� w kodzie dzia�anie jedenj funkcji/klasy og�lnie funkcjlonalno�ci

*/