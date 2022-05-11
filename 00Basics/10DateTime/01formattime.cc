#include <iostream>
#include <ctime>

int main(){
    // current date/time based on current system
    std::time_t now = time(0);

    std::cout << "Number of sec since Jan 1, 1970 is: " << now << std::endl;

    std::tm *ltm = localtime(&now);

    // print various components of tm structure.
    std::cout << "Year: " << 1900 + ltm->tm_year << std::endl;
    std::cout << "Month: " << 1 + ltm->tm_mon << std::endl;
    std::cout << "Day: " << ltm->tm_mday << std::endl;
    std::cout << "Time: " << 5 + ltm->tm_hour << ":";
    std::cout << 30 + ltm->tm_min << ":";
    std::cout << ltm->tm_sec << std::endl;
    return 0;
}