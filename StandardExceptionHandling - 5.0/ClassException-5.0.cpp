#include <iostream>
#include <exception>						// Biblioteka z klasa std::exception - standard tworzenia wyj�tk�w w C++



/* Dziedziczenie po klasie std::exception ma nast�puj�ce benefity
	
		- standaryzacje - kod bedzie zrozumialy dla reszty programistow poniewaz jest to standard
		- umo�liwia �apanie wyj�tk�w na r�nym poziomie szczeg�owo�ci
		- daje dost�p do metod klasy exception cho�by metody .what() ktora zwraca informacje o b��dzie

*/

class BadDivision : public std::exception
{

public:
	BadDivision() : exception("Nie mozna dzielic przez zero") {};

};



double division(int a, int b)
{
	if (b == 0)
		throw BadDivision();

	else if (a == b)
		throw "Przeciez wiesz";

	else
		return a / b;
}



int main()
{
	int a = 5;
	int b = 0;


	try
	{
		division(a, b);
	}
	catch (std::exception& badDivision)
	{
		std::cout << badDivision.what() << std::endl;
	}

	return 0;
}

