#include <iostream>

int main(){
    // The declarations specify that that "a" is a pointer to a block of memory that can hold five integer. THe poitner is fixed, that is, "a" should be treated as a constant so that any attempt to assign a value to it COMPILER ERROR: a = p; a++;

    int a[5] = {1,2,3,4,5}, *p, sum, i;

    // Print memory address of array block
    // For arrays all the following equivalences hold:
    // a     ~ &a[0]
    // a+1   ~ &a[1]
    // a+n-1 ~ &a[n-1] for size n aray.
    std::cout << "Memory addres of first item: " << a << " = " << &a[0] << std::endl;

    // Add all the values of the array method 1
    for (
        sum = a[0], i = 1; 
        i < 5; 
        i++
    )
        sum += a[i];
    std::cout << "Sum using direct access: " << sum << std::endl;

    // Add all the values of the array method 2 using pointers
    for (
        sum = *a, i = 1; 
        i < 5; 
        i++
    )
        sum += *(a+i);
    std::cout << "Sum using pointers: " << sum << std::endl;

    // Add all the values of the array method 2 using pointers
    for (
        sum = *a, p = a + 1; 
        p < a + 5; 
        p++
    )
        sum += *p;
    std::cout << "Sum using pointers: " << sum << std::endl;


    return 0;
}