#include <iostream>
#include <fstream> //library to read and write files
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::fstream;

int main(){
    fstream myFile;
    myFile.open("saldina.txt", ios::in); // read mode
    if (myFile.is_open()){
        string line;
        while (getline(myFile, line)){
            cout << line << endl;
        }
        myFile.close();
    }

    return 0;
}