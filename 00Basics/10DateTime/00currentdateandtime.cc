#include <iostream>
#include <ctime>

int main(){
    // current date/time based on current syste,
    std::time_t now = std::time(0);

    // convert now to string form
    char* dt = std::ctime(&now);

    std::cout << "The local date and time is: " << dt << std::endl;

    // convert now to tm struct for UTC
    std::tm *gmtm = std::gmtime(&now);
    dt = std::asctime(gmtm);
    std::cout << "The UTC date and time is: " << dt << std::endl;
    return 0;
}