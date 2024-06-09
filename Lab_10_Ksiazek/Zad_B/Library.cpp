#include "Library.h"


bool SortBook(Book& bookOne, Book& bookTwo)
{
	if (bookOne.getTitle() < bookTwo.getTitle())
		return true;
	return false;
}


void Library::addBook()
{
	std::string author;
	std::cout << "Podaj autora ksiazki: ";
	std::getline(std::cin, author);


	std::string title;
	std::cout << "Podaj tytul ksiazki: ";
	std::getline(std::cin, title);
	

	int pages;
	std::cout << "Podaj liczbe stron: ";
	std::cin >> pages;

	Book newBook(title, author, pages);
	this->bookCollection.push_back(newBook);
	std::cout << std::endl;
	std::cout << "New book has been added." << std::endl;

	std::sort(this->bookCollection.begin(), this->bookCollection.end(), SortBook);
}


void Library::removeBook()
{
	std::string removeTitle;
	std::cout << "Podaj tytul ksiazki ktora chcesz usunac: ";
	std::getline(std::cin, removeTitle);

	for (auto i = this->bookCollection.begin(); i != this->bookCollection.end(); i++)
	{
		if (*i == removeTitle)
		{
			i = this->bookCollection.erase(i);
			this->bookCollection.shrink_to_fit();
			std::cout << std::endl;
			std::cout << "Book has been removed." << std::endl;
			std::cout << std::endl;
			return;
		}
	}
	std::cout << std::endl;
	std::cout << "There is not book with such a title." << std::endl;
	std::cout << std::endl;

}

void editOptionDisplay()
{
	std::cout << std::endl;
	std::cout << "1. Title" << std::endl;
	std::cout << "2. Author" << std::endl;
	std::cout << "3. Pages" << std::endl;
	std::cout << std::endl;
}


void Library::editBook()
{
	std::string changeTitle;
	std::cout << "Enter the title of the book which you would like to edit: ";
	std::getline(std::cin, changeTitle);

	for (auto i = this->bookCollection.begin(); i != this->bookCollection.end(); i++)
	{
		if (*i == changeTitle)
		{
			int opcja = 0;
			editOptionDisplay();
			std::cout << "What would you like to edit: ";
			std::cin >> opcja;
			std::cin.get();

			switch (opcja)
			{
			case 1:
				i->editBookTitle();
				break;

			case 2:
				i->editBookAuthor();
				break;

			case 3:
				i->editBookPages();
				break;

			default:
				std::cout << std::endl;
				std::cout << "There is not such an option." << std::endl;
				std::cout << std::endl;
				
			}
			return;
		}
	}

	std::sort(this->bookCollection.begin(), this->bookCollection.end(), SortBook);
	std::cout << std::endl;
	std::cout << "There is not book with such a title." << std::endl;
	std::cout << std::endl;
}



void Library::displayBooksCollection()
{
	for (auto i = this->bookCollection.begin(); i != this->bookCollection.end(); i++)
		std::cout << *i << std::endl;
}





Library::~Library()
{
	this->bookCollection.clear();
}