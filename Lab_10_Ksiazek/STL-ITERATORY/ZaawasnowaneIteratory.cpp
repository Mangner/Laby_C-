/*
	Mamy 5 rodzaj�w iterator�w :


	- Wej�ciowe - wy�uskanie takiego iteratora s�u�y wy��cznie do odczytu . Nie mo�na nim zapisywa� danych. Jest jednokierunkowy .
					Mo�na porusza� si� tylko o jeden do przodu czyli ++i lub i++. Nie ma sta�ej i powtarzalnej trasy przechodzenia.

	- Wyj�ciowe - wy�uskanie takiego iteratora s�u�y wy��cznie do zapisu. Nie mo�na nim odczytywa� danych. Tak samo jak wej�ciowy
					jest jednokierunkowy. Mo�na porusza� si� tylko ++i lub i++. Nie ma sta�ej i powtarzalnej trasy przechodzenia.

	- Post�puj�ce - zapewnia wszystkie cechy co wej�ciowy i wyj�ciowy czyli POST�PUJ�CY = COMBO ( WEJ�CIOWY + WYJ�CIOWY ) . Mo�na 
					nim zapisywa� i odczytywa�. R�wnie� jest jednokierunkowy (mo�na tylko ++i/i++) ale ma sta�� i powtarzaln� trase
															przej�cia !

	- DwuKierunkowe - zapewnia to samo co post�puj�cy tylko dzia�a na niego dekrementacja . Czyli mo�na nim zapisywa� , odczytywa�.
						Ma sta�� i powtarzaln� tras� przechodzenia . Mo�na nim si� porusza� tak samo jak we wszystkich poprzednich tylko
						o jeden element ale w obu kierunkach czyli dzia�a zar�wno ++i/i++ jak i --i/i++


	- Dost�pu Swobodnego - zapewnia to samo co DwuKierunkowy ale znowu go rozszerza o tak zwany swobodny dost�p - co to znaczy?
							Znaczy to tyle �e mo�emy si� odwo�a� do konkretnego elementu kontenera u�ywaj�� kontener[] bez konieczno�ci
							przechodzenia przez poprzednie elementy i tak samo nie jeste�my ju� ograniczeni ju� do przemieszczania si� 
							o jeden element dekrementacj� b�d� inkrementacj� . Mo�emy si� porusza� o wymy�lone przez nas n-element�w
							robi�c i +=n/ i = i + n   lub i -= n / i = i - n .
							Podsumowuj�c iterator Swobodnego Dost�pu ma: mo�liwo�� zapisu/odczytu , jest dwukierunkowy , mo�na si� poruszac
							o dowoln� liczb� element�w , mo�na si� odwo�a� do konkretnego elementu [] i ma sta�� i przewidywaln� tras�
												przej�cia.

*/