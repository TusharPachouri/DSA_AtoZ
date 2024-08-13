#include <iostream>
using namespace std;

int factorialGetter(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorialGetter(num - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorialGetter(num);
    return 0;
}