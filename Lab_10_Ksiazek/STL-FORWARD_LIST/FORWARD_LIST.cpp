#include <iostream>
#include <forward_list>


int main()
{
	std::forward_list<int> data = { 1,2,3 };

	data.push_front(4);

	for (auto i = data.begin(); i != data.end(); i++)
		std::cout << *i << std::endl;


	/*
			forward_list - czyli lista jednokierunkowa ma nastêpuj¹ce cechy:

				- nie ma iteratora wstecznego rbegin() , rend() czy crbegin() , crend()
				- nie ma operatora indeksu data[]
				- elementy mo¿na dodawaæ tylko na pocz¹tek , nie ma push_back() - WA¯NE a tylko push_front()

	*/


}