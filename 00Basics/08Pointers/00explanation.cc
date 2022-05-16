#include <iostream>



/*
All variables have two attributes: the content (value) and the loction (memory address)
Pointers store memory addresses.
*/
int main(){
    int i = 15, j, *p, *q;

    // Assign addres of i to p.
    // operator & on the right gets the memory address of any variable.
    p = &i;
    // print the value of pointer p.
    std::cout << "Value of pointer p = " << p << std::endl;

    // Change the value of the location that the pointer holds.
    // assign 20 to i wiithout calling i, throught p.
    // using *p = 20 (star here is an inderection operation that access the location and the assigns 20)
    std::cout << "Value of i = " << i << " equals " << *p << " = Value of lacation p holds *p" << std::endl;
    *p = 20;
    std::cout << "Value of i = " << i << " equals " << *p << " = Value of lacation p holds *p" << std::endl;

    // Pointers like variables also have the two attributes mentioned before: value and memory addres
    
    // Using value
    j = 2 * *p;
    std::cout << "Value of j = " << j << std::endl;

    // Printing memory address
    std::cout << "Memory address of p = " << &p << std::endl;

    // Assigning pointer q
    std::cout << "Memory address of q = " << &q << std::endl;
    q = &i;
    std::cout << "Value of i = " << i << " equals " << *q << " = Value of lacation q holds (*q)" << std::endl;

    // Reassgning *p value
    *p = *q - 1;
    std::cout << "Value of i = " << i << " equals " << *q << " = Value of lacation q holds (*q)" << std::endl;

    // When using dynamically allocated memory
    // p = new int;
    // delete p;
    // p = 0;


    return 0;
}