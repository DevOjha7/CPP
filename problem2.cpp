#include <iostream>
using namespace std;
int main() {
    float c,t;
    cout << "Enter the cost price : ";
    cin >> c ; 
    if (c>100000) {
        t = 0.15 * c;
        c = c + t;
        cout << "Final cost adding tax : "<< c;
    }
    else if (c>50000) {
        t = 0.1 * c;
        c = c + t;
         cout << "Final cost adding tax : " << c;
    }
     else if(c<=50000) {
        t = 0.05 * c;
        c = c + t;
        cout << "Final cost adding tax : " << c;
    }
    return 0;
}
