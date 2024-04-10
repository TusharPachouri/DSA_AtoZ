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
    int num;
    cin >> num;
    if(primeNumberCheck(num)){
        cout << "Number is prime";
    }else{
        cout << "Number is not prime";
    }
}