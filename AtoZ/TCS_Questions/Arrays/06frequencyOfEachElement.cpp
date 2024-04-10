#include <bits/stdc++.h>
using namespace std;

void frequency(vector<int> &arr, int len)
{
    unordered_map<int, int> map;
    for (int i = 0; i < len; i++)
    {
        map[arr[i]]++;
    }
    for (auto it : map)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5, 5, 6, 7};
    int len = arr.size();
    frequency(arr, len);
    return 0;
}