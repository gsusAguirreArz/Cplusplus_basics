#include <iostream>
using namespace std;

int main(){

    // count digits of a number
    int number;
    cout << "Number: " << endl;
    cin >> number;
    // with very large numbers it uses dtypes overflow

    if ( number == 0){
        cout << "you have netered 0 " << endl;
    }else{
        if (number < 0)
            number *= -1;
        int counter = 0;
        while ( number > 0 ){
            number /= 10;
            counter++;
        }
        cout << "Number contains: " << counter << " digits." << endl;
    }

    return 0;
}