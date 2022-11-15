
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

vector<int> read_from_file(string file_name) {
    vector<int> v;
    string line;
    ifstream myfile(file_name);
    if (myfile.is_open()){
        while (getline(myfile, line)){
            v.push_back(stoi(line));
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
    return v;
}

void task(vector<int> v, int mod, string file_name) {
    ofstream out;        
    out.open(file_name);
    if (out.is_open()){
        for (size_t i = 0; i < v.size(); i++){
            if(v[i]%2 == mod )
                out << v[i] << endl;
        }
        
    }
    out.close();
}

int main()
{
    vector<int> v = read_from_file("f1.txt");

    task(v, 0, "f2.txt");
    task(v, 1, "f3.txt");
}
