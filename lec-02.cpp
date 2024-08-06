#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(double salary){
        this->salary = salary;
    }
    double getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name = "Saad Khan Jaan";
    t1.dept = "IT Center";
    t1.subject = "Computer Sciences";
    t1.setSalary(115000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}