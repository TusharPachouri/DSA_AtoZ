#include <bits/stdc++.h>
using namespace std;

bool palindromeNumberCheck(int num)
{
    int rev = 0;
    int rem = 0;
    int dummy = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (dummy == rev)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    bool result = palindromeNumberCheck(num);
    if (result)
    {
        cout << "Given number is a palindrome number";
    }
    else
    {
        cout << "Given number is not a palindrome number";
    }
    return 0;
}