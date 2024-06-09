#include <iostream>

// Obs�uga b�ed�w klas�

// Wa�na ciekawostka const po prawej stronie od funkcji sprawia �e nie modyfikuje wska�nika *this i wtedy mo�na wy�apywa� const error& e


class BadDevision
{
private:
	int a;
	int b;

public:
	BadDevision(int a, int b) : a(a), b(b) {};
	void msg() const { std::cout << "Nie mozna dzielic przez zero" << std::endl; }
};


double devide(int a, int b)
{
	if (b == 0)
	{
		throw BadDevision(a, b);
	}
	return a / b;
}


int main()
{
	int a = 5;
	int b = 0;

	try
	{
		devide(a, b);
	}
	catch (const BadDevision& badDevision)
	{
		badDevision.msg();
	}
}


/*
																WA�NE CIEKAWOSTKI

	1. Je�eli chcemy by funkcja zawsze w przypadku zatrzymania b��du rzucza�a jakis wyj�tek piszemy po prawo od niej throw(exception)

	2. Je�eli chcemy by funkcja nie zwraca�a wyj�tk�w piszemy po prowo:

		- throw() - STAROMODNE

		- noexcept - NOWOCZESNE ROZWI�ZANIE

	np:
*/


void funckja_dla_debila() noexcept
{}

void funckcja_trudna_dla_debila() throw()
{}

void funkcja_nie_dla_debila() throw(BadDevision)
{}

