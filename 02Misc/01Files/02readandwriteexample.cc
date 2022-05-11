#include <iostream>
#include <fstream>

int main(void){
    char data[100];

    // open a file in write mode.
    std::ofstream outfile;
    outfile.open("afile.dat");

    std::cout << "Writing to the file" << std::endl;
    std::cout << "Enter your name: ";
    std::cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> data;
    std::cin.ignore();

    // again write inputted data into the file.
    outfile << data << std::endl;

    // close the opened file
    outfile.close();

    // open a file in read mode.
    std::ifstream infile;
    infile.open("afile.dat");

    std::cout << "Reading from the file" << std::endl;
    infile >> data;

    // write the data at the screen.
    std::cout << data << std::endl;

    // again red the data from the file and display it.
    infile >> data;
    std::cout << data << std::endl;

    // close the opened file.
    infile.close();

    return 0;
}