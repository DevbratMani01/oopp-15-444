#include <iostream>
using namespace std;


void callByValue(double salary) {
    salary = salary + (salary * 10 / 100);
    cout << "Inside callByValue, updated salary: " << salary << endl;
}


void callByReference(double &salary) {
    salary = salary + (salary * 10 / 100);
    cout << "Inside callByReference, updated salary: " << salary << endl;
}


void callByAddress(double *salary) {
    *salary = *salary + (*salary * 10 / 100);
    cout << "Inside callByAddress, updated salary: " << *salary << endl;
}

int main() {
    double salary = 50000;

    cout << "Original salary: " << salary << endl;

    callByValue(salary);
    cout << "After callByValue, salary: " << salary << " (unchanged)" << endl;

    callByReference(salary);
    cout << "After callByReference, salary " << salary << " (changed)" << endl;

    callByAddress(&salary);
    cout << "After callByAddress, salary " << salary << " (changed)" << endl;

    return 0;
}