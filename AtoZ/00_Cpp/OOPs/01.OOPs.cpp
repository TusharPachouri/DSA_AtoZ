#include <iostream>
using namespace std;

class Person{
    private:
    int age;
    string name;
    string address;

    public:
    void input(){
        cout<<"Enter Age: "<<endl;
        cin>>age;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Address: "<<endl;
        cin>>address;
    };
    void show(){
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }

};

int main(){
    cout << "hello ";
    Person p;
    p.input();
    p.show();
    
    return 0;
}