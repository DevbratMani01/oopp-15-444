#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
    int real;
    int img;

    public:
    void input(){
        cout << "Enter the real part : ";
        cin >> real;
        cout << "Enter the img part : ";
        cin >> img;
    }
    Complex add(Complex c1 , Complex c2){
        Complex c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        return c3;

    }
    void display(){
       if(img>=0){
        cout<<real<<"+"<<img<<"i"<<endl;
       }
       else{
        cout<<real<<img<<"i"<<endl;
       }
    }

};

int main(){
    Complex c1,c2,c3;

    c1.input();
    c2.input();
    c3 = c3.add(c1,c2);
    c3.display();

}