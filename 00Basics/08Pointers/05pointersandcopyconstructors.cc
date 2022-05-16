#include <iostream>
#include <string>
#include <cstring>


// struct only differs from class in that class members private and struct members are public. 

struct Node {
    char *name;
    int age;
    Node( const char *n = "", int a = 0 ){ // Constructor
        std::cout << "Node::Node() Constructor" << std::endl;
        name = new char[std::strlen(n) + 1];
        std::strcpy(name, n);
        age = a;
    }

    // Default copy constructor makes a member by member copying since name is a pointer the copy constructor copies the string address node1.name to node2.name not the string ocntent

    // Define youre own copy constructor
    // Comment below to see the error on:  ( First ) 
    Node ( const Node& n ){ // copy constructor.
        name = new char[std::strlen(n.name) + 1];
        std::strcpy(name, n.name);
        age = n.age;
    }

    // Define youre own = constructor
    // Comment below to see the error on:  ( Second ) 
    Node& operator=( const Node& n ){
        if ( this != &n ){ // no assignment to itself;
            if ( name != "" )
                delete[] name;
            name = new char[std::strlen(n.name) + 1];
            std::strcpy(name, n.name);
            age = n.age;
        }
        return *this;
    }

    // we use destructor to clean memory usage.
    ~Node(){ // Destructor
        std::cout << "Node::~Node() Destructor" << std::endl;
        if ( name != "" )
            delete[] name;
    }
};

int main(){

    Node node1("Roger",20), 
    node2(node1), // init node2 with the same values as node1
    node3;

    std::strcpy(node2.name, "Wendy");
    node2.age = 30;

    // First
    //=================================================================
    //=================================================================

    // without a copy constructor the following gives Wendy 30 Wendy 30
    std::cout << node1.name << " " << node1.age << std::endl;
    std::cout << node2.name << " " << node2.age << std::endl;
    //=================================================================
    //=================================================================

    // the assignmnt operator operates the same if we dont overload it
    node3 = node1;
    std::strcpy(node3.name, "Jesus");
    node3.age = 50;

    // Second
    //=================================================================
    //=================================================================

    // without an = overload the following changes the name in node1
    std::cout << node1.name << " " << node1.age << std::endl;
    std::cout << node3.name << " " << node3.age << std::endl;
    //=================================================================
    //=================================================================

    return 0;
}