#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

void strongNumberCheck(int num)
{
    int count = 0;
    int res = 0;
    int dummy = num;

    while (num != 0)
    {
        int rem = num % 10;
        res = res + factorial(rem);
        num /= 10;
    }
    if (res == dummy)
    {
        cout << dummy << ": yes\n";
    }
    else
    {
        cout << dummy << ": no\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        strongNumberCheck(num);
    }
    return 0;
}

// input:-

// 6
// 145 26 15 30 40585 2

// output:-

// 145: yes
// 26: no
// 15: no
// 30: no
// 40585: yes
// 2: yes