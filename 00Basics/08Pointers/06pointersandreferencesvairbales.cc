#include <iostream>


// Reference variables are used in passing arguments by reference to function calls. Required if an actual aprameter should be changted permanently during execution of a funciton. (accomplished with pointers)

void f1( int i, int *j, int& k );

// lso used in idficating return type of functinos
// e.g.
int& f2( int a[], int i );

// accomplish the same as f2 with pointers
int* f3( int a[], int i );


int main(){
    int n = 5; // normal variable
    int *p = &n; // pointer variable
    int &r = n; // reference vairiable (equivalent to: int *const r = &n; )

    // if yo implement: int *const r = &n; r = q where q is another pointer gives an error, but *r = 1 es acceptable.
    // if yo implement: const int * r = &n; s = &m wheter m is constant or not is admissible but *s = 2 gives an error.

    // print value of n, value of p, and value of r
    std::cout << n << " " << *p << " " << r << std::endl;

    // Assign n = 7
    n = 7;
    std::cout << n << " " << *p << " " << r << std::endl;

    // Assign n throught *p
    *p = 9;
    std::cout << n << " " << *p << " " << r << std::endl;

    // Assign r 
    r = 7;
    std::cout << n << " " << *p << " " << r << std::endl;


    // ===========================================================
    // In terms of notation reference variables are implemented as constant pointer.

    int n1 = 5, n2 = 6, n3 = 7;
    std::cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << std::endl;

    // funciton call by reference
    f1(n1, &n2, n3);
    std::cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << std::endl;


    // ===========================================================
    //
    int a[] = {10,20,30,40,50};
    int ai = f2(a,3);
    std::cout << "a[3] = " << ai << std::endl;
    // With the reference return type we can do the following
    f2(a,3) = 600;
    std::cout << "a[3] = " << a[3] << std::endl;
    // using f3
    *f3(a,3) = 1230;
    std::cout << "a[3] = " << a[3] << std::endl;

    return 0;
}


void f1( int i, int *j, int& k ){
    i = 1;
    *j = 2;
    k = 3;
    return;
}

int& f2( int a[], int i ){
    return a[i];
}

int* f3( int a[], int i ){
    return &a[i];
}