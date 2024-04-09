// By sorting:
#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The smallest element in the array is: " << sortArr(arr1) << endl;
    cout << "The smallest element in the array is: " << sortArr(arr2);

    return 0;
}

// My approach:
//  #include <iostream>
//  using namespace std;

// int smallestNumberInAnArray(int arr[], int len)
// {
//     int res = arr[0];
//     for (int i = 1; i < len; i++)
//     {
//         if (arr[i] < res)
//         {
//             res = arr[i];
//         }
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 0};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     int smallestNumberInArr = smallestNumberInAnArray(arr, len);
//     cout << "Smallest number in the array: " << smallestNumberInArr << endl;
//     return 0;
// }
