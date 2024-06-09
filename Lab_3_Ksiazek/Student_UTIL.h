#pragma once
#include <iostream>

class Student
{
private:

	std::string name;
	std::string surname;
	int id;
	int age;

public:
	Student();
	Student(std::string name, std::string surname, int id, int age);
	void do_nothing();
	void pretend_to_do_something();
	void think_about_beer();
	void get_info();
	~Student();
};

Student::Student()
{
	return;
}

Student::Student(std::string name, std::string surname, int id, int age)
{
	this->name = name;
	this->surname = surname;
	this->id = id;
	this->age = age;
}


void Student::do_nothing()
{
	std::cout << "Ahh. I'm too lazy for that..." << std::endl;
}


void Student::pretend_to_do_something()
{
	std::cout << "Just keep an eye contact and he'll think I understand him. " << std::endl;
}


void Student::think_about_beer()
{
	std::cout << "I would kill for a beer. When is it ending?" << std::endl;
}


void Student::get_info()
{
	std::cout << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Surname: " << this->surname << std::endl;
	std::cout << "Id: " << this->id << std::endl;
	std::cout << "Age: " << this->age << std::endl;
	std::cout << std::endl;
}


Student::~Student()
{
	std::cout << "Student has fallen asleep." << std::endl;
}


