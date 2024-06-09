#include <iostream>
#include <vector>
#include "Stack.h"

using namespace MyStack;

int main()
{

	Stack<std::string> stack;
	stack.isEmpty();
	stack.push("Dziala");
	stack.pop();

	return 0;
}