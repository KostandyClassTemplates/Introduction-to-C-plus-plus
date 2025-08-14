// variables_and_assignments.cpp
// A simple C++ example to introduce variables and assignments
//
// In C++, a namespace is a way to organize code and avoid naming conflicts.
// The 'std' namespace contains common C++ features like cout, endl, and string.
// By using 'using namespace std;', you can use these features without prefixing them with 'std::'.

#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int age = 20;
    // Declare a double variable
    double height = 1.75;
    // Declare a string variable
    string name = "Alex";

    // Print the values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;

    // Change the value of age
    age = 21;
    cout << "Updated Age: " << age << endl;

    return 0;
}
