#include <iostream>
#include "Stack_UTIL.h"



int main()
{
	int option = -1;



	while (option != 0)
	{
		option = choose_option(&option);

		switch (option)
		{
		case 1:
			break;

		case 2:

			break;

		case 3:
			break;

		case 4:
			break;

		default:
			break;
		
		}

	}

	return 0;
}





int choose_option(int* pnt)
{
	std::cout << "What do you want to do? " << std::endl;
	std::cout << std::endl;

	std::cout << "\t1. Push an element." << std::endl;
	std::cout << "\t2. Pop an element." << std::endl;
	std::cout << "\t3. Check if stack is empty." << std::endl;
	std::cout << "\t4. Check if stack is full." << std::endl;
	
	std::cout << std::endl;
	std::cout << "Enter your option: ";
	std::cin >> *pnt;

	system("cls");
}