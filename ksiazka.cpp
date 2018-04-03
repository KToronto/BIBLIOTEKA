#include<cstring>
#include"Recenzja.cpp"
using namespace std;
class Ksiazka
{
private:
	string autor;
	string tytul;
	Recenzja recenzja;
	static int nextID;
	int ID;
public:
	int status;
	Ksiazka(string autor, string tytul, int status, Recenzja recenzja)
	{
		this->autor = autor;
		this->tytul = tytul;
		this->ID = nextID;
		this->status = status;
		this->recenzja = recenzja;
		nextID++;
	}

	void zmienStatus(int NowyStatus)
	{
		this->status = NowyStatus;
	}

	int pokazID(){
		return ID;
	}
	
	string pokazAutora()
	{
		return autor;
	}

	string pokazTytul()
	{
		return tytul;
	}

	int pokazStatus()
	{
		return status;
	}

	string pokazRecenzje()
	{
		return recenzja.pokazRecenzje();
	}
	void zrecenzuj(Recenzja recenzja)
	{
		this->recenzja = recenzja;

	}

};

