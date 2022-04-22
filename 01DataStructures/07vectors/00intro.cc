#include <iostream>
#include <vector>

using namespace std;

// vecotr is dynamically allocated!!

int main(){
    vector<int>v1;
    v1 = {1,2,3};
    
    // getting info
    cout << "Element at idx = 0 : " << v1[0] << endl;
    cout << "Element at front: " << v1.front() << endl;
    cout << "Element at tail: " << v1.back() << endl;
    cout << "Vector size : " << v1.size() << endl;
    cout << "Vector capacity: " << v1.capacity() << endl;

    //add elements
    v1.push_back(9);
    cout << "Capacity :" << v1.capacity() << endl;
    v1.pop_back();
    cout << "Capacity:" << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << "Capacity:" << v1.capacity() << endl;
    
    // insert element!
    // need a pointer to the position
    v1.insert(v1.begin(),5);
    cout <<"Element at v[0]: " << v1[0] << endl;
    v1.insert( v1.begin() + 1, 10);
    cout <<"Element at v[1]: " << v1[1] << endl;

    // delete a element!
    v1.erase(v1.begin());
    cout <<"Element at v[0]: " << v1[0] << endl;

    cout<< "Size is: " << v1.size() << endl;
    cout << "Vector: [ ";
    for ( int i = 0; i < v1.size(); i++ ){
        cout << v1[i] << ", ";
    }
    cout << "]\n";

    return 0;
}