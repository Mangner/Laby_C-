#include "KlasaSzablonowa.h"



// Podobnie jak przy definicji klasy wszystkie metody z klasy szablonowej r�wenie� musz� mie� templata.
// WA�NA RZECZ!!! - przy nazwie klasy musimy zkonkretyzowa� jej typ w takich nawiasach '<>' . Przyk�ad:


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


