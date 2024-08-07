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
    Student (Student &obj){
        this-> name = obj.name;
        this-> cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout << "Name :" << name << endl;
        cout << "cgpa :" << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Saad",8.9);
    Student s2(s1);
    s2.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo(); // problem in shellow copy due to the dynamic memory allocation
    return 0;
}





// Note:we build the constructor byself
// in deep copy constructor:
// you copy the dynamically allocated memory  