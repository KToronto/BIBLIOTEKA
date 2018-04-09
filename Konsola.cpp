#include<cstring>
#include<vector>
#include<iostream>
#include"Administrator.cpp"
using namespace std;
int Ksiazka::nextID = 0;
int main()
{
	Recenzja recenzja("slabe" , 2);
	Administrator *admin = new Administrator();
	Ksiazka ksiazka1("J.R.R Tolkien", "Bractwo Pierscienia", 0, recenzja);
	Ksiazka ksiazka2("J.R.R Tolkien", "Dwie Wieze", 0, recenzja);
	Ksiazka ksiazka3("J.R.R Tolkien", "Powrot Krola", 0, recenzja );

	admin->dodajKsiazke(ksiazka1);
	admin->dodajKsiazke(ksiazka2);
	admin->dodajKsiazke(ksiazka3);
	vector<Ksiazka> katalog = admin->pokazWszystkieKsiazki();

	for(unsigned int i = 0; i < katalog.size(); i++)
		cout << katalog[i].pokazTytul() << ' ';
	
	cout<<"\n";
	for(unsigned int i = 0; i < katalog.size(); i++)
		cout << katalog[i].pokazID() << ' ';
	cout<<"\n";
	for(unsigned int i = 0; i < katalog.size(); i++)
		cout << katalog[i].pokazStatus() << ' ';
	cout<<"\n";
	for(unsigned int i = 0; i < katalog.size(); i++)
		cout << katalog[i].pokazRecenzje() << ' ';

	delete admin;
	return 0;
}