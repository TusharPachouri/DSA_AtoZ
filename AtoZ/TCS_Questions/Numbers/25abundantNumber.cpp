#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 18;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                sum += i;
            }
            else
            {
                sum += i;
                sum += n / i;
            }
        }
    }
    sum -= n;
    if (sum > n)
    {
        cout << "Abundant Number"
             << "\n";
    }
    else
    {
        cout << "Not Abundant Number"
             << "\n";
    }
}