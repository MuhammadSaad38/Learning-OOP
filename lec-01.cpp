#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // properties or attributes 
private:                                  // Access Modifiers: 
    double salary;                        // It is neccessary in C++    
public:                                   // By default it is private 
    string name;                          // Private:   Data and methodes accessible inside the class
    string dept;                          // Public:    Data and methodes accessible everyone
    string subject;                       // Protected: Data and methodes accessible inside the class
    // methodes or member function                      & its drived class
    void changeDept(string newDept) {
        dept = newDept;
    }                                      //NOTE: 
    //setter                               //->We cannot assecc the salery directly(bcz of access modifier private)                                            
    void setSalary(double salary){         // // but we can access by make get and set function
        this->salary = salary;
    }
    // getter
    double getSalary(){
        return salary; 
    }
};
int main() {
    Teacher t1; // make an object
    t1.name = "Alyan";
    t1.dept = "Applied Sciences";
    t1.subject = "Generative AI";
    t1.setSalary(115000);
    t1.changeDept("Applied CS");
    cout << "Nmae: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary();
    return 0;
}