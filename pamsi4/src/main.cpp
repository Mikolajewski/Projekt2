/*!
\mainpage 
Program sluzacy do wyznaczania skutecznosci algorytmu za pomoca pomiaru czasu

Aplikacja jest przykladem realizacji programu sluzacego do sprawdzania zlozonosci obliczeniowej algorytmu. Wykonuje ona pomiar czasu wykonywania zadanego programu. Aplikacja jest zbudowana na obiektach, dzieki czemu mozliwe jest szybkie wstawienie nowego algorytmu w postaci klasy dziedziczacej czesc metod po klasie bazowej. 

\section etykieta-wazne-informacje Wazne informacje

Program zostal wyposazony w funkcje wczytywania, wypisywania i zapisywania danych do pliku.
Aplikacja byla sprawdzana na systemie operacyjnym Windows.
Do poprawnego dzialania programu potrzebny jest plik z danymi zapisany w postaci: 
ilosc danych,
wlasciwe dane.
Mozliwe jest rowniez otwieranie wielu plikow danych przy pomocy jednego pliku. Musi on zawierac dane w postaci:
ilosc sciezek do plikow, 
sciezki do plikow. 
Jako ze jest to rzecz dodatkowa nie wszystkie mozliwe bledy w pliku sa obslugiwane.
Sam Program_przykladowy powstal z mysla pokazania ze zadane operacje sa wykonywane poprawnie.
*/

/*!
\file
\brief Plik zawierajacy glowna funkcje programu wykonujacego benchmark algorytmu.

*/
#include <iostream>
#include "komunikacja.hh"
#include "benchmark.hh"
using namespace std;
 
 /*!
 \brief Glowna funkcja programu
 
 Funkcja wykonujaca benchmark zadanego algorytmu na podstawie czasu wykonywania operacji.
 */
 int main(void){
	benchmark algorytm;
	Komunikacja dialog;
	int ile_razy_wykonac_algorytm=0;
	cout<<"Ile razy wykonac sprawdzenie algorytmu?"<<endl;
	ile_razy_wykonac_algorytm=dialog.pobierz_int();
	if(algorytm.wykonaj_sprawdzenie_algorytmu(ile_razy_wykonac_algorytm)){ 			//jesli algorytm wykonal sie poprawnie
		algorytm.oblicz_sredni_czas_wykonywania_algorytmu();               			//to wypisz statystyki np: srednia
	}
	return 0;
 }
