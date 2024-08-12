#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        for (int j = 0; j < 2 * num - 2 * i; j++){
            cout << " ";
        }
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
