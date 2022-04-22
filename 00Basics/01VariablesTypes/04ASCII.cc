#include <iostream>
using namespace std;
// ascii uses 7 bits to represent each character, 2^7 (all english characters)
// utf8 utf16 are also other standards!

int main(){

    cout << (int)'a'<<endl; //casting operator! forces a datatype
    cout<<int('a')<<endl; //please tell me the numeric value of a
    cout<<int('A')<<endl;

    // can we get a char of our numeric value?
    cout << char(65)<<endl;
    return 0;
}