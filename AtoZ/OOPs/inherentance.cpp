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
    virtual void Work(){
        cout << "My name is " << Name << " and I am a human nothing else." << endl;
    }
};

class Developer:public Human{
    public:
    string FavLanguageForProgramming;

    Developer(string name, int age, string favLanguageForProgramming)
    :Human( name,  age){
        FavLanguageForProgramming = favLanguageForProgramming;
    }
    void showDevProfile(){
        cout << Name << "'s FavLang for programming is: "<< FavLanguageForProgramming << endl;
    }
    void DevCanVoteOrNot(){
        AskForVote();
    }
    void Work(){
        cout << "My name is " << Name << " and I am a human and Developer nothing else." << endl;
    }
};

class Teacher:public Human{
public:
    string Subject;
    void prepareForLesson(){
        cout << Name << " is preparing for " << Subject << endl;
    }
    Teacher(string name, int age, string subject):Human(name, age){
        Subject = subject;
    }
    void Work(){
        cout << "My name is " << Name << " and I am a human and teacher nothing else." << endl;
    }
};

int main()
{
    Developer dev1 = Developer("Tushar", 21, "Python");
    // dev1.showDevProfile();
    // dev1.DevCanVoteOrNot();
    dev1.Work();
    // dev1.AskForVote(); // we have to write public before inheriting the class
    Teacher sharma = Teacher("Sharma", 23, "History");
    // sharma.prepareForLesson();
    // sharma.AskForVote();
    sharma.Work();
    // Human tushar = Human("Tushar PAchouri", 16);
    // tushar.AskForVote();
    // // tushar.introduction();
    // // tushar.Name = "Tushar Pachouri";
    // // tushar.Age = 21;
    // // cout << "Name is " << tushar.Name << " and Age is " << tushar.Age << endl;
    // // tushar.introduction();
    // Human superman = Human("Superman", 50);
    // superman.AskForVote();
    // // superman.introduction();
    // // superman.constructor("superman",89);
    Human* h1 = &dev1;
    Human* t1 = &sharma;
    h1 -> Work();
    t1 -> Work();
    return 0;
}
