#include <bits/stdc++.h>
using namespace std;

int sumOfNaturalNumber(int num)
{
    return num*(num + 1)/2;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    cout <<"Sum of natural numbers till 1 to "<< num<<" is: " << sumOfNaturalNumber(num);
}