#include <iostream>
using namespace std;

int main(){
    char c1, c2, c3, c4 , c5; // create more than one variable of the same type
    cout << "Type 5 letters: " << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ascii message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) <<endl;
    // cout << c1 + c2;


    return 0;
}