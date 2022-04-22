#include <iostream>
using namespace std;

void showMenu();

int main(){
    int option;
    double balance = 500;

    do {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("clear");

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << endl;
            break;
        case 2:
            double depositAmount;
            cout << "Deposit amount: " << endl;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            double withdrawAmount;
            cout << "Withdraw amount: " << endl;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance){
                balance -= withdrawAmount;
            }else{
                cout << "NOt enough money!" << endl;
            }
            break;
        }
    }while(option != 4);
    

    // check balance, deposit, withdrawm show menu
    return 0;
}

void showMenu(){
    cout << "************MENU************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "****************************" << endl;
}