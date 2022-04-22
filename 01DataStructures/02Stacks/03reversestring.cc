#include <iostream>
#include <stack>
#include <string.h>
// #include <string>

using namespace std;

// using linked list 
// iterative solution time - O(n) , space - O(1), recursive sol time - O(n) , space - O(n)

void stringReverse(char *C, int n){
    // time complexity  O(n)
    // space complexity O(n)
    stack<char> S;
    for ( int i = 0; i < n; i++ ){
        S.push(C[i]);
    }

    for ( int i = 0; i < n; i++ ){
        C[i] = S.top();
        S.pop();
    }

}

int main(){

    char C[51];
    cout << "Enter a string: \n";
    cin >> C;
    stringReverse(C, strlen(C) );
    cout << "Output: " << C << endl;
    return 0;
}