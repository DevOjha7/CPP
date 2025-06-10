#include <iostream>
using namespace std;
int main() {
    int a[5] = {200,45,24,77,112};
    int min = a[0];
    int max = a[0];
    
    for (int i= 0; i<5; i++){
        if (a[i]<min){
            min = a[i];
    } 
        if (max < a[i]){
            max = a[i];
        }
    }
    cout << min << endl << max;  
    return 0;
}
