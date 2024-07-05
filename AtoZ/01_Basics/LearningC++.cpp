#include <iostream>
using namespace std;
int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;

    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;

    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Enter Age: ";
    int age;
    cin >> age;
    cout << endl;
    if (age > 18)
    {
        cout << "you can vote!!" << endl;
    }
    
    return 0;
}