#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;

int main() {
    list <int> l = {1 ,2 ,3 ,4 ,5};
    list <int> l1(7,10);
    list <int> l2 ;
    l.push_back(1);
    l.push_front(7);
    auto it = l.begin();
    advance(it, 2);
    l.insert(it,8);
     cout << "Original list: ";
    for (int x:l){
        cout << x << "";
    }
    
}