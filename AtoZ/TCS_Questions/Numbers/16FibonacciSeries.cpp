#include <iostream>
using namespace std;

int fibSeries(int num) // recursive method
{
    if (num <= 1)
    {
        return num;
    }
    return fibSeries(num - 1) + fibSeries(num - 2);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << fibSeries(i);
    //     if (i < num - 1)
    //     {
    //         cout << " ";
    //     }
    // }
    // cout << endl;
    if (num == 0)
    {
        cout << 0;
    }
    else
    {
        int last = 0;
        int secondLast = 1;
        int cur = 0;
        for (int i = 1; i <= num; i++)
        {
            cout << cur;
            cur = last + secondLast;
            last = secondLast;
            secondLast = cur;
            if (i < num)
            {
                cout << " ";
            }
        }
    }
    return 0;
}