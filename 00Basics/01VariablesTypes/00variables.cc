#include <iostream>
using namespace std;

// int main(){
//     float annualSalary = 50000.99; // created a variable named annualSalary with type flaoting point and assigned 50000.99 
//     float monthlySalary = annualSalary / 12;

//     cout << "Your monthly salary is: " << monthlySalary;

//     return 0;
// }

// dynamically same app
int main(){
    float annualSalary;
    cout << "Type your annual salary: " << endl;
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is : " << monthlySalary << endl;
    cout << "In 10 years you will earn: " << annualSalary * 10 << endl;

    char character = 'a'; // strings of text we use double quotation, single char use single quotes
    float firstSecondThird;

    return 0;
}