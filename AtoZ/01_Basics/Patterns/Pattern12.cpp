#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int start = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
