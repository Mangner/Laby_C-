#pragma once
#include <iostream>


class Vector
{
private:

	int x;
	int y;

public:

	Vector();
	Vector(int x,int y);
	void DisplayX();
	void DisplayY();
	void Display();
	int getX();
	int getY();
	Vector addVector(Vector vect);
	~Vector();

};

Vector::Vector()
{
}


Vector::Vector(int x, int y)
{
	this->x = x;
	this->y = y;

	std::cout << "Object of class vector has been initialized." << std::endl;
}

void Vector::DisplayX()
{
	std::cout << "Vector x coordinate value: " << this->x << std::endl;
}

void Vector::DisplayY()
{
	std::cout << "Vector y coordinate value: " << this->y << std::endl;
}


void Vector::Display()
{
	std::cout << "Vector coordinates values: [" << this->x << "," << this->y << "]" << std::endl;
}

int Vector::getX()
{
	return this->x;
}

int Vector::getY()
{
	return this->y;
}


Vector Vector::addVector(Vector vect)
{
	return Vector(this->x + vect.getX(), this->y + vect.getY());
}


Vector::~Vector()
{
	std::cout << "Object of class vector has been deleted." << std::endl;
}
