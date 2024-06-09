#include <iostream>
#include <vector>


/*
	Czym jest STL? - Standard Template Library - jest to biblioteka/zestaw szablon�w , kontener�w , obiekt�w funkcyjnych , iterator�w
					 i algorytm�w. Jest podstaw� dla programisty tego j�zyka i pozwala na porzuceniu niskopoziomowych zagwostek a sku-
					 pieniu si� na aspekcie biznesowym. (Taki Python w c++ , do wszystkiego funkcja , np sort czy nie trzeba alokowac 
					 new/del. Jest to przyk�ad paradygmatu UOG�LNIONEGO . Jest w standardzie j�zyka c++ od 1994 . Czyli wszystkie jej
					 funkcjonalno�ci znaduj� si� w:
					 
									- NAMESPACE STD::
*/


/*
	Szablon Klasy <vector> . Co to czym si� charakteryzuje?

	- Jest n-elementow� tablic� przechowuj�c� obiekty tego samego typu ( proste i w�asne obiekty)
	- Sam alokuje dynamicznie pami�� zci�gaj�c z programisty ten obowi�zek zwalniania i alokowania
	- Jest o typie SWOBODNEGO DOST�PU i iteratory w tej stukturze te� s� SWOBODNEGO DOST�PU moga sie ruszac w przod i ty� 
		i mozemy sie odwo�ywac do konkretnego elementu bez koniecznosci przechodzenia przez poprzednie :)
*/



int main()
{
	std::vector<int> data;					// Deklaracja vectora. WA�NE JEST Z : std i trzeba zkonkretyzowa� TYP
	
	std::cout << "Size: " << data.size() << std::endl;					// Size - liczba element�w w wekotrze
	std::cout << "Capacity: " << data.capacity() << std::endl;			// Capacity - pojemno�c/na ile element�w jest zaalokowana pamiec
	std::cout << std::endl;

	data.push_back(5);						// push_back() dodaje na koniec vectora element. Jeslie nie ma miejsca vector alokuje pamiec
	data.push_back(10);

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.resize(5);							// resize() - zmienia SIZE i CAPACITY nowe elementy wype�nia zerami (0).
											// Zera te dodaje na koncu wektora jak widac po wywo�aniu kodu poni�ej

	data.reserve(10);						// reserve() - zmienia tylko CAPACITY wektora alokuj�c dodatkow� pami��

	for (int i = 0; i < data.size(); i++)
		std::cout << data[i] << std::endl;
	std::cout << std::endl;

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.push_back(33);						// Ciekawostka push_back dodaje element na pierwsze nie zaalokowane miejsce 
											// Czyli jesli size jest 5 a capcity 10 to zainicjalizuje wartoscia 6-sty element wektora

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	std::cout << "Pierwszy element: " << data.front() << std::endl;	// front() - wypisuje pierwszy element wektora
	std::cout << "Ostatni element: " << data.back() << std::endl;	// back() - wypisuje ostatni element wektora
	std::cout << "MaxSize: " << data.max_size() << std::endl;		// max_size() - wypisuje maksymalny rozmiar wektora na ile elementow mozemy zaalokowac pamiec
	std::cout << std::endl;



	data.shrink_to_fit();				// shrink_to_fit() - zmniejsza CAPACITY wektora do SIZE , zwalniaj�c nie u�ywan� pami�� czyli
										// gdy size = 6 a capacity = 10 to po tym wywo�aniu bedzie size = 6 i capacity = 6


	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.pop_back();					// Wyrzuca ostatni element wektora, NIE ZWRACA NIC JEST TYPU VOID TA METODA
										// Ciekawostka zmniejsza SIZE ALE NIE CAPACITY. Czyli w tym przypadku bedzie size = 5 ,capacity = 6


	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.clear();						// Usuwa wszystkie elementy wektora . ZERUJE SIZE = 0.


	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;



	data.emplace_back(1);		    /* emplace_back() dzia�a tak samo jako push_back().R�nica jest taka �e push_back() tworzy
									kopie obiektu a potem go przenosi albo kopiuje na ko�cu kontenera (vector) a emplace_back
									kontruuje na ko�cu wektora ten obiekt przez co jest bardziej wydajny , poniewa� omija niepotrzebny
									proces kopiowania i przenoszenia . 

									W skr�cie :   emplace_back() < push_back()   Lepsze , szybsze , wydajniejsze
										
									*/

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.clear();
	data.shrink_to_fit();


	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;

	return 0;
}