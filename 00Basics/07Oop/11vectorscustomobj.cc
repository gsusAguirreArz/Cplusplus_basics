#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <iomanip>


class Person{
    private:
        char *name;
        int age;
        friend bool lesserAge( const Person&, const Person& );
        friend std::ostream& operator << ( std::ostream&, const Person& );
    public:
        Person( const char* n = "", int a = 0 ){
            name = new char[std::strlen(n) + 1];
            std::strcpy(name, n);
            age = a;
        }
        // ~Person(){
        //     if ( name != NULL ){
        //         delete[] name;
        //         name = NULL;
        //     }
        // }

        bool operator == ( const Person& p ) const {
            return std::strcmp(name, p.name) == 0 && age == p.age;
        }
        bool operator < ( const Person& p ) const {
            return std::strcmp(name, p.name) < 0;
        }
        bool operator > ( const Person& p ) const {
            return !(*this == p) && !(*this < p);
        }

};


template<class T>
void printVector( std::vector<T> vector, const char* s = "V" );
bool f1( int n );
bool lesserAge( const Person& p1, const Person& p2 );
std::ostream& operator << ( std::ostream& os, const Person& p );


int main(){
    std::vector<int> v5(5);
    printVector(v5, "v5");
    v5[1] = v5.at(3) = 9;
    printVector(v5, "v5");

    // algorithms
    v5[0] = 3;
    printVector(v5, "v5");
    std::replace_if( v5.begin(), v5.end(), f1, 7);
    printVector(v5, "v5");
    v5[0] = 3; v5[2] = v5[4] = 0;
    printVector(v5, "v5");
    std::replace( v5.begin(), v5.end(), 0, 7);
    printVector(v5, "v5");
    std::sort( v5.begin(), v5.end() );
    printVector(v5, "v5");
    std::sort( v5.begin(), v5.end(), std::greater<int>() );
    printVector(v5, "v5");
    v5.front() = 2;
    printVector(v5, "v5");

    // custom class
    Person p1("Gredd", 25);
    // custom printout of a class
    std::cout << p1 << std::endl;
    // below does not work if destructor implemented
    std::vector<Person> v6{Person("Gregg", 25)};
    printVector(v6, "v6");
    v6.push_back(Person("Ann", 30));
    v6.push_back(Person("Bill", 20));
    printVector(v6, "v6");
    std::sort(v6.begin(), v6.end());
    printVector(v6, "v6");
    std::sort(v6.begin(), v6.end(), std::greater<Person>() );
    printVector(v6, "v6");
    std::sort(v6.begin(), v6.end(), lesserAge );
    printVector(v6, "v6");


    return 0;
}


template<class T>
void printVector( std::vector<T> vector, const char* s ){
    std::cout << s << " = (" << std::setw(2);

    if ( vector.size() == 0 ){
        std::cout << ")" << std::endl;
        return;
    }

    // Below method does not work while printint vector<Person>
    // int i = 0;
    // for ( int i = 0; i < vector.size() - 1; i++ )
    //     std::cout << vector[i] << "," << std::setw(2);
    // std::cout << vector[i] << std::setw(2) << ")" << std::endl;

    typename std::vector<T>::const_iterator i = vector.begin();
    for ( ; i < vector.begin() + vector.size() - 1; i++ )
        std::cout << *i << ", ";
    std::cout << *i << " )" << std::endl;
    return;
}

bool f1( int n ){
    return n < 4;
}

// friend functions of Person
bool lesserAge( const Person& p1, const Person& p2 ){
    return p1.age < p2.age;
}

std::ostream& operator << ( std::ostream& os, const Person& p ){
    os << "(" << p.name << "," << p.age << ")";
    return os;
}