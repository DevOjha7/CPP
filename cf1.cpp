# include <iostream>
using namespace std;

// define a class

class Student{
    public:
    int age;
    string name;

    // Member function to display info

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// main fn

int main() {
    Student s1;                 // creating object
    s1.name = "Sam";            // assigning values
    s1.age = 20;

    s1.display();               // Call function

    return 0;
}