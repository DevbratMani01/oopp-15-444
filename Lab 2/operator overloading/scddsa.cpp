// In unirary operator overloading no argument required for member function.
//For friend function we required 1 argument.

#include<bits/stdc++.h>
using namespace std;

class comp {
    int real , img;

    public:

    comp(int r , int i) : real{r} , img{i} {}

    comp operator -(){
        return comp(-real , -img);
    }
    comp operator -(comp p){
        return comp(real -p.real ,  img - p.img);
    }

    void show(){
        cout << real << " + " << img << endl;
    }
};


int main(){

    comp c1{5,10};
    comp c2{45 , 23};
    comp c3 = -c2;
    
    c1.show();
    c2.show();
    c3.show();
    
return 0;
}