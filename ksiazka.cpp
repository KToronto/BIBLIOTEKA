# Ksiazka
/*Tworzenie klasy Ksiazka do Projektu Biblioteka*/

#include<cstring>

class Ksiazka
{
private:
	string autor;
	string tytul;
	int ID;
	int status;
	Recenzja recenzja;
public:
Ksiazka::Ksiazka(string autor, string tytul, int ID , int status)
{
	this.autor = autor;
	this.tytul = tytul;
	this.ID = ID;
	this.status = status; 
}
	
void zmienStatus(int NowyStatus){
	this.status = NowyStatus
}

string pokazAutora(){
	return autor;
}

string pokazTytul(){
	return tytul;
}

int pokazStatus(int status){
	return status;
} 

string pokazRecenzje(){
	return recenzja;
}
void zrecenzuj(Recenzja recenzja){
	this.recenzja = recenzja;
	
}
	
	
};
