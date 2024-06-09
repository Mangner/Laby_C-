#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Book.h"
#include <string>

class Library
{
private:
	std::vector<Book> bookCollection;
	int bookNumber = 0;

public:
	Library() {};
	void addBook();
	void removeBook();
	void editBook();
	void displayBooksCollection();
	~Library();

};

