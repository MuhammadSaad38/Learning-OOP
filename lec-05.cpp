#include <iostream>
using namespace std;

// Deep copy & shellow copy concept
class Student {
public:
    string name;
    double* cgpaPtr;

    Student (string name, double cgpa){
        this-> name = name;
        cgpaPtr = new double; 
        *cgpaPtr = cgpa;
    }
    // custom copy
    Student (Student &obj){
        this-> name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    // destructor
    ~Student(){
        cout << "Hi, I delete everything\n";
        delete cgpaPtr; // memory leak
    }
    void getInfo(){
        cout << "Name :" << name << endl;
        cout << "cgpa :" << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Saad",8.9);
    // Student s2(s1);
    s1.getInfo();
    // s2.name = "Neha";
    // s2.getInfo();
    // *(s2.cgpaPtr) = 9.2;
    s1.getInfo(); // problem in shellow copy due to the dynamic memory allocation
    return 0;
}





// Note:we build the constructor byself
// in deep copy constructor:
// you copy the dynamically allocated memory  