#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int* marks; 

public:
    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = new int(0);
        cout << "[Default Constructor] called for rollNo " << rollNo << endl;
    }

    Student(string n, int r, int m) {
        name = n;
        rollNo = r;
        marks = new int(m);
        cout << "[Parameterized Constructor] called for " << name
             << " (rollNo " << rollNo << ")" << endl;
    }

    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        marks = new int(*s.marks);   // deep copy, not just pointer copy
        cout << "[Copy Constructor] called for " << name
             << " (rollNo " << rollNo << ")" << endl;
    }

    Student& operator=(const Student &s) {
        cout << "[Copy Assignment Operator] called for " << s.name << endl;
        if (this == &s) return *this;   
        delete marks;     
        name = s.name;
        rollNo = s.rollNo;
        marks = new int(*s.marks);
        return *this;
    }

    void display() const {
        cout << "  Name: " << name << " | RollNo: " << rollNo<< "  Marks: " << *marks << " Address: " << this << endl;
    }

    ~Student() {
        cout << "[Destructor] called for " << name
             << " (rollNo " << rollNo << ")" << endl;
        delete marks;  
    }
};

void showStudentByValue(Student s) {
    cout << "Inside showStudentByValue():" << endl;
    s.display();
}

int main() {
    cout << "1. Default Constructor" << endl;
    Student s1;
    s1.display();

    cout << "2. Parameterized Constructor" << endl;
    Student s2("Devbrat", 101, 95);
    s2.display();

    cout << "3. Copy Constructor (direct initialization)" << endl;
    Student s3 = s2;   
    s3.display();

    cout << "4. Copy Constructor (via function pass-by-value)" << endl;
    showStudentByValue(s2);

    cout << "5. Copy Assignment Operator" << endl;
    Student s4;
    s4 = s2;  
    s4.display();

    cout << "6. Dynamic allocation (heap) - manual destructor call" << endl;
    Student* s5 = new Student("Kartik", 102, 88);
    s5->display();
    delete s5; 

    cout << "7. Object in a nested scope" << endl;
    {
        Student s6("Rohan", 103, 76);
        s6.display();
        cout << "  (still inside inner scope)" << endl;
    }
    cout << "  (exited inner scope - s6 already destroyed above)" << endl;

    cout << "End of main() - remaining stack objects destroyed in reverse order" << endl;
    return 0;
}

