#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

void replaceByRank(int arr[], int n)
{
    int dummy[n];
    map<int, int> mp;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        dummy[i] = arr[i];
    }
    sort(dummy, dummy + n);
    for (int i = 0; i < n; i++)
    {
        if (mp[dummy[i]] == 0)
        {
            mp[dummy[i]] = temp;
            temp++;
        }
    }
    cout << "After: ";
    for (int i = 0; i < n; i++)
    {
        cout << mp[arr[i]] << " ";
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
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        cout << "Before: ";
        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        replaceByRank(arr, num);
        // cout << "After: ";
        // for (int i = 0; i < num; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        cout << endl;
    }
    return 0;
}