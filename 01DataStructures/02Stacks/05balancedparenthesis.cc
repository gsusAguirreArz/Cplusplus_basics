#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

// given expression check if parenthesis are balanbced
// (a + b) | yes
// {(a+b) + (c+d)} | yes
// { ( x+ y )*(z) | no
// [2+3] + (a)] | no
// {a+z) | no
// )( | no
// [{}] | yes
// [(]) | no

// last openend first closed

// solution:
// 1. scan from left to right
// 2. if opening symbol, add it to a list
// 3. if cxlosing symbol, remove last opening symbol in list
// 4. if it is balanced end list is empty

bool isPair( char top, char s ){
    if ( top == '[' && s == ']' )
        return true;
    if ( top == '{' && s == '}' )
        return true;
    if ( top == '(' && s == ')' )
        return true;
    return false;
}

bool checkBalancedParenthesis( char* C ){
    int n;
    n = strlen(C);

    stack <char> S;

    for ( int i = 0; i < n; i++ ){
        if ( C[i] == '[' || C[i] == '{' || C[i] == '(' ){
            S.push(C[i]);
        }else if ( C[i] == ']' || C[i] == '}' || C[i] == ')' ) {
            if ( S.empty() || !isPair( S.top(), C[i] ) ){
                return false;
            }else{
                S.pop();
            }
        }
    }

    return S.empty() ? true : false;
}

int main(){
    char C[51];
    cout << "Type expression: " << endl;
    cin >> C;
    cout << ( checkBalancedParenthesis(C) ? "yes" : "no" ) << endl;
}