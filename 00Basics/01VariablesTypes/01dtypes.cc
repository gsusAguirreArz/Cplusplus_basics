#include <iostream>
#include <climits>
using namespace std;

int main(){
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5; // it takes 4 bytes
    double balance =  456789456; // it takes 8 bytes

    // how much space in mameryo each dtypoe takes?

    cout << "Size of int is: " << sizeof(int) << " bytes" << endl;
    cout << "Int min value is: " << INT_MIN << endl;
    // -1, -2, -3, ...., -2147483648
    cout << "Int max value is: " << INT_MAX << endl;
    // 0,1,2,3,...,2147483647

    cout << "Size of unsigned int is: " << sizeof(unsigned int) << "bytes" <<endl;
    cout << "UInt max value is: " << UINT_MAX << endl; // 2^{32}-1

    return 0;
}