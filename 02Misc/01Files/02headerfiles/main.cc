#include <iostream>
// to run it in ubuntu console just
// g++ -o ./app main.cc food.cc


// the below will be substituted by
#include "food.h"

// using namespace std;

// const char* RecomendMeAFood(char firstLetter);
// .h header files
// .cpp implementation files (definitions of functions)

int main() {
    // everything in c++ must be declared!! (functions, variables, etc)
    // int age;
    std::cout << "Today I'll eat: " << RecomendMeAFood('c') << std::endl;
    GetPizzaRecipe();
    return 0;
}

// const char* RecomendMeAFood(char firstLetter){
//     if ( firstLetter == 'a' || firstLetter == 'A')
//         return "apple";
//     else if ( firstLetter == 'b' || firstLetter == 'B')
//         return "banana";
//     else if ( firstLetter == 'c' || firstLetter == 'C')
//         return "chocolate cake";
//     else return "pizza";
// }


