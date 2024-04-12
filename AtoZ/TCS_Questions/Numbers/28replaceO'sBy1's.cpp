#include <iostream>
using namespace std;

int replaceZerosWithOnes(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int res = 0;
    int temp = 1;
    while (num != 0)
    {
        int rem = num % 10;
        if (rem == 0)
        {
            rem = 1;
        }
        res = rem * temp + res;
        num = num / 10;
        temp = temp * 10;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << replaceZerosWithOnes(num) << endl;
    }
    return 0;
}