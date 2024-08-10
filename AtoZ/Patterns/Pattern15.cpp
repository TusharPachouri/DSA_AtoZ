#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    // char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)('A' + i);
        }
        cout << endl;
    }
    return 0;
}
