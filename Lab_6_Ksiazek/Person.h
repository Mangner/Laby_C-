#pragma once
#include "Person.cpp"
#include <iostream>


class Person
{
private:
	std::string name;
	std::string surname;
	int age;

public:
	Person();
	Person(std::string name, std::string surname, int age) :name(name), surname(surname), age(age) {};
	void display();
};


