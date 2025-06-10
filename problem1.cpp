#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout << "No of items: ";
    cin >> i;
    n = i*100;
    cout << "Total cost: "<< n << endl;
    
    if (n>1000){
        int a;
        a = n/10;
        n = n-a;
        cout << "Discount applied:" << n;
    }
    else {
        cout << " No discount ";
    }
    return 0;
}
