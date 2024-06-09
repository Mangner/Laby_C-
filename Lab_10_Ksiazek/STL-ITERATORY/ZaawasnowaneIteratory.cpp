/*
	Mamy 5 rodzajów iteratorów :


	- Wejœciowe - wy³uskanie takiego iteratora s³u¿y wy³¹cznie do odczytu . Nie mo¿na nim zapisywaæ danych. Jest jednokierunkowy .
					Mo¿na poruszaæ siê tylko o jeden do przodu czyli ++i lub i++. Nie ma sta³ej i powtarzalnej trasy przechodzenia.

	- Wyjœciowe - wy³uskanie takiego iteratora s³u¿y wy³¹cznie do zapisu. Nie mo¿na nim odczytywaæ danych. Tak samo jak wejœciowy
					jest jednokierunkowy. Mo¿na poruszaæ siê tylko ++i lub i++. Nie ma sta³ej i powtarzalnej trasy przechodzenia.

	- Postêpuj¹ce - zapewnia wszystkie cechy co wejœciowy i wyjœciowy czyli POSTÊPUJ¥CY = COMBO ( WEJŒCIOWY + WYJŒCIOWY ) . Mo¿na 
					nim zapisywaæ i odczytywaæ. Równie¿ jest jednokierunkowy (mo¿na tylko ++i/i++) ale ma sta³¹ i powtarzaln¹ trase
															przejœcia !

	- DwuKierunkowe - zapewnia to samo co postêpuj¹cy tylko dzia³a na niego dekrementacja . Czyli mo¿na nim zapisywaæ , odczytywaæ.
						Ma sta³¹ i powtarzaln¹ trasê przechodzenia . Mo¿na nim siê poruszaæ tak samo jak we wszystkich poprzednich tylko
						o jeden element ale w obu kierunkach czyli dzia³a zarówno ++i/i++ jak i --i/i++


	- Dostêpu Swobodnego - zapewnia to samo co DwuKierunkowy ale znowu go rozszerza o tak zwany swobodny dostêp - co to znaczy?
							Znaczy to tyle ¿e mo¿emy siê odwo³aæ do konkretnego elementu kontenera u¿ywaj¹æ kontener[] bez koniecznoœci
							przechodzenia przez poprzednie elementy i tak samo nie jesteœmy ju¿ ograniczeni ju¿ do przemieszczania siê 
							o jeden element dekrementacj¹ b¹dŸ inkrementacj¹ . Mo¿emy siê poruszaæ o wymyœlone przez nas n-elementów
							robi¹c i +=n/ i = i + n   lub i -= n / i = i - n .
							Podsumowuj¹c iterator Swobodnego Dostêpu ma: mo¿liwoœæ zapisu/odczytu , jest dwukierunkowy , mo¿na siê poruszac
							o dowoln¹ liczbê elementów , mo¿na siê odwo³aæ do konkretnego elementu [] i ma sta³¹ i przewidywaln¹ trasê
												przejœcia.

*/