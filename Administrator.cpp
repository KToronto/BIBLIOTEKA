#include<cstring>
#include<vector>
#include<iostream>
#include"KatalogKsiazek.cpp"
/*#include"ListaWypozyczen.cpp"
#include"ListaRezerwacji.cpp"*/
class Administrator
{
private:
	vector<Ksiazka> katalog;
public:
	Administrator() {};
	vector<Ksiazka> pokazWszystkieKsiazki()
	{
		return katalog;
	}
	/*vector<Rezerwacja> pokazWszystkieRezerwacje()
	{
		return rezerwacje;
	}
	vector<Wypozyczenie> pokazWszystkieWypozyczenia()
	{
		return wypozyczenia;
	}*/
	void dodajKsiazke(Ksiazka ksiazka){
		katalog.push_back(ksiazka);
	}
	void usunKsiazke(int ID);

	void zmienStatusKsiazki(int ID, int nowyStatus);

	void zrecenzuj(int ID, string recenzja, int ocena);


};


/* void anulujRezerwacje(int ID)
{

}
Rezerwacja pokaz1Rezerwacje(int ID)
{

}
void zrobRezerwacje(int ID)
{

}
void anulujWypozyczenie(int ID)
{

}
void przedluzTermin(int ID)
{

}
void wypozycz(int ID)
{

} */
