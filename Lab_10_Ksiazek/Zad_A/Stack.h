#pragma once
#include <vector>
#include <iostream>

namespace MyStack
{
	template <class Type>
	class Stack
	{
	private:
		std::vector<Type> data;
		int topIndx;

	public:
		Stack();
		bool isEmpty();
		void push(Type newElement);
		Type pop();


	};


	template<class Type>
	Stack<Type>::Stack()
	{
		this->topIndx = -1;
	}


	template<class Type>
	void Stack<Type>::push(Type newElement)
	{
		this->data.push_back(newElement);
		++topIndx;
	}


	template<class Type>
	bool Stack<Type>::isEmpty()
	{
		return topIndx == -1;
	}



	template<class Type>
	Type Stack<Type>::pop()
	{
		if (!(this->isEmpty()))
		{
			Type returnElement = data.back();
			this->data.pop_back();
			std::cout << returnElement << std::endl;
			this->topIndx -= 1;
			return returnElement;
		}

	}
}