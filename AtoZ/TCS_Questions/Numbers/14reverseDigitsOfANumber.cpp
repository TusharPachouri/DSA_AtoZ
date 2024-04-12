#include <iostream>
using namespace std;

int reverseDigit(int num)
{
    int rem = 0, res = 0;
    while (num > 0)
    {
        rem = num % 10;
        res = res * 10 + rem;
        num /= 10;
    }
    return res;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << endl;
    int reverseOfNumber = reverseDigit(num);
    cout << "Reverse of the number is: " << reverseOfNumber;
    return 0;
}