#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    while (num1 != 0 && num2 != 0)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }
    if (num1 == 0)
    {
        cout << num2;
    }
    else
    {
        cout << num1;
    }
    return 0;
}