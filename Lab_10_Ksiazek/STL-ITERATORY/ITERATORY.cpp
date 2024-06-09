#include <iostream>
#include <vector>



//Najprostsza definicja iteratora to uogólnienie wskaŸnika. Dziêki iteratorom mo¿emy w ³atwy sposób operowaæ na naszych kontenerach.


int main()
{
	std::vector<int> data;

	data.push_back(4);
	data.emplace_back(8);
	data.emplace_back(12);
	data.emplace_back(15);
	data.emplace_back(20);


	auto bg = data.begin();					// begin() - zwraca wskaŸnik na pierwszy element kontenera (w tym przypadku vector-a)
	std::cout << *bg << std::endl;			// Wyswietli 4
	std::cout << std::endl;

	auto end = data.end();					// end() - zwraca wskaŸnik na pozycjê za ostatnim elementem
	
	
	//std::cout << *end << std::endl;			// Zwróci b³¹d poniewa¿ odwo³ujemy siê do niezaalokowanej pamiêci
	
	
	for (auto i = bg; i != end; i++)			// Praktyczna petla do wyswietlania elementow kontenera
	{
		std::cout << *i <<std::endl;
	}
	std::cout << std::endl;
	


	for (auto i = data.cbegin(); i != data.cend(); i++)			// Jako zabezpieczenie do end() i begin() mozna uzyc cbegin() i cend().
	{															// c stoi za constant. U¿ywaj¹c tego iteratora nie mo¿emy zmienic obiektów w kontenerze
		
	// *i = 5;   Kompilator podkreœla b³¹d czerwony error bo nie da sie zmieniæ tego :(								
		std::cout << *i << std::endl;
	}
	std::cout << std::endl;



	for (auto i = data.rbegin(); i != data.rend(); i++)			// rend() i rbegin() - r stoi za reverse czyli wypisze elementy od ty³u
		std::cout << *i << std::endl;
	std::cout << std::endl;



	for (auto i = data.crbegin(); i != data.crend(); i++)		// crend() i crbegin() - combo reverse i constant iterator
		std::cout << *i << std::endl;
	std::cout << std::endl;



	data.erase(data.begin() + 3, data.end());					// erase(od,do) - usuwa elementy z kontenera od w³¹cznie do wy³¹cznie
	for (auto i = data.begin(); i != data.end(); i++)
		std::cout << *i << std::endl;
	std::cout << std::endl;



	std::vector<int> newData = { 1 ,2 ,3 };						// Tak sie deklaruje i inicjalizuje nie pusty wektor . Ciekawe

	data.insert(data.begin(), newData.begin(), newData.end());   // insert(gdzie_dest , od_source , do_source) wstawia elementy do dest 
																	// taki pythonowy extend tylko mozesz wybrac gdzie wstawiasz :)

	for (auto i = data.begin(); i != data.end(); i++)
		std::cout << *i << std::endl;
	std::cout << std::endl;

	std::vector<int> newData2 = { 1,2,3 };
	data.assign(newData2.begin(), newData2.end());			// assign(od_src,do_src) zastêpuje zawartoœæ kontenera elementami z
															// A - innego kontenera jak tu newData2 B - listy inicjalizacyjnej

	data.assign({ 1,2,3,4 });
	for (auto i = data.begin(); i != data.end(); i++)
		std::cout << *i << std::endl;
	std::cout << std::endl;



	for (auto x : data)							// konstrukcja element : wJakimsKontenerze - pythonowe - znane jako foreach w innych jezykach
		std::cout << x << std::endl;
	
	return 0;
}