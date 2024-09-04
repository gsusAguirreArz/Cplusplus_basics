#include <iostream>

// void printItems(int n) {

//     // // O(n)
//     // for (int i = 0; i < n; i++){
//     //     std::cout << i << std::endl;
//     // }

//     // //O(2n)
//     // for (int i = 0; i < n; i++){
//     //     std::cout << i << std::endl;
//     // }

//     // for (int j = 0; j < n; j++){
//     //     std::cout << j << std::endl;
//     // }

//     //O(n^2)
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             std::cout << i << j << std::endl;
//         }
//     }
// }

void printItems(int a, int b) {

    // O(m+n)
    // O(n)
    for (int i = 0; i < a; i++){
        std::cout << i << std::endl;
    }
    // O(m)
    for (int j = 0; j < b; j++){
        std::cout << j << std::endl;
    }
}

int addItems(int n) {
    // O(2)
    return n + n + n;
}


int main(){
    printItems(10, 11);
}