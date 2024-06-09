#include <iostream>
#include <vector>


/*
	Czym jest STL? - Standard Template Library - jest to biblioteka/zestaw szablonów , kontenerów , obiektów funkcyjnych , iteratorów
					 i algorytmów. Jest podstaw¹ dla programisty tego jêzyka i pozwala na porzuceniu niskopoziomowych zagwostek a sku-
					 pieniu siê na aspekcie biznesowym. (Taki Python w c++ , do wszystkiego funkcja , np sort czy nie trzeba alokowac 
					 new/del. Jest to przyk³ad paradygmatu UOGÓLNIONEGO . Jest w standardzie jêzyka c++ od 1994 . Czyli wszystkie jej
					 funkcjonalnoœci znaduj¹ siê w:
					 
									- NAMESPACE STD::
*/


/*
	Szablon Klasy <vector> . Co to czym siê charakteryzuje?

	- Jest n-elementow¹ tablic¹ przechowuj¹c¹ obiekty tego samego typu ( proste i w³asne obiekty)
	- Sam alokuje dynamicznie pamiêæ zci¹gaj¹c z programisty ten obowi¹zek zwalniania i alokowania
	- Jest o typie SWOBODNEGO DOSTÊPU i iteratory w tej stukturze te¿ s¹ SWOBODNEGO DOSTÊPU moga sie ruszac w przod i ty³ 
		i mozemy sie odwo³ywac do konkretnego elementu bez koniecznosci przechodzenia przez poprzednie :)
*/



int main()
{
	std::vector<int> data;					// Deklaracja vectora. WA¯NE JEST Z : std i trzeba zkonkretyzowaæ TYP
	
	std::cout << "Size: " << data.size() << std::endl;					// Size - liczba elementów w wekotrze
	std::cout << "Capacity: " << data.capacity() << std::endl;			// Capacity - pojemnoœc/na ile elementów jest zaalokowana pamiec
	std::cout << std::endl;

	data.push_back(5);						// push_back() dodaje na koniec vectora element. Jeslie nie ma miejsca vector alokuje pamiec
	data.push_back(10);

	std::cout << "Size: " << data.size() << std::endl;
	std::cout << "Capacity: " << data.capacity() << std::endl;
	std::cout << std::endl;


	data.resize(5);							// resize() - zmienia SIZE i CAPACITY nowe elementy wype³nia zerami (0).
											// Zera te dodaje na koncu wektora jak widac po wywo³aniu kodu poni¿ej

	data.reserve(10);						// reserve() - zmienia tylko CAPACITY wektora alokuj¹c dodatkow¹ pamiêæ

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



	data.shrink_to_fit();				// shrink_to_fit() - zmniejsza CAPACITY wektora do SIZE , zwalniaj¹c nie u¿ywan¹ pamiêæ czyli
										// gdy size = 6 a capacity = 10 to po tym wywo³aniu bedzie size = 6 i capacity = 6


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



	data.emplace_back(1);		    /* emplace_back() dzia³a tak samo jako push_back().Ró¿nica jest taka ¿e push_back() tworzy
									kopie obiektu a potem go przenosi albo kopiuje na koñcu kontenera (vector) a emplace_back
									kontruuje na koñcu wektora ten obiekt przez co jest bardziej wydajny , poniewa¿ omija niepotrzebny
									proces kopiowania i przenoszenia . 

									W skrócie :   emplace_back() < push_back()   Lepsze , szybsze , wydajniejsze
										
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