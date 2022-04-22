#include <iostream>
using namespace std;

// int main(){
//     // user enters side lengths of a triangle (a,b,c)
//     // program should write out wheter that triangle is equilateral, isoceles or scalene
//     float a,b,c;
//     cout << "Enter the lenght of each side of your triangle: "<<endl;
//     cin >> a >> b >> c;
//     if ( a == b && b == c){
//         cout << "Your triangle is equilateral" << endl;
//     }else{
//         if ( a != b && a != c && b != c){
//             cout << "Your triangle is scalene" << endl;
//         }else{
//             cout << "Your triangle is Isoceles" << endl; 
//         }
//     }

//     return 0;
// }

int main(){
    float a, b, c;
    cout << "(a,b,c)" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "Equilateral" << endl;
    else{
        if ( a == c || a == b || b == c )
            cout << "Isoceles" << endl;
        else
            cout << "Scalene" << endl;
    }
    return 0;
}