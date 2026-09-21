#include<bits/stdc++.h>
using namespace std;

class comp{
    int real , img;

    public:
    
    comp(int r = 0 , int i = 0) : real {r} , img {i} {}

        comp operator +(comp c){
        return comp(real + c.real, img + c.img);  
            
    }

    void show(){
        cout<<real << " + "<< img<<"i"<<endl;
    }
};

int main(){ 
    comp c1(5,10);
    comp c2(15,10);
    comp c3 = c1 + c2;

    c1.show();
    c2.show();
    c3.show();


return 0;
}