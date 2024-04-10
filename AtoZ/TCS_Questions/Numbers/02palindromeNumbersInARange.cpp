#include <bits/stdc++.h>
using namespace std;

bool palindromeNumberCheck(int num)
{
    int rev = 0;
    int rem = 0;
    int dummy = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (dummy == rev)
    {
        return true;
    }
    return false;
}

int main()
{
    int min ,max;
    cin >> min >> max;
    for(int i = min; i <= max; i++){
        if(palindromeNumberCheck(i)){
            cout<< i << " ";
        }
    }
}