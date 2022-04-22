#include <iostream>
#include <iomanip> // controls the witdth

using namespace std;

int main(){
    // draw a isoceles triangle
    int length;
    char sym;
    cout << "Length: " << endl;
    cin >> length;
    cout << "Enter character --> ";
    cin >> sym;

    for ( int i = 1; i <= length; i++ ){
        for ( int j = 1; j <= i; j++ ){
            cout << setw(3) << sym;
        }
        cout << endl;
    }

    cout << endl << endl;
    // draw a reversed triangle

    for ( int i = length; i >= 1; i-- ){
        for ( int j = 1; j <= i; j++ ){
            cout << setw(3) << sym;
        }
        cout << endl;
    }



    return 0;
}