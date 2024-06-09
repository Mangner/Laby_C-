#pragma once
#include <iostream>

class Screen
{
private:

	double height;
	double width;
	std::string resolution;
	bool is_working = false;

public:

	Screen(double height , double width, std::string resolution, bool power_on);
	void get_specification();
	void power_switch();
	~Screen();

};


Screen::Screen(double height, double width, std::string resolution, bool is_working)
{
	this->height = height;
	this->width = width;
	this->resolution = resolution;
	this->is_working = is_working;
}

void Screen::get_specification()
{
	std::cout << "Screen parameters: " << std::endl;
	std::cout << std::endl;
	std::cout << "\t- Size: " << this->height << "m x " << this->width << "m" << std::endl;
	std::cout << "\t- Resolution: " << this->resolution << std::endl;
	std::cout << std::endl;
}


void Screen::power_switch()
{
	if (this->is_working)
		std::cout << "The computer has been turned off." << std::endl;
	else
		std::cout << "The computer is working again :)." << std::endl;
}


Screen::~Screen()
{
	std::cout << "The computer object has been deleted." << std::endl;
}