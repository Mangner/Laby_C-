#include <iostream>

// Dzielenie przez 0 zmiennych int zwroci blad devision_by_zero
// Dzielenie przez 0 zmiennych double/floay zwroci inf - infinity - niesko�czono��
/*
	Odwo�ywanie si� element�w z poza obszaru tablicy mo�e zwraca elementy kt�re s� odpowiednio przed lub za t� tablic� w pami�ci
	jednak mo�e si� zdarzy� , �e odwo�amy si� do obszaru pami�ci do kt�rego nie b�dziemy mie� dost�pu wtedy zostanie zwr�cony b��d. 
	Zazwyczaj przy duzych indeksach TAB[1000] itd... Dzia�a to identycznie zar�wno NA STOSIE jak I STERCIE.
*/

/*
	Mechanizm Wyj�tk�w sk�ada si� 3 krok�w i wygl�da nast�puj�co:

	1. Zg�oszenie wyj�tku
	2. Umieszczenie funkcji w bloku try
	3. Wychwycenie wyj�tku w bloku catch
*/


// Przyk�ad obs�ugi b��d�w na 3.o

double devide(int a, int b)
{
	if (b == 0)
	{
		throw "Nie mozna dzielic przez zero";				// throw rzuca/zwraca wyjatek w tym przypadku jako const char *
	}
	else return a / b;
}




int main()
{
	int a = 5;
	int b = 0;
	
	try												// W bloku try umieszczamy fragmenty kodu, ktore moga zwraca� wyj�tki
	{
		std::cout << devide(a, b) << std::endl;
	}
	catch (const char* str)							// catch wychwytuje rzucany/zwracany wyjatek
	{
		std::cout << str << std::endl;
	}

	return 0;
}