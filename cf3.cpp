# include <iostream>
using namespace std;

class Circle {
    
    public:
    float radius;
    float circumferance() {
        return 2 * 3.14 * radius;
    }
};

int main() {

    Circle c;
    c.radius = 10;
    
    cout << "Circumferance = " << c.circumferance() ;
    return 0;
}
