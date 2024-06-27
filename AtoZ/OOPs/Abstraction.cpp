#include <iostream>
#include <string>
using namespace std;

class AbstractHuman
{
    virtual void AskForVote() = 0;
};

class Human : AbstractHuman
{
public:
    string Name;
    int Age;

    Human(string name, int age)
    {
        Name = name;
        Age = age;
    }

    void introduction()
    {
        cout << "NAME: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
    void AskForVote()
    {
        if (Age >= 18)
        {
            cout << Name << " can vote!!" << endl;
        }
        else
        {
            cout << Name <<" can't vote!!" << endl;
        }
    }
};

int main()
{
    Human tushar = Human("Tushar PAchouri", 16);
    tushar.AskForVote();
    // tushar.introduction();
    // tushar.Name = "Tushar Pachouri";
    // tushar.Age = 21;
    // cout << "Name is " << tushar.Name << " and Age is " << tushar.Age << endl;
    // tushar.introduction();
    Human superman = Human("Superman", 50);
    superman.AskForVote();
    // superman.introduction();
    // superman.constructor("superman",89);
    return 0;
}
