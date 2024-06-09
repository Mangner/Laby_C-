#include "Stack.h"


template<class Type>
MyStack::Stack<Type>::Stack()
{
	this->topIndx = -1;
}


template<class Type>
void MyStack::Stack<Type>::push(Type newElement)
{
	this->data.push_back(newElement);
	++topIndx;
}


template<class Type>
bool MyStack::Stack<Type>::isEmpty()
{
	return topIndx == -1;
}



template<class Type>
Type MyStack::Stack<Type>::pop()
{
	Type returnElement = data.back();
	std::cout << this->data.pop_back() << std::endl;
	return returnElement;
}