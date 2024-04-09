#include <bits/stdc++.h>
using namespace std;
int main(){
    // string name;
    // int age, salary;
    // cin >> name >> age >> salary;
    // cout << "Name: " << name << endl;
    // cout << "Age: " << age << endl;
    // cout << "Salary: " << salary << endl; 
    string fullname;
    // cin >> fullname; if I give input as Tushar Pachouri
    // cout << fullname;  output would be Tushar
    // In order to use full name as whole
    getline(cin, fullname);
    cout << fullname;
    return 0; 
}