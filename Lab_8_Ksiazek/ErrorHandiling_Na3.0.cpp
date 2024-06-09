#include <iostream>

// Dzielenie przez 0 zmiennych int zwroci blad devision_by_zero
// Dzielenie przez 0 zmiennych double/floay zwroci inf - infinity - nieskoñczonoœæ
/*
	Odwo³ywanie siê elementów z poza obszaru tablicy mo¿e zwraca elementy które s¹ odpowiednio przed lub za t¹ tablic¹ w pamiêci
	jednak mo¿e siê zdarzyæ , ¿e odwo³amy siê do obszaru pamiêci do którego nie bêdziemy mieæ dostêpu wtedy zostanie zwrócony b³¹d. 
	Zazwyczaj przy duzych indeksach TAB[1000] itd... Dzia³a to identycznie zarówno NA STOSIE jak I STERCIE.
*/

/*
	Mechanizm Wyj¹tków sk³ada siê 3 kroków i wygl¹da nastêpuj¹co:

	1. Zg³oszenie wyj¹tku
	2. Umieszczenie funkcji w bloku try
	3. Wychwycenie wyj¹tku w bloku catch
*/


// Przyk³ad obs³ugi b³êdów na 3.o

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
	
	try												// W bloku try umieszczamy fragmenty kodu, ktore moga zwracaæ wyj¹tki
	{
		std::cout << devide(a, b) << std::endl;
	}
	catch (const char* str)							// catch wychwytuje rzucany/zwracany wyjatek
	{
		std::cout << str << std::endl;
	}

	return 0;
}