#include <iostream>
#include <cmath>
using namespace std;

void Divisor(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                cout << " " << i;
                
            else // Otherwise print both
                cout << " " << i << " " << n / i;
        }
    }
}
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i == num)
        {
            cout << num << endl;
            break;
        }
        if (num % i == 0)
        {
            cout << i << ",";
        }
    }
    Divisor(num);
    return 0;
}