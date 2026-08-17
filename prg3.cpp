#include <iostream>
using namespace std;

class Operators {
public:
    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
    int sum(int a = 0, int b = 0) {
        return a + b;
    }
    int diff(int a , int b=0){
        return a-b;
    }
};

int main() {
    Operators obj;
    cout << obj.sum(2, 3, 4, 5) << endl;
    cout << obj.sum(2,5,5) << endl;
    cout << obj.diff(5,7) << endl;
    return 0;
}