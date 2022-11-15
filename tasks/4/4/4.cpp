

#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct patient {
    string fio;
    string male;
    int age;
    string addres;
};

vector<string> split(string s) {
    vector<string> elems;
    string input = "foo bar baz  quxx\nducks";
    stringstream ss(input);

    string word;
    while (ss >> word) {
        elems.push_back(word);
        cout << word << '\n';
    }
    cout << endl;
    return elems;
}

patient split_patient(string s) {
    vector<string> elems = split(s);
    patient p;
    p.fio = elems[0];
    p.male = elems[1];
    p.age = stoi(elems[2]);
    p.addres = elems[3];

    return p;
}

void read_from_file(string file_name) {
    string line;
    ifstream myfile(file_name);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
}

void add(patient p, string file_name) {

    ofstream out;
    out.open(file_name, ios::app);
    if (out.is_open()) { 
        out << p.fio <<" "<<p.male<<" "<<p.age<<" "<<p.addres<<" "<< endl;       
    }
    out.close();


}


int main(){
    patient p;
    p.fio = "fio_";
    p.age = rand() % 40;
    p.male = "man";
    p.addres = "addres_";
    add(p, "p.txt");

    read_from_file("p.txt");
    return 0;
}

