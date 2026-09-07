#include<bits/stdc++.h>
using namespace std;

class Point{

    int x, y;

    public:

    Point(int x = 0, int y = 0) : x{x}, y{y} {}

    friend ostream &operator<<(ostream &os, const Point &t);

    Point operator+(const Point &t){
        return Point(x + t.x, y + t.y);
    }
};
ostream &operator<<(ostream &os, const Point &t){
    os << t.x << "," << t.y << endl;
    return os;
}

int main(){

    Point p(12, 6), q(3, 4);
    Point r = p + q;

    cout << p;
    cout << q;
    cout << r;

    return 0;
}