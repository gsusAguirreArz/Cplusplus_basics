#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    char operand;
    cout << "**CodeBeauty Calculator**" << endl;
    cin >> num1 >> operand >> num2;

    // switch case uses when value can hold a lot of different values

    switch (operand){
    case '-':
        cout << num1 << operand << num2 << "=" << num1 - num2 << endl;
        break; // are necesary!! if your dont it will ejxecutes until it finds a break
    case '+':
        cout << num1 << operand << num2 << "=" << num1 + num2 << endl;
        break; 
    case '*':
        cout << num1 << operand << num2 << "=" << num1 * num2 << endl;
        break; 
    case '/':
        cout << num1 << operand << num2 << "=" << num1 / num2 << endl;
        break; 
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = (int)num1 == num1;
        isNum2Int = int(num2) == num2;
        (isNum1Int && isNum2Int)?cout << num1 << operand << num2 << "=" << int(num1) % int(num2) << endl : cout << "Not valid!" << endl;
        break; 
    default:
        cout << "ERROR: Not a valid operator!!!" << endl;
        break;
    }
}