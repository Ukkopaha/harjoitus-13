/**************************************
*	Paulus Linna
*	IIA14SB
*
*	Teht�v�kuvaus:
*
*		Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*		yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
*		lopuksi nayt�lle.
*
*
*		a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*		tehd�ksesi merkkijonojen yhdist�misen
*		b) Kayta string-kirjastoa (C++:n merkkijonot)
*		tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA
*
*		Esimerkki
*		Anna etunimi: Aku
*		Anna sukunimi: Ankka
*		Nimesi oli: Aku Ankka
*
*	P�iv�m��r�: 9.10.2014
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