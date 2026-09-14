#include<bits/stdc++.h>
using namespace std;

void UpdateSalary(double &salary){

    salary = salary + (salary * 0.10);

}

int main(){

    double salary = 500000;

    UpdateSalary(salary);

    cout<<  "Updated salary is : " << salary << endl;

return 0;
}