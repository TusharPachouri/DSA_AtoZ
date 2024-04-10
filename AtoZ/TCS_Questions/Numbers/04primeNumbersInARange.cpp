#include <bits/stdc++.h>
using namespace std;

bool primeNumberCheck(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int min, max;
    cin >> min >> max;
    for (int i = min; i <= max; i++)
    {
        if (primeNumberCheck(i))
        {
            cout << i << " ";
        }
    }
}