#include <iostream>
using namespace std;
int factorialFinder(int num)
{
    int res = 1;
    for (int i = 1; i <= num; i++)
    {
        res = res * i;
    }
    return res;
}
int factorialRecursiveApproach(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorialRecursiveApproach(num - 1);
    }
}
int main()
{
    int num;
    cin >> num;
    cout << factorialFinder(num) << endl;
    cout << factorialRecursiveApproach(num);
    return 0;
}