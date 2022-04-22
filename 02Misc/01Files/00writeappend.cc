#include <iostream>
#include <fstream> //library to read and write files

using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::fstream;

int main(){
    fstream myFile;

    // open file
    myFile.open("saldina.txt", ios::out ); // wirte
    if ( myFile.is_open() ){
        myFile << "Hello \n";
        myFile << "This is second line \n";
        myFile.close();
    }

    myFile.open("saldina.txt", ios::app ); // wirte
    if ( myFile.is_open() ){
        myFile << "Hello 2 \n";
        // myFile << "This is second line \n";
        myFile.close();
    }

    return 0;
}