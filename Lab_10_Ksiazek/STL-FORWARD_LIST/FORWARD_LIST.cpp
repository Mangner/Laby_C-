#include <iostream>
#include <forward_list>


int main()
{
	std::forward_list<int> data = { 1,2,3 };

	data.push_front(4);

	for (auto i = data.begin(); i != data.end(); i++)
		std::cout << *i << std::endl;


	/*
			forward_list - czyli lista jednokierunkowa ma nast�puj�ce cechy:

				- nie ma iteratora wstecznego rbegin() , rend() czy crbegin() , crend()
				- nie ma operatora indeksu data[]
				- elementy mo�na dodawa� tylko na pocz�tek , nie ma push_back() - WA�NE a tylko push_front()

	*/


}