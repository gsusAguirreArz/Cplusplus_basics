#include <iostream>

using namespace std;

// memory: fixed size

// access an element: O(1)
// add element at begining: O(n)
// add element at end: O(n)
// add element at position n: O(n)
// insert elemen: O(n)
// remove element: O(n)


int main(){

    // not using arrays
    // float month1 = 100;
    // float month2 = 220;
    // float month3 = 300;
    // float month4 = 0;
    // float month5 = 200;
    // float month6 = 250;

    // float total = month1 + month2 + month3 + month4 + month5 + month6;
    // float average = total / 6;
    // float inTwoYears = average * 24;

    // cout << "total = " << total << "\naverage = " << average << "\nin two years = " << inTwoYears << endl;

    // using arrays
    // float monthsArray[6] = { 100, 220, 300, 0, 200, 250 };

    float monthsArray[6];

    for (int i = 0; i < 6; i ++){
        cout << "Enter amount for month " << i + 1 << ": " << endl;
        cin >> monthsArray[i];
    }




    float total = 0;
    float average;
    float inTwoYears;

    for ( int i = 0; i < 6; i++ ){
        total += monthsArray[i];
    }

    average = total / 6;
    inTwoYears = average * 24;

    cout << "total = " << total << "\naverage = " << average << "\nin two years = " << inTwoYears << endl;

    // how to accept size as input (using dynamic arrays)
    // using a bigger array
    // accesing elemnts is fast
    // only way to add more elemnts is to create a bigger array


    return 0;
}