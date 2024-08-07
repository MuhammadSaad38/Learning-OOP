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
    Teacher (string name , string dept, string subject, double salary ){
        this-> name = name;
        this-> dept = dept;
        this-> subject = subject;
        this-> salary = salary;
    }

    // make custom copy constructor
    Teacher(Teacher &orgObj){ // pass by reference(pass the address of original object)
        this-> name = "SAAD";
        this-> dept = orgObj.dept;
        this-> subject = orgObj.subject;
        this-> salary = orgObj.salary;
    };
    void getInfo(){
        cout << "Nmae: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }                              

};                       
int main(){           
    Teacher t1("Shoaib" , "Computer Science" , "Generative AI",51000);
    // Teacher t2(t1); // concept of copy constructor(default copy constructor call)  
    Teacher t2(t1);  // custom copy constructor 
    t2.getInfo();
    return 0;             
}                      
                       






// Discussion about this->
// to the current object    
// This is used to get the properties of an class 
// this-> is same as *(this).pro