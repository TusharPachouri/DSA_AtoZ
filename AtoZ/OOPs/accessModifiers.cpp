#include <iostream>
#include <string>
using namespace std;

class Human {
    private: // now we can't be able to access these Name and Age properties in our main function since these are now become private.
        string Name; // Encapsulation is a principle where we are hiding the data and allowing user to use this data via other functions which are public in the class.        
        int Age;
    public:
        Human(string name, int age){
            Name = name;
            Age = age;
        }
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }
        void introduction() {
            cout << "NAME: " << Name << endl;
            cout << "Age: " << Age << endl;
        }
};

int main() {
    Human tushar = Human("Tushar PAchouri", 21);
    tushar.introduction();
    // tushar.Name = "Tushar Pachouri";
    // tushar.Age = 21;
    // cout << "Name is " << tushar.Name << " and Age is " << tushar.Age << endl;
    // tushar.introduction();
    Human superman = Human("Superman1", 50 );
    superman.introduction();
    superman.setName("Superman");
    cout << superman.getName() << endl;
    superman.introduction();
    // superman.constructor("superman",89);
    return 0;
}

