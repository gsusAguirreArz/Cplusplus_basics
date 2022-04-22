#include <iostream>

using namespace std;


int main(){

    int luckyNumbers[5] = {2,3,4,5,6};
    cout << luckyNumbers << endl; // this behaves as a poointer
    cout << &luckyNumbers[0] << endl; // indexing as dereferencing

    // to prove it
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl;

    int newArray[5];

    // traditional way of storign values
    for (int i = 0; i < 5; i++){
        cout << "Number: " << endl;
        cin >> newArray[i];
    }

    for (int i = 0; i <= 5; i++ ){ // do not access memory lcoations that do not belong to you
        cout << *(newArray + i) << " ";
    }

    // cout << newArray[4] << endl;

    return 0;
}