#include <iostream>        // All about constructor
#include <string>          // multiple constructor with same name and
                           // different types according to context is called 
using namespace std;       // constructor overloading(polymorphisem) 

class Teacher {
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    Teacher (){ // non-parameterized constructor
        dept = "AI";
        cout << "Depatment: " << dept << endl;
    }
    Teacher(string name, string subject, double salary ){    // This is parameterized constructor
        this-> name = name;
        this-> subject = subject;
        this-> salary = salary;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    Teacher t1("Shoaib Jutt", "Generative AI", 55000);
    t1.getInfo();
    Teacher t2;
    return 0;
}