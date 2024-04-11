#include <bits/stdc++.h>
using namespace std;

bool armstrongNumberCheck(int num)
{
    int digitCount = 0;
    int dummy = num;
    int res = 0;
    int rem = 0;
    while (dummy > 0)
    {
        digitCount++;
        dummy = dummy / 10;
    }
    dummy = num;
    while (dummy > 0)
    {
        rem = dummy % 10;
        res = res + pow(rem, digitCount);
        dummy = dummy / 10;
    }
    if (res == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    bool result = armstrongNumberCheck(num);
    if (result)
    {
        cout << "Its a Armstrong Number";
    }
    else
    {
        cout << "Its not a Armstrong Number";
    }
}