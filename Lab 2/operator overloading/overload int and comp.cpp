#include<bits/stdc++.h>
using namespace std;

// when left side of any binary opertator is universal (int , long , float , char , any pre defined data)  then that operator must be overloaded as friend function.z

class comp {
    int real , img;

    public:

    comp(int r , int i) : real{r} , img{i} {}

    friend comp operator +(int x , comp c);

    void show(){
        cout << real << " + " << img << endl;
    }
};

comp operator +(int x , comp c){
    return comp(x + c.real);
}

int main(){

    comp c1{5,10};
    comp c2{45 , 23};
    comp c3 = 5 + c2;
    
    c1.show();
    c2.show();
    c3.show();
    
return 0;
}