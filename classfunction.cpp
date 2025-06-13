#include <iostream>
using namespace std;

// Define a class
class Student {
public:
    string name;
    int age;

    // Member function to display info
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;          // Create object
    s1.name = "Alice";   // Assign values
    s1.age = 20;

    s1.display();        // Call function

    return 0;
}
