#include <iostream>
#include <vector>
#include <memory>		// By pos³ugiwaæ siê SmartPointerami musimy zaimportowaæ bibliotekê <memory>


/*
	Na labach zostaliœmy zapoznani z 4 rodzajami SmartPointerów:

	- std::auto_ptr - rozwi¹zanie z lat 90 (dla boomerów) - ma prawo w³asnoœci czyli jeden SmartPnt mo¿e miec jeden obiekt.
									Przyrównuj¹c jeden auto_ptr do drugiego np:

			std::auto_ptr<std::string> firstPnt(new std::string("dupa));
			std::auto_ptr<std::string> secondPnt;

			secondPnt = firstPnt;

	W momencie przyrównania firstPnt jakgdyby "oddaje" obiekt secondPnt-erowi a sam siê delete - uje.


	- std::unique_ptr - równie¿ ma prawo w³asnoœci jak auto_pnt ale nie mo¿na przekazywaæ go jako kopii jak powy¿ej u auto_ptr.
			unique_ptr musi byæ jeden jedyny jak nazwa mówi "wyj¹tkowy". ¯eby przenieœæ jego obiekt z jednego auto_pnt do drugiego
			trzeba u¿yæ std::move np.   nowy_uPnt = std::move(stary_uPnt);



	- std::shared_ptr - dzia³a praktycznie jak zwyczajny pnt z tak¹ róznic¹ ¿e ma licznik odwo³añ. W momencie gdy licznik odwo³añ
						tego pnt do obiektów wszelakich jest równy 0 - TO SIÊ ZWALNIA SAM :)

	- std::weak_ptr - rzadko u¿ywany


	Podobnie jak <vector> SmartPointery s¹ czêœci¹ biblioteki STL wiêc s¹ templatami dlatego przy ich u¿yciu jak przy "vector"
		trzeba zkonkretyzowaæ typ w '<>' (angle brackets) a nastêpnie zaalokowaæ pamiêæ w '()' (round brackets)
*/


int main()
{
	std::auto_ptr<std::string> auto_str(new std::string);
	std::cout << "Enter a text: ";
	std::cin >> *auto_str;

	std::auto_ptr<std::string> wywlaszczacz;

	wywlaszczacz = auto_str;			

	//std::cout << *auto_str << std::endl;    // Wywo³a b³¹d bo auto_str przekaza³ obiekt wywlaszczaczowi.Wiec ta pamiec zosta³a zwolniona

	std::cout << *wywlaszczacz << std::endl;


	std::shared_ptr<std::string> komunistycznyPNT(new std::string("KOMUNA"));
	std::shared_ptr<std::string> polskaLata70;

	polskaLata70 = komunistycznyPNT;


	std::cout << *komunistycznyPNT << std::endl;
	std::cout << *polskaLata70 << std::endl;


}