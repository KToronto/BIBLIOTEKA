#include <iostream>
#include"Wypozyczenie.cpp"
using namespace std;

class ListaWypozyczen{
private:
    int liczbaWypozyczen;
public:
    ListaWypozyczen(
            liczbaWypozyczen = 0;
    );
    void anulujWypozyczenie(int ID);
    void przedluzTermin(int ID);
    void wypozycz();
    vector <Wypozyczenie> pokazWypozyczenia(
            return lista_w;
            );
};

//Konstruktor

ListaWypozyczen::ListaWypozyczen(int liczbaWypozyczen) {
    this->liczbaWypozyczen=listaWypozyczen;
}

void ListaWypozyczen::anulujWypozyczenie(int ID) {

    for(int i=0; i<lista_w.size(); i++)
    {
        if(lista_w.at(i).pokazID() == ID)
            lista_w.erase(list_w.begin()+i);
    }
}

//void ListaWypozyczen::przedluzTermin(int ID) {
 //   this.ID=ID;
//}

void ListaWypozyczen::wypozycz(int ID) {
    if (Ksiazka.pokazStatus =0)
      return   Ksiazka.pokazStatus =1;
}
