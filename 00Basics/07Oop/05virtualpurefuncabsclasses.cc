#include <iostream>
using namespace std;

// VIRTUAL FUNCTIONS
// def: IS A FUNCTION THAT IS DEFINED IN BASE CLASS AND IS DEFINED IN DERIVED CLASS
// purpose: runtime polimorphism
// execute the most derived version of that function

// PURE VIRTUAL FUNCTIONS
// the base class doesnt have the implementation for the function, but make sure that every class that inherits from you implements the function

class Instrument {
    public:
        // virtual fucntion
        // to make a virtual function add virtual keyword
        virtual void MakeSound(){
            cout << "Instrument playing..." << endl;
        }

        // pure virtual function
        // by definition this is an abstract class
        // contains atl east one pure virtual function
        virtual void MakeNoise() = 0;
};

class Accordion: public Instrument {
    public:
        void MakeSound(){
            cout << "Accordion playing..." << endl;
        }

        void MakeNoise() {
            cout << "Making random accordion noise...." << endl;
        }
};

class Piano: public Instrument {
    public:
        void MakeNoise() {
            cout << "Making random piano noise...." << endl;
        }
};

int main() {

    // create a pointer to our base class
    Instrument* i1 = new Accordion(); // base class = derived class
    // i1 -> MakeSound();

    Instrument* i2 = new Piano();
    // i2 -> MakeNoise();

    Instrument* instruments [2] = { i1, i2 };

    for ( int i = 0; i< 2; i++ ){
        instruments[i] -> MakeNoise();
    }

    return 0;
}