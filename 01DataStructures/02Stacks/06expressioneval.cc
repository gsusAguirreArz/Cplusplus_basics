#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

// Evaluation of expressions!
// expression evaluate according to a grammar
// <operand><operator><operand>
// operand object on which operation is performed
// Infix notation:  <operand><operator><operand> // devide order // human readable
// prefix notation ( polish notation ): <operator><operand><operand> // good for machines
// postfix notation ( reversed polish notation ): <operand><operand><operator> // easiest to par // good for machines

// order of operation (infix, we have ambiguity)

// 1. parentheses {} [] ()
// 2. exponents (right to left) 2^3^2 -> 2^9 
// 3. multiplication and division ( left to right)
// 4. addition and substraction ( left to right )

// | infix      | prefix        | postfix       |
// | 2 + 3      | +23           | 23+           |
// | p - q      | -pq           | pq-           |
// | a + b * c  | +a*bc         | abc*+         |


// Evaluation of postfix expression

// for prefix we read from right to left!!

bool isOperand(char c){
    switch (c){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
            break;
        
        default:
            return false;
            break;
    }
}

bool isOperator( char c ){
    switch (c){
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            return true;
            break;
        
        default:
            return false;
            break;
    }
}

int applyOperator(int x, int y, char op){
    switch (op){
        case '+':
            return x + y;
            break;
        case '-':
            return x - y;
            break;
        case '*':
            return x * y;
            break;
        case '/':
            return x / y;
            break;
        case '^':
            return x ^ y;
            break;
        
        default:
            return -1;
            break;
    }
}

int evalPostfix( char* exprss ){
    int n;
    n = strlen(exprss);

    stack<int>S;

    for (int i = 0; i < n ; i++ ){
        if ( !isOperator(exprss[i]) ){
            int val = exprss[i] - '0'; // change char to int
            S.push(val);
        }else{
            char op = (char) exprss[i];
            int n,m,res;
            n = S.top();
            S.pop();
            m = S.top();
            S.pop();
            res = applyOperator(m,n, op);
            S.push(res);
        }
    }
    return S.top();
}

int main(){
    // char x,y,op;
    // cin >> x >> y >> op;
    // cout << isOperand(x) << endl;
    // cout << isOperator(op) << endl;
    char exp[51];
    cout << "Type postfix expression: "<< endl;
    cin >> exp;
    cout << evalPostfix(exp) << endl;
    return 0;
}