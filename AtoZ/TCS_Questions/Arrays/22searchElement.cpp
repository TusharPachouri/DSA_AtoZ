#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    sort(arr, arr + n);
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
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
        int element;
        cin >> element;
        cout << "LinearSearch: " << linearSearch(arr, num, element) << endl;
        cout << "BinarySearch: " << binarySearch(arr, num, element) << endl;
    }
    return 0;
}