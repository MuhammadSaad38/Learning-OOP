    make custom copy constructor
    Teacher(Teacher &orgObj){ // pass by reference(pass the address of original object)
        this-> name = "SAAD";
        this-> dept = orgObj.dept;
        this-> subject = orgObj.subject;
        this-> salary = orgObj.salary;
    };