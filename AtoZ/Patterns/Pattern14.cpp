#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int start = 1;
    for (int i = num; i > 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++ )
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}

// ABCDE
// ABCD
// ABC
// AB
// A
