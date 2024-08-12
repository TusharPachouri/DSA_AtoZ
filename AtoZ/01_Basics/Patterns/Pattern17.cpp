#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        char ch = (char)('A' + (num - i - 1)); 
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

// D
// CD
// BCD
// ABCD
