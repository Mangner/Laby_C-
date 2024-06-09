#pragma once
#include <iostream>

class Doors
{
private:

	double width;
	double height;
	std::string color;
	bool left_sided;

public:

	Doors(double width, double height, std::string color, bool left_sided);
	void get_size();
	void get_color();
	void which_sided();
	~Doors();

};


Doors::Doors(double width, double height, std::string color, bool left_sided)
{
	this->height = height;
	this->width = width;
	this->color = color;
	this->left_sided = left_sided;
}


void Doors::get_size()
{
	std::cout << "The doors are " << this->height << " m tall and " << this->width << " m wide tall." << std::endl;
}


void Doors::get_color()
{
	std::cout << "The doors are " << this->color << std::endl;
}


void Doors::which_sided()
{
	if (this->left_sided)
		std::cout << "Those doors are left sided." << std::endl;
	else
		std::cout << "Those doors are right sided." << std::endl;
}

Doors::~Doors()
{
	std::cout << "The Doors object has been deleted." << std::endl;
}

