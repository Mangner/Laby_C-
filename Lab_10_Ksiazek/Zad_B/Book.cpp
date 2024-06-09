#include "Book.h"
#include <string>


void Book::editBookAuthor()
{
	std::string newAuthor;
	std::cout << "Enter new Author: ";
	std::getline(std::cin, newAuthor);

	this->author = newAuthor;
}



void Book::editBookTitle()
{
	std::string newTitle;
	std::cout << "Enter new Title: ";
	std::getline(std::cin, newTitle);

	this->title = newTitle;
}



void Book::editBookPages()
{
	int newPages;
	std::cout << "Enter new number of Pages: ";
	std::cin >> newPages;

	this->pages = newPages;
}



std::string Book::getAuthor()
{
	return this->author;
}



std::string Book::getTitle()
{
	return this->title;
}



int Book::getPages()
{
	return this->pages;
}



bool Book::operator==(const std::string title)
{
	if (this->title == title) return true;
	return false;
}


std::ostream& operator<<(std::ostream& os, const Book& book)
{
	os << "Author: " << book.author << std::endl;
	os << "Title: " << book.title << std::endl;
	os << "Pages: " << book.pages << std::endl;
	return os;
}