# BIBLIOTEKA
Tworzenie klasy Ksiazka do Projektu Biblioteka

#include"Ksiazka.h"
#include<cstring>

class Recenzja{
	
private:
	string recenzja;
	int ocena;
public:
	Recenzja::Recenzja(string recenzja, int ocena){
		this.recenzja = recenzja;
		this.ocena = ocena;
		
	}
	string pokazRecenzje(){
		return recenzja +" "+ ocena;
	}
	
};
