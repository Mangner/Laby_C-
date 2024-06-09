#include <iostream>
#include <vector>
#include "Library.h"
#include "Book.h"
#include "windows.h"

void displayOption();

int main()
{
	Library biblioteka;

	int option = -1;
	std::cout << "Program zarzada biblioteka ksiazek." << std::endl;
	std::cout << std::endl;

	while (option != 0)
	{
		displayOption();
		std::cout << "Podaj opcje: ";
		std::cin >> option;
		std::cout << std::endl;
		std::cin.get();

		switch (option)
		{
		case 0:
			std::cout << "Program zakonczony." << std::endl;
			break;

		case 1:
			biblioteka.addBook();
			break;

		case 2:
			biblioteka.removeBook();
			break;

		case 3:
			biblioteka.editBook();
			break;

		case 4:
			biblioteka.displayBooksCollection();
			break;

		default:
			std::cout << "Nie ma takiej opcji." << std::endl;
			break;
		}

		system("pause");
		system("cls");
	}


	return 0;
}


void displayOption()
{
	std::cout << "0. Przerwij program." << std::endl;
	std::cout << "1. Dodaj Ksiazke." << std::endl;
	std::cout << "2. Usun Ksiazke." << std::endl;
	std::cout << "3. Edytuj Ksiazke." << std::endl;
	std::cout << "4. Wyswietl ksiazki." << std::endl;
	std::cout << std::endl;

}