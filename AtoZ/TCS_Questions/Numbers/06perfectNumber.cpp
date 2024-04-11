
#include <bits/stdc++.h>
using namespace std;

bool perfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
            if (i * i == num || i == 1)
                sum = sum + i;
            else
                sum = sum + i + num / i;
    }
    if (sum == num)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    bool result = perfectNumber(num);
    if (result)
    {
        cout << "Its a Perfect Number";
    }
    else
    {
        cout << "Its not a Perfect Number";
    }
}
// My approach:-
// #include <bits/stdc++.h>
// using namespace std;

// bool perfectNumber(int num)
// {
//     int res = 0;
//     for (int i = 1; i <= num - 1; i++)
//     {
//         if (num % i == 0)
//         {
//             res = res + i;
//         }
//     }
//     if (res == num)
//     {
//         return true;
//     }
//     else
//         return false;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << num << endl;
//     bool result = perfectNumber(num);
//     if (result)
//     {
//         cout << "Its a Perfect Number";
//     }
//     else
//     {
//         cout << "Its not a Perfect Number";
//     }
// }
