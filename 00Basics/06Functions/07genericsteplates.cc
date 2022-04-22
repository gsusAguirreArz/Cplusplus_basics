#include <iostream>
using namespace std;

// void Swap(int& a, int& b){
//     a = a + b; 
//     b = a - b;
//     a = a - b;
// }
// void Swap(char& a, char& b){
//     char temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int a = 5, b = 7;
//     cout << a << " - " << b << endl;
//     Swap(a,b);
//     cout << a << " - " << b << endl;

//     char c = 'c', d = 'd';
//     cout << c << " - " << d << endl;
//     Swap(c,d);
//     cout << c << " - " << d << endl;
//     return 0;
// }

// using generics! to noit use the swap funciton for each dtype, use the same logic with different dtypes

// using templates
template <typename T>
// template <class Type>

void Swap(T& a , T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a,b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c,d);
    cout << c << " - " << d << endl;
    return 0;
}