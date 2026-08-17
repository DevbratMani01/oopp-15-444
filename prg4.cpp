#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x;
    int y;

    public:
    Point() : x{0} , y{0} {}
    Point(int p , int q) : x{p} , y{q} {}

    void show(){
       cout<<x<< " , "<<y<<endl;
    }
    Point add(Point q){
        Point r;

        r.x = x + q.x;
        r.y = y + q.y;

        return r;
    }
};
int main(){
    Point p , q(23,56), r;
    r = p.add(q);

    r.show();
}