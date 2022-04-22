#include <iostream>
using namespace std;


int recursive_sum(int m, int n){
    if (m == n){
        return m;
    }
    return m + recursive_sum( m + 1, n);
}
// sum numbers between m - n
int main(){

    int m=5, n=552;

    // solution using loops

    // int sum = 0;
    // for ( int i = m; i<= n; i++ ){
    //     sum += i;
    // }

    // solution using recursion

    int sum = recursive_sum(m,n);


    cout<< "Sum: " << sum << endl;
    
    return 0;
}