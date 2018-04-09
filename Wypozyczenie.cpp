#include"ListaWypozyczen.cpp"
#include <iostream>

using namespace std;

class Wypozyczenie{

private:
    int ID;
public:
    Wypozyczenie();
 //   void przedluz();
    int pokazID();
};

//Konstruktor

Wypozyczenie::Wypozyczenie(int ID) {
    this->ID=ID;
}

//void Wypozyczenie::przedluz() {

//}

void Wypozyczenie::pokazID() {
    cout<<this.ID<<endl;
}
