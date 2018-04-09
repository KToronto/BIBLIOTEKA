#ListaRezerwacji

#include <iostream>
#include<vector>
#include<cstring>
#include "Rezerwacja.cpp"
using namespace std;

//Tworzenie klasy

class ListaRezerwacji{

private:
        int liczbaRezerwacji;
        vector <Rezerwacja> lista;
public:
        ListaRezerwacji(){
            liczbaRezerwacji = 0;
        };
        void anuluj_rezerwacje(int ID);
        pokaz1rezerwacje();
        vector <Rezerwacja>  pokaz_rezerwacje()
        {
            return lista;
        };
        void zrob_rezerwacje(int ID);
};

//Konstruktor

ListaRezerwacji::ListaRezerwacji(int liczbaRezerwacji) {
    this->liczbaRezerwacji= liczbaRezerwacji;
}


void ListaRezerwacji:: anuluj_rezerwacje(int ID){

    for(int i=0; i<lista.size(); i++)
    {
        if(lista.at(i).pokazID() == ID)
            lista.erase(lista.begin()+i);
    }

}
void ListaRezerwacji::pokaz1rezerwacje(int ID) {
    strcpy(int id);
    cout<<ID.rezerwacja<<endl;  //??
}
void ListaRezerwacji::zrob_rezerwacje(int ID){
        lista.push_back(rezerwacja);
}


