#include <iostream>



// namespace - po polsku "przestrzeñ nazw - u¿ywana i przydatna w momencie gdy pobieramy wiele bibliotek w ktorej sa identycznie
//					nazwane klasy. Pomaga to zkonkretyzowac ktorej klasy chcemy uzyc . Przyklad:


namespace LibraryOne
{
	class TaSamaNazwa 
	{
	private:
		int a;

	public:
		TaSamaNazwa(int a) : a(a) {};
	};
}


namespace LibraryTwo
{
	class TaSamaNazwa
	{
	private:
		std::string b;
	
	public:
		TaSamaNazwa(std::string b) : b(b) {};

	};

}

//int main()
//{
//	LibraryOne::TaSamaNazwa a(5);
//	LibraryTwo::TaSamaNazwa b("I tak wlasnie uzylismy tych klas ktorych chcielismy pomimo tych samych nazw  :) ");
//
//	return 0;
//}



// Tak samo mog¹ byæ przestrzenie nazw zagnie¿dzone czyli namespace w namespacie. Przyklad

namespace Zewnetrzny
{
	namespace Wewnetrzny
	{
		class Zagniezdzona
		{
		private:
			char c;

		public:
			Zagniezdzona(char c) : c(c) {};

		};
	}
}

using namespace Zewnetrzny::Wewnetrzny;

int main()
{
	Zewnetrzny::Wewnetrzny::Zagniezdzona c('c');       // Klasyczne wywolanie
	Zagniezdzona d('d');							   // Skrocone przez using namespace

	return 0;
}



// Ciekawostki !!! Moga sie pojawic na Kolosie

/*
	Jezeli klasa nie jest w zadnym namespacie albo cokolwiek to jest w GLOBALNYM NAMESPACE :)
		i odwolanie wyglada tak

		::KlasaGlobal a;

	Wywolanie bez '::' odwoluje sie do using namespace ktore domyslnie jest globalne :)

*/