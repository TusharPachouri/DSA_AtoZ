#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cout << "Enter Length of the array: " << endl;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        int var;
        cin >> var;
        arr[i] = var;
    }
    for (int i = 0; i < len; i++)
    {
        cout << "Element of index " << i << " of the array: " << arr[i] << endl;
    }
    
}