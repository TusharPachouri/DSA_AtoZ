#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    // for (int i = 0; i < num; i++)
    // {
    //     int asciiValue = 65;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         char character = (char)asciiValue;
    //         cout << character;
    //         asciiValue++;
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}

A
AB
ABC
ABCD
ABCDE
