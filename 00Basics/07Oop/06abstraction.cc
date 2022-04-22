#include <iostream>
using namespace std;

// abstractions means
// showing important information while hiding complex details
// complex details behind easy implementations

class Smartphone{
    public:
        virtual void TakeSelfie() = 0;
        // virtual void MakeACall() = 0;
};

class Andorid : public Smartphone {
    public:
        void TakeSelfie(){
            cout << "Andorid selfie" << endl;
        }
};

class Iphone : public Smartphone {
    public:
        void TakeSelfie(){
            cout << "IPhone selfie" << endl;
        }
};

int main() {
    Smartphone* s1 = new Andorid();
    Smartphone* s2 = new Iphone();

    s2 -> TakeSelfie();
    return 0;
}