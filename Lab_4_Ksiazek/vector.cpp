#include <iostream>
#include "Vector_UTIL.hpp"

int main()
{
	Vector myVec(3, 4);
	myVec.DisplayX();
	myVec.DisplayY();
	myVec.Display();

	int x_cord = myVec.getX();
	int y_cord = myVec.getY();

	std::cout << x_cord << " " << y_cord << std::endl;

	return 0;
}