#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

// parse from left to right

char* infixToPostfix( char* c){
    int n = strlen(c);
    char* res = '\0';
    stack <char> S;
    for ( int i = 0; i < n; i++ ){
        if ( isOperand(c[i]) )
            res += c[i];
        if ( isOperator(c[i]) ){
            while ( !S.empty() && hasHigherPrecedence(S.top(), c[i] ) ){
                res += S.top();
                S.pop();
            }
            S.push(c[i]);
        }
    }

    while( !S.empty() ){
        res += S.top();
        S.pop();
    }

    return res;
}

int main(){
    return 0;
}