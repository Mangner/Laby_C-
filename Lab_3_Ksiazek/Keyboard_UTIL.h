#pragma once
#include <iostream>


class Keyboard
{
private:

	std::string model;
	bool backlight;
	std::string switches_type;
	int usage_per_key;

	std::string string_to_print = "";

public:

	Keyboard(std::string model, bool backlight, std::string switches_type, int usage_per_key);
	void get_specification();
	void enter_a_string();
	void print();
	~Keyboard();
};


Keyboard::Keyboard(std::string model, bool backlight, std::string switches_type, int usage_per_key)
{
	this->model = model;
	this->backlight = backlight;
	this->switches_type = switches_type;
	this->usage_per_key = usage_per_key;
}

void Keyboard::get_specification()
{
	std::cout << this->model << " keyborad specification: " << std::endl;
	std::cout << std::endl;
	std::cout << "\t- Backlight: ";
	if (this->backlight)
		std::cout << "RBG" << std::endl;
	else 
		std::cout << "None" << std::endl;
	std::cout << "\t- Switch type: " << this->switches_type << std::endl;
	std::cout << "\t- Lifespan of the switch: " << this->usage_per_key << std::endl;
	std::cout << std::endl;
}


void Keyboard::enter_a_string()
{
	std::cout << "Enter a string: ";
	std::cin >> this->string_to_print;
}

void Keyboard::print()
{
	std::cout << this->string_to_print << std::endl;
	this->string_to_print = "";
}

Keyboard::~Keyboard()
{
	std::cout << "Keyboard objcet has been deleted." << std::endl;
	std::cout << std::endl;
}