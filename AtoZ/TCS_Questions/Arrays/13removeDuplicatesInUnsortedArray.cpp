#include <bits/stdc++.h>
using namespace std;

class removeDuplicate
{

public:
    void duplicate(int arr[], int n)
    {

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
        cout << endl;
    }
};
int main()
{

    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
    int n = 9;

    removeDuplicate d1;
    d1.duplicate(arr, n);

    return 0;
}