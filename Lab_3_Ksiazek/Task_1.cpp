#include <iostream>
#include <locale>
#include <windows.h>
#include "Computer_UTIL.h"
#include "Doors_UTIL.h"
#include "Student_UTIL.h"
#include "Screen_UTIL.h"
#include "Keyboard_UTIL.h"


int main()
{
	setlocale(LC_ALL, "polish");
	system("chcp 1250");
	system("cls");


	Computer komp("X-Kom Pro Gamer", "Ryzen 5 3600", 3.9, "Rx 5700 Gigabite", 8, 16, true);
	komp.specification();
	komp.is_on();

	std::cout << std::endl;

	Doors drzwi(2.0, 0.8, "red", true);
	drzwi.get_size();
	drzwi.get_color();
	drzwi.which_sided();

	std::cout << std::endl;

	Student stud("Marcin", "Łukasz", 151669, 19);
	stud.get_info();
	std::cout << std::endl;
	stud.do_nothing();
	stud.pretend_to_do_something();
	stud.think_about_beer();
	

	std::cout << std::endl;

	Screen ekran(3.0, 1.8, "FULL HD",true);
	ekran.get_specification();
	ekran.power_switch();

	std::cout << std::endl;

	Keyboard klawa("Logitech Pro X", true, "Cherry Red", 10000000);
	klawa.get_specification();
	klawa.enter_a_string();
	klawa.print();


	return 0;
}