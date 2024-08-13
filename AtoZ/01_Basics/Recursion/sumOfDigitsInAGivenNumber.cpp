#include <iostream>
using namespace std;

int digitSum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int sum = num % 10 + digitSum(num / 10);
    return num > 9 ? digitSum(sum) : sum;
}

int main()
{
    int num;
    cin >> num;
    cout << "Digits sum of " << num << " is: " << digitSum(num);
    return 0;
}