#include <iostream>
using namespace std;

bool primeOrNot(int num)
{
    if (num == 2)
    {
        return true;
    }
    
    return primeOrNot(num - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << "number " << num << " is: " << primeOrNot(num);
    return 0;
}