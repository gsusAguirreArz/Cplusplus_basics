#include <iostream>
using namespace std;

int main(){
    //
    int year, month;
    cout << "Year, month: " << endl;
    cin >> year >> month;

    switch (month)
    {
    case 2:
        //condition for leap year
        ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) ? cout << "29 days month" << endl : cout << "28 days month";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month." << endl;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days month." << endl;
        break;
    default:
        cout << "Error: Enter a valid month number!" << endl;
        break;
    }
}