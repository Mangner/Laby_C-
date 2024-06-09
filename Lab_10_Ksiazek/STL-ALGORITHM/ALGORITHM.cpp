#include <iostream>
#include <vector>
#include <algorithm>

/*
	Biblioteka "algorithm" jest w standardzie j�zykua c++ i cz�ci� biblioteki STL ( znajduje si� w std::) i zawiera wiele u�ytecznych
	algorytm�w dla wszystkich typ�w danych i zwalnia nas z pisania miliona implementacji jednego algorytmu. Przyk�ady:

		- std::find( od , do , wartosc ) - szuka elementu w kontenerze w zakresie od w��cznie do wy��cznie po podanej warto�ci
				zwraca iterator (wska�nik) na ten element;

		- std::sort( od , do , Funkcja_por�wnuj�ca) - sortuje kontener w zakresie od w��cznie do wy��cznie por�wnuj�c elementy funkcj�_por�wnuj�c�

		- std::for_each( od , do , funkcja ) - taki mapping z pythona wykonuja na ka�dym obiekcie z zakresu od : do wybran� funkcje

		- std::random_shuffle( od , do) - miesza w spos�b losowy kolejno�� element�w w kontenerze
*/


class Book
{
private:
	std::string title;

public:
	Book() {};
	Book(std::string title) : title(title) {};
	void show() { std::cout << this->title << std::endl; };
	std::string getTitle() { return this->title; };
	bool operator==(const std::string& str);

};


bool Book::operator==(const std::string& str)
{
	if (this->getTitle() == str)
		return true;
	return false;
}

void show(Book& book)
{
	book.show();
}



bool sortBook(Book& book1, Book& book2)
{
	if (book1.getTitle() < book2.getTitle())
		return true;
	return false;
}



int main()
{
	std::vector<Book> books;
	books.push_back(Book("Potop"));
	books.push_back(Book("Hamlet"));
	books.push_back(Book("Zemsta"));

	std::sort(books.begin(), books.end(), sortBook);

	std::for_each(books.begin(), books.end(), show);

	auto i = std::find(books.begin(), books.end(), "Potop");
	i->show();


	return 0;
}