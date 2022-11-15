#include <iostream>
using namespace std;

const int LEN = 80;
class Musical_Instrument {
private:
    string instrument;
    string name;
    double m;
    string manufacturer;
    
public:
    Musical_Instrument() : name(""), instrument(""), m(0) , manufacturer("") {}
    Musical_Instrument(string name, double m, string manufacturer) {
        this->name = name;
        this->manufacturer = manufacturer;
        this->m = m;
    }
    void getdata() {
        cout << "\nИнструмент " + instrument;
        cout << "\n   имя: " << name;   
        cout << "\n   масса: "<<m;
        cout << "\n   производитель: " << manufacturer;

    }
    void setData(string instrument, string name, double m, string manufacturer) {
        this->instrument = instrument;
        this->name = name;
        this->manufacturer = manufacturer;
        this->m = m;
    }
};


class Percussion : public Musical_Instrument {
private:
    string instrument;
    string name;
    double m;
    string manufacturer;
public:
    Percussion() : name("Percussion"), instrument(""), m(0), manufacturer("") {};

};
class Brass : public Musical_Instrument {
private:
    string instrument;
    string name;
    double m;
    string manufacturer;
public:
    Brass() : name("Brass"), instrument(""), m(0), manufacturer("") {};

};

class Stringet : public Musical_Instrument {
private:
    string instrument;
    string name;
    double m;
    string manufacturer;
public:
    Stringet() : name("Stringet"), instrument(""), m(0), manufacturer("") {};

};
int main() {
    system("chcp 1251");
    system("cls");
    Stringet s;
    s.setData("Stringer", "p-1", 30, "bosh");
    s.getdata();
    return (0);
}