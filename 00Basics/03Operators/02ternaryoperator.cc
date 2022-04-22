#include <iostream>
using namespace std;

int main(){
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("clear");
    cout << "Guest: ";
    cin >> guestUserNum;

    // if ( guestUserNum == hostUserNum){
    //     cout << "Correct" << endl;
    // }else{
    //     cout << "Faled!" << endl;
    // }

    // ternary operator
    (guestUserNum == hostUserNum)? cout << "Correct" << endl :cout << "Faled!" << endl;

    return 0;
}