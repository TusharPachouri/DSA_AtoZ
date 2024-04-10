#include <bits/stdc++.h>
using namespace std;

void increasingDecreasingOrder(vector<int> &arr, int len)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < len / 2; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = len - 1; i >= len / 2; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {4, 2, 8, 6, 15, 5, 9, 20};
    int len = arr.size();
    increasingDecreasingOrder(arr, len);
    return 0;
}