#include <iostream>

int main(void){
    double* pvalue = NULL; // pointer init with null
    pvalue = new double; // requesto memory for the variable

    *pvalue = 29494.99; // store value at allocated adderss
    std::cout << "Value of pvalue: " << *pvalue << std::endl;

    /*
    For mul;ti arrays we use
    double** pvalue = NULL;
    pvalue = new double[3][4];
    ...
    delete[] pvalue;
    */

    delete pvalue;
    pvalue = NULL;

    return 0;
}