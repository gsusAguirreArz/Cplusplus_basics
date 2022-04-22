#include <iostream>

// what does namespace std does? 
//why bad practice??
// 
// using namespace std;
// short of standard is a namespace
// totally equivalent to: (good practice)
using std::cout;
using std::endl;
using std::string;


// namespaces!
// what are namespaces??
// decide to give the same name to to or more variables??
// error!
// can contain anything!

//create a namespace 
namespace namespace1 {
    int age = 25;
    string name = "SAldina";
}
namespace namespace2 {
    int age = 26;
}

int main(){
    // int age = 25;
    // int age = 26;
    // age = 30;

    cout << namespace2::age << endl;
    cout << namespace1::name << std::endl;

    return 0;
}