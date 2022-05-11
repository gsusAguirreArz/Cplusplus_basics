#include <iostream>
#include <cstring>

void printBook( struct Books book );

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
    printBook( Book1 );

    // Print Book2 info
    printBook( Book2 );

    return 0;
}

void printBook( struct Books book ){
    std::cout << "Book title: " << book.title << std::endl;
    std::cout << "Book author: " << book.author << std::endl;
    std::cout << "Book subject: " << book.subject << std::endl;
    std::cout << "Book id: " << book.book_id << std::endl;
    return;
}
