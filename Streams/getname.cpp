#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

// C++ program to accept a name & age and store output in a file

char firstname[50];
char lastname[50];
int age = 0;
int main()
{
    using namespace std;
    std::cout << "Enter your first name\n";
    std::cin >> firstname;
    std::cout << "Enter your last name\n";
    std::cin >> lastname;
    std::cout << "Enter your age\n";
    std::cin >> age;
    std::cout << "Your first name is:" << firstname << std::endl;
    std::cout << "Your last name is:" << lastname << std::endl;
    std::cout << "Your age is:" << age << std::endl;
// file handle
    ofstream output;
    // open a file
    output.open("output_file.txt");
// write to file as a stream
    output << "This is the first line of the file." << endl;
    output << "FirstName: " << firstname << '\t';
    output << "LastName: " << lastname << '\t';
    output << "Age: " << age << endl;
    output.close();

    return 0;
}


