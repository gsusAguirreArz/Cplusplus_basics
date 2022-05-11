#include <iostream>

int main(){
    int n;
    std::cout << "Type n: ";
    std::cin >> n;

    int sum = 0, x_in;
    for ( int i = 0; i < n; i++ ){
        std::cout << "Type number: ";
        std::cin >> x_in;
        sum += x_in;
    }
    std::cout << "Your numbers sum: " << sum << std::endl;
    
    return 0;
}