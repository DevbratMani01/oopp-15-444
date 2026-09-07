#include<bits/stdc++.h>
using namespace std;

class Point{

    private:
    int x , y;
    
    public:

    Point(int x = 0 , int y = 0) : x{x} , y{y} {}

    Point operator+(Point t){
        return x + t.x , y + t.y;
    }

    void show(){
        cout<<x<<" "<<y<<endl;
    }

};

int main(){

    Point p(12 ,6) , q(3 ,4);
    Point r = p + q;
    p.show();
    q.show();
    r.show();

return 0;
}