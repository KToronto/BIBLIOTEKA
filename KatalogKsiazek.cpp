#include<cstring>
#include<vector>
#include<cstdlib>
using namespace std;
#include"Ksiazka.cpp"
class KatalogKsiazek
{
private:
	int liczbaKsiazek ;
	vector<Ksiazka> katalog;
public:
	KatalogKsiazek()
	{
		liczbaKsiazek = 0;
	};
	vector <Ksiazka> pokazKsiazki()
	{
		return katalog;
	}
	void dodajKsiazke(Ksiazka ksiazka)
	{
		katalog.push_back(ksiazka);
	}
	void usunKsiazke(int ID)
	{
		for(unsigned int i = 0; i < katalog.size(); i++)
		{
			if(katalog.at(i).pokazID() == ID)
				katalog.erase(katalog.begin() + i);
		}
	}
	void zmienStatus(int ID, int nowyStatus)
	{
		for(unsigned int i = 0; i < katalog.size(); i++)
		{
			if(katalog.at(i).pokazID() == ID)
				katalog.at(i).zmienStatus(nowyStatus);
		}
	}
	void zrecenzuj(int ID, Recenzja recenzja)
	{
		for(unsigned int i = 0; i < katalog.size(); i++)
			if(katalog.at(i).pokazID() == ID)
				katalog.at(i).zrecenzuj(recenzja);
	}
};

