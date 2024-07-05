#include <iostream>
using namespace std;

class Teacher
{
    // properties or attributes
public:
    // Teacher()
    // {
    //     cout << "Hey Teacher is created !!" << endl;
    // }
    Teacher(string name, string department, string subject, double salary){
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }
    Teacher(Teacher &teacherOnj){
        cout << "copy constructor!! \n";
        this->name = teacherOnj.name;
        this->department = teacherOnj.department;
        this->subject = teacherOnj.salary;
        this->salary = teacherOnj.salary;
    }
    string name;
    string department;
    string subject;
    double salary;

    void changeDepartment(string newDep)
    {
        department = newDep;
    }
};

int main()
{
    // code
    Teacher t1("Tushar","CS","DSA",60000 );
    // t1.name = "Tushar";
    cout <<" Name: "<< t1.name << endl << " department: " << t1.department << endl;
    //copy constructor:
    Teacher t2(t1);
    return 0;
}