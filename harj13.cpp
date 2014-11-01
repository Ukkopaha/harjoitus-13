/**************************************
*	Paulus Linna
*	IIA14SB
*
*	Tehtäväkuvaus:
*
*		Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*		yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
*		lopuksi naytölle.
*
*
*		a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*		tehdäksesi merkkijonojen yhdistämisen
*		b) Kayta string-kirjastoa (C++:n merkkijonot)
*		tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA
*
*		Esimerkki
*		Anna etunimi: Aku
*		Anna sukunimi: Ankka
*		Nimesi oli: Aku Ankka
*
*	Päivämäärä: 9.10.2014
*	Versio: 1.0
*******************************************/
#include <iostream>
using namespace std;
void main()
{
	char etunimi[15];
	char sukunimi[15];
	char kokonimi[30];

	cout << "Anna etunimesi: ";
	cin >> etunimi;
	cout << "Anna sukunimesi: ";
	cin >> sukunimi;

	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);

	cout << "Nimesi oli: " << kokonimi;
}