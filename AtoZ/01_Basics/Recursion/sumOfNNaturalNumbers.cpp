#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num + sumOfNaturalNumbers(num - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << "1 - " << num << " sum is: " << sumOfNaturalNumbers(num);
    return 0;
}