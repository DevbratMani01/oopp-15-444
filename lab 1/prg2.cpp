#include <bits/stdc++.h>
using namespace std;

void show(int a ,int b){
    cout<<"a : "<<a<<" b : "<<b<<endl;    
}
void swapByVal(int a , int b){
    int c;
    c = a;
    a = b;
    b = c;
    show(a, b);
}

void swapByAddress(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
    show(*a, *b);
}

void swapByRef(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
    show(a, b);
}

int main() {
    int x, y;

    cout << "Enter the numbers : ";
    cin >> x >> y;

    cout << "Swapping by Value " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByVal(x, y);
    cout << "Value in main after swapByVal (unchanged): ";
    show(x, y);

    cout << "\nSwapping by Address " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByAddress(&x, &y);
    cout << "Value in main after swapByAddress (changed): "<<endl;
    show(x, y);

    cout << "Swapping by Reference " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByRef(x, y);
    cout << "Value in main after swapByRef (changed): "<<endl;
    show(x, y);

    return 0;
}