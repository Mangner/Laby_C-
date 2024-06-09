#include <iostream>
#include "Person.h"


Person::Person()
{
	this->name = "Jan";
	this->surname = "Kowalski";
	this->age = 18;
}

Person::Person(std::string name, std::string surname, int age) : name(name), surname(surname), age(age)
{
}


void Person::display()
{
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Surname: " << this->surname << std::endl;
	std::cout << "Age: " << this->age << std::endl;
}