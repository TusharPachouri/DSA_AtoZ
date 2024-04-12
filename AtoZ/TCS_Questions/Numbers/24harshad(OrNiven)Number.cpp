#include <iostream>
using namespace std;
void harshadNumberCheck(int num)
{
    int dummy = num;
    int sumOfDigit = 0;
    while (num != 0)
    {
        int rem = 0;
        rem = num % 10;
        sumOfDigit += rem;
        num /= 10;
    }
    if (dummy % sumOfDigit == 0)
    {
        cout << dummy << " Yes Its a harshad number !\n ";
    }
    else
    {
        cout << dummy << ": No, Its not a harshad number!\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        harshadNumberCheck(num);
    }
    return 0;
}

// testCase:-
// 2
// 379 378

// output:- 
// 379: No, Its not a harshad number!
// 378 Yes Its a harshad number !

