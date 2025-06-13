#include <iostream>;
using namespace std;

class Car{
    public:
    string brand;
    int price;

    void show(){
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.price = 5000000;

    c1.show();

    return 0;
}