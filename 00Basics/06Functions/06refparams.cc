#include <iostream>
using namespace std;

// referenced parameters change the value of the variable feeded

void addOneRef(int& ref){
    ref = ref + 1;
}

void addOneNormal(int x){
    x = x + 1;
}

int main() {
    int value{5};
    cout << "value= " << value << endl;
    addOneNormal(value);
    cout << "value= " << value << endl;
    addOneRef(value);
    cout << "value= " << value << endl;

    return 0;
}