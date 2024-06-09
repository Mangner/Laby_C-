#pragma once
#include <iostream>


class Computer
{
private:

	std::string brand;
	std::string CPU;
	double CPU_GHz;
	std::string GPU;
	int GPU_RAM;
	int Computer_RAM;
	bool power_on;

public:

	Computer(std::string brand, std::string CPU, double CPU_GHz, std::string GPU, int GPU_RAM, int Computer_Ram, bool power_on);
	void specification();
	void is_on();
	~Computer();

};


Computer::Computer(std::string brand, std::string CPU, double CPU_GHz, std::string GPU, int GPU_RAM, int Computer_Ram, bool power_on)
{
	this->brand = brand;
	this->CPU = CPU;
	this->CPU_GHz = CPU_GHz;
	this->GPU = GPU;
	this->GPU_RAM = GPU_RAM;
	this->Computer_RAM = Computer_Ram;
	this->power_on = power_on;
}


void Computer::specification()
{
	std::cout << "Computer " << this->brand << " Specification: " << std::endl;
	std::cout << std::endl;

	std::cout << "\t- CPU: " << this->CPU << " " << CPU_GHz << "GHz" << std::endl;
	std::cout << "\t- GPU: " << this->GPU << " " << GPU_RAM << "GB Ram" << std::endl;
	std::cout << "\t- Ram: " << this->Computer_RAM << "GB" << std::endl;
	std::cout << std::endl;
}


void Computer::is_on()
{
	if (this->power_on)
		std::cout << "The computer is on." << std::endl;

	else
		std::cout << "The computer is off" << std::endl;
}


Computer::~Computer()
{
	std::cout << "The Computer object has been deleted." << std::endl;
}


