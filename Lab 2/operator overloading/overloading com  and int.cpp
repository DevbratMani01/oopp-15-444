#include<bits/stdc++.h>
using namespace std;

class comp{
    int real , img;

    public:

    comp(int r = 0, int i = 0) : real{r} , img {i} {}

    friend comp operator +(comp c , int x);

    void show(){
        cout << real << " + " << img << endl;
    }
};

comp operator +(comp c , int x){
    return comp(c.real + x);
}
int main(){

   comp c1(5,10);
   comp c3 = c1 + 5;

    c1.show();
    
    c3.show();

return 0;
}