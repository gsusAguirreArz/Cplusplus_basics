#include <iostream>

int main(){
    int sum = 0, s, x_in;
    bool state = true;

    while ( state ){
        std::cout << "type '1' to add a number" << std::endl;
        std::cout << "type '0' to finish." << std::endl;
        std::cin >> s;
        if ( s == 1 ){
            std::cout << "type the number: ";
            std::cin >> x_in;
            sum += x_in;
        }
        if ( s == 0 ){
            state = false;
        }
    }

    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}