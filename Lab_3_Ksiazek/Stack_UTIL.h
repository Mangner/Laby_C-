#pragma once
#include <iostream>


class Stack
{
private:

	int array[1000];
	int top_index = 0;

public:

	Stack();
	bool isEmpty();
	bool isFull();
	void push();
	void pop();
	~Stack();

};

Stack::Stack()
{
	std::cout << std::endl;
	std::cout << "The stack object has been created the top_index is: 0." << std::endl;
	std::cout << std::endl;
}


bool Stack::isEmpty()
{
	if (this->array[0] == NULL)
		return true;

	else
		return false;
}


bool Stack::isFull()
{
	if (this->array[999] = NULL)
		return false;
	else
		return true;
}


void Stack::push()
{
	if (this->isFull())
	{
		std::cout << "The stack is full you can't add any more elements." << std::endl;
		return;
	}

	int number_to_add;
	std::cout << "Enter a number you want to add: ";
	std::cin >> number_to_add;
	std::cout << std::endl;


	for (int i = top_index; i > 0; i--)
	{
		array[i + 1] = array[i];
	}

	array[0] = number_to_add;

	std::cout << "An element has been added to a stack." << std::endl;

	this->top_index += 1;

}


void Stack::pop()
{
	if (this->isEmpty())
	{
		std::cout << "You can't pop any element." << std::endl;
		return;
	}

	int temp = array[0];

	for (int i = 0; i < top_index - 1; i++)
	{
		array[i] = array[i + 1];
	}

	std::cout << "The popped element: " << temp << std::endl;

	this->top_index -= 1;

}


Stack::~Stack()
{
	std::cout << "The stack object has been deleted." << std::endl;
}