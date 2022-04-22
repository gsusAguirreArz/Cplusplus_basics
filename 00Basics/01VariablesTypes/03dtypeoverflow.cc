#include <iostream>
#include <climits>
using namespace std;


int main(){
    int intMax = INT_MAX;
    cout << intMax <<endl;
    // datatype overflow!! woprks like a clock!
    cout << intMax+1;

    return 0;
}