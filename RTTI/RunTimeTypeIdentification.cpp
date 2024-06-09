#include <iostream>


// RTTI - Runtime type identification - czyli identyfikacja typu na etapie wykonania


class A
{
public:
	virtual void Speak() {std::cout << "A" << std::endl;}
};


class B : public A
{
public:
	virtual void Speak() { std::cout << "B" << std::endl; }
};


class C : public B
{
public:
	virtual void Speak() { std::cout << "C" << std::endl; }
};


int main()
{
	A* a1 = new A;
	A* a2 = new B;
	A* a3 = new C;

	a1->Speak();
	a2->Speak();
	a3->Speak();

	std::cout << std::endl;

	/*C* c = (C*)a3;
	C* c2 = (C*)a1;
	B* b = (C*)a3*/

	// aczkolwiek tak siê nie robi powinniœmy u¿ywaæ  dynamic_cast<typ>(obiekt_rzutowany) np:

	C* c = dynamic_cast<C*>(a3);
	C* c2 = dynamic_cast<C*>(a1);			// To rzutowanie siê nie uda³o zwróci 'nullptr'
	B* b = dynamic_cast<C*>(a3);

	// Dynamic_castem mozemy rowniez rzutowac referencje jednak nie zwroci nam to nullptr a rzuci wyjatek bad_cast

	if (c == nullptr)
	{
		std::cout << "c" << std::endl;
	}
	if (c2 == nullptr)
	{
		std::cout << "c2" << std::endl;
	}
	if (b == nullptr)
	{
		std::cout << "b" << std::endl;
	}


	// Mozemy sprawdzic czy wskazany obiekt jest obiektem konkretnej klasy u¿ywaj¹æ typeid() np:
	std::cout << std::endl;
	if (typeid(C) == typeid(*a3))
	{
		std::cout << "*a3 jest typu:C" << std::endl;
	}

	// Tak samo mozemy pozyskaæ nazwe typu obiektu / do jakiej klasy nalezy uzywajac rowniez typeid() np:

	std::cout << std::endl;
	std::cout << typeid(*a3).name() << std::endl;

	return 0;
}


// Dynamic_cast u¿ywamy w przypadku rzutowania typów obiektów z funkcjami virtualnymi i w przypadku polimorfizmu