#include <iostream>
#include "Data.cpp"

using namespace std;

class Wypozyczenie{

private:
    int ID;
public:
    Wypozyczenie(){

        this->ID=ID;
    };
    void przedluz(Data data){

        int nowyDzien, nowyMiesiac, nowyRok;
        data.dzien=nowyDzien;
        data.miesiac=nowyMiesiac;
        data.rok=nowyRok;

        return data;

    };
    int pokazID(){

        return ID;
    };
};
