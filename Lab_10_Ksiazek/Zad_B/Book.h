#pragma once
#include <iostream>

class Book
{
private:
	std::string title;
	std::string author;
	int pages;

public:
	Book(std::string title, std::string author, int pages) : title(title), author(author), pages(pages) {};
	void editBookTitle();
	void editBookAuthor();
	void editBookPages();
	std::string getTitle();
	std::string getAuthor();
	int getPages();
	bool operator==(const std::string title);
	friend std::ostream& operator<<(std::ostream& os, const Book& book);
};

