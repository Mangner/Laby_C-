#include <iostream>
#include <vector>
#include <memory>		// By pos�ugiwa� si� SmartPointerami musimy zaimportowa� bibliotek� <memory>


/*
	Na labach zostali�my zapoznani z 4 rodzajami SmartPointer�w:

	- std::auto_ptr - rozwi�zanie z lat 90 (dla boomer�w) - ma prawo w�asno�ci czyli jeden SmartPnt mo�e miec jeden obiekt.
									Przyr�wnuj�c jeden auto_ptr do drugiego np:

			std::auto_ptr<std::string> firstPnt(new std::string("dupa));
			std::auto_ptr<std::string> secondPnt;

			secondPnt = firstPnt;

	W momencie przyr�wnania firstPnt jakgdyby "oddaje" obiekt secondPnt-erowi a sam si� delete - uje.


	- std::unique_ptr - r�wnie� ma prawo w�asno�ci jak auto_pnt ale nie mo�na przekazywa� go jako kopii jak powy�ej u auto_ptr.
			unique_ptr musi by� jeden jedyny jak nazwa m�wi "wyj�tkowy". �eby przenie�� jego obiekt z jednego auto_pnt do drugiego
			trzeba u�y� std::move np.   nowy_uPnt = std::move(stary_uPnt);



	- std::shared_ptr - dzia�a praktycznie jak zwyczajny pnt z tak� r�znic� �e ma licznik odwo�a�. W momencie gdy licznik odwo�a�
						tego pnt do obiekt�w wszelakich jest r�wny 0 - TO SI� ZWALNIA SAM :)

	- std::weak_ptr - rzadko u�ywany


	Podobnie jak <vector> SmartPointery s� cz�ci� biblioteki STL wi�c s� templatami dlatego przy ich u�yciu jak przy "vector"
		trzeba zkonkretyzowa� typ w '<>' (angle brackets) a nast�pnie zaalokowa� pami�� w '()' (round brackets)
*/


int main()
{
	std::auto_ptr<std::string> auto_str(new std::string);
	std::cout << "Enter a text: ";
	std::cin >> *auto_str;

	std::auto_ptr<std::string> wywlaszczacz;

	wywlaszczacz = auto_str;			

	//std::cout << *auto_str << std::endl;    // Wywo�a b��d bo auto_str przekaza� obiekt wywlaszczaczowi.Wiec ta pamiec zosta�a zwolniona

	std::cout << *wywlaszczacz << std::endl;


	std::shared_ptr<std::string> komunistycznyPNT(new std::string("KOMUNA"));
	std::shared_ptr<std::string> polskaLata70;

	polskaLata70 = komunistycznyPNT;


	std::cout << *komunistycznyPNT << std::endl;
	std::cout << *polskaLata70 << std::endl;


}