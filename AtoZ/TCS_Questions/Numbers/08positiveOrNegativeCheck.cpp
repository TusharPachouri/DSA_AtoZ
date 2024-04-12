#include <bits/stdc++.h>
using namespace std;

void check(int num)
{
    if ((num >> 31) == 0)
    {
        cout << num << " is a positive number" << endl;
    }
    else
    {
        cout << num << " is a negative number" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    check(num);
}