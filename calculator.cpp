#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    float divide(int a, int b) {
        if (b == 0) return 0;
        return (float)a / b;
    }
};

int main() {
    Calculator c;
    cout << "Add: " << c.add(10, 5) << endl;
    cout << "Subtract: " << c.subtract(10, 5) << endl;
    cout << "Multiply: " << c.multiply(10, 5) << endl;
    cout << "Divide: " << c.divide(10, 5) << endl;
    return 0;
}

