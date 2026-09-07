#include<bits/stdc++.h>
using namespace std;

class Point{

    private:
    int x, y;

    public:

    Point(int x = 0, int y = 0) : x{x}, y{y} {}

    Point operator+(Point t2){
        return Point(x + t2.x, y + t2.y);
    }

    friend void show(const Point& p){
        cout << p.x << " " << p.y << endl;
    }
};

int main(){

    Point p(12, 6), q(3, 4);
    Point r = p + q;

    show(p);
    show(q);
    show(r);

    return 0;
}