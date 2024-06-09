#include <iostream>
#include <vector>
#include <algorithm>

/*
	Biblioteka "algorithm" jest w standardzie jêzykua c++ i czêœci¹ biblioteki STL ( znajduje siê w std::) i zawiera wiele u¿ytecznych
	algorytmów dla wszystkich typów danych i zwalnia nas z pisania miliona implementacji jednego algorytmu. Przyk³ady:

		- std::find( od , do , wartosc ) - szuka elementu w kontenerze w zakresie od w³¹cznie do wy³¹cznie po podanej wartoœci
				zwraca iterator (wskaŸnik) na ten element;

		- std::sort( od , do , Funkcja_porównuj¹ca) - sortuje kontener w zakresie od w³¹cznie do wy³¹cznie porównuj¹c elementy funkcj¹_porównuj¹c¹

		- std::for_each( od , do , funkcja ) - taki mapping z pythona wykonuja na ka¿dym obiekcie z zakresu od : do wybran¹ funkcje

		- std::random_shuffle( od , do) - miesza w sposób losowy kolejnoœæ elementów w kontenerze
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