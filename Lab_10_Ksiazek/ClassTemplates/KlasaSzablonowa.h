#pragma once
#include <iostream>


// Gdy robimy szablon klasy musimy po prostu u¿yæ templata przy jej deklaracji

template <class Type>
class KlasaSzablonowa
{
private:
	Type variable;

public:
	Type getVariable();
	void setVariable(Type newVariable);
};

