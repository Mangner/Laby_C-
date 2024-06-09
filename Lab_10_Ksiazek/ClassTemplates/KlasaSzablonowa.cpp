#include "KlasaSzablonowa.h"



// Podobnie jak przy definicji klasy wszystkie metody z klasy szablonowej rówenie¿ musz¹ mieæ templata.
// WA¯NA RZECZ!!! - przy nazwie klasy musimy zkonkretyzowaæ jej typ w takich nawiasach '<>' . Przyk³ad:


template <class Type>
Type KlasaSzablonowa<Type>::getVariable()
{
	return this->variable;
}


template <class Type>
void KlasaSzablonowa<Type>::setVariable(Type newVariable)
{
	this->variable = newVariable;
}


