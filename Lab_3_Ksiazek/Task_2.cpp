#include <iostream>
#include "Student_UTIL.h"


int main()
{
	std::cout << "Define a way you want to go through the loope:" << std::endl;
	std::cout << std::endl;
	std::cout << "\t- 1. By index" << std::endl;
	std::cout << "\t- 2. By pointers" << std::endl;
	std::cout << std::endl;
	
	int option;
	std::cout << "Enter the option: ";
	std::cin >> option;
	std::cout << std::endl;
	
	Student array[5];
	array[0] = Student("Marcin", "£ukasz", 151845, 19);
	array[1] = Student("Andrzej", "Laskowski", 151455, 20);
	array[2] = Student("Jakub", "Nawrocki", 151489, 19);
	array[3] = Student("Karol", "Kapusta", 151445, 18);
	array[4] = Student("Micha³", "Langner", 151454, 18);



	switch (option)
	{
	case 1:
		for (int i = 0; i < 5; i++)
			array[i].get_info();
		break;

	case 2:
		for (int i = 0; i < 5; i++)
			(*(& array[0] + i)).get_info();
		break;

	default:
		std::cout << std::endl;
		std::cout << "There isn't such an option." << std::endl;
		std::cout << std::endl;
		break;
	}

	return 0;	
}