#include <iostream>
#include <iomanip> // controls the witdth

using namespace std;

int main(){
    // draw a rectangle shape
    int h,w;
    char sym;
    cout << "Height: " << endl;
    cin >> h;
    cout << "Width: " << endl;
    cin >> w;
    cout << "Enter character --> ";
    cin >> sym;

    for ( int i = 0; i < h; i++ ){
        for ( int j = 0; j < w; j++ ){
            cout << setw(3) << sym;
        }
        cout << endl;
    }


    return 0;
}