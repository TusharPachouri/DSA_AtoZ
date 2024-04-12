#include <bits/stdc++.h>
using namespace std;

void maxMinFinder(int num, int *maxDigit, int *minDigit)
{
    int rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        *maxDigit = max(rem, *maxDigit);
        *minDigit = min(rem, *minDigit);
        num /= 10;
    }
}

int main()
{
    int min = INT_MAX, max = INT_MIN;
    int num;
    cin >> num;
    maxMinFinder(num, &max, &min);
    cout << "Maximum: " << max << endl
         << "Minimum: " << min << endl;
    return 0;
}