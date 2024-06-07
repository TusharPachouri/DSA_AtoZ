#include <iostream>
#include <string>
using namespace std;

class Human {
    public:
        string Name;
        int Age;

        Human(string name, int age){
            Name = name;
            Age = age;
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
    Human superman = Human("Superman", 50 );
    superman.introduction();
    // superman.constructor("superman",89);
    return 0;
}

