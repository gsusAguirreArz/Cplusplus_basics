#include <iostream>
using namespace std;

int main(){
    // enter 3 grades or more, and get average grade

    int grade, sum = 0;

    for(int i = 0; i < 3; i++){
        do{
            cout << "Enter grade " << i + 1 << ": " << endl;
            cin >> grade;
        }while(grade < 0 || grade > 10);

        sum += grade;
    }

    cout << "Average: " << sum / 3.0 << endl;

    return 0;
}