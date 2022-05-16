#include <iostream>
#include <cstring>


// struct only differs from class in that class members private and struct members are public. 


struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct Books Book1; // Decalre Book1 of type Book
    struct Books Book2; // Decalre Book2 of type Book

    // book 1 specification
    std::strcpy(Book1.title, "Learn C++ Programming");
    std::strcpy(Book1.author, "Chand Miyan");
    std::strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // book 1 specification
    std::strcpy(Book2.title, "Learn Python Programming");
    std::strcpy(Book2.author, " Miyan");
    std::strcpy(Book2.subject, "Python Programming");
    Book2.book_id = 6495700;

    // Print Book1 info
    std::cout << "Book 1 title: " << Book1.title << std::endl;
    std::cout << "Book 1 author: " << Book1.author << std::endl;
    std::cout << "Book 1 subject: " << Book1.subject << std::endl;
    std::cout << "Book 1 id: " << Book1.book_id << std::endl;

    // Print Book1 info
    std::cout << "Book 2 title: " << Book2.title << std::endl;
    std::cout << "Book 2 author: " << Book2.author << std::endl;
    std::cout << "Book 2 subject: " << Book2.subject << std::endl;
    std::cout << "Book 2 id: " << Book2.book_id << std::endl;
    return 0;
    
}
