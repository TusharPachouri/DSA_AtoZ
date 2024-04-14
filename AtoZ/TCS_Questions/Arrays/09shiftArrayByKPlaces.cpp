#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void shiftArrayByKPlaces(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int t; // number of test cases ex: 2
    cin >> t;
    int temp = t;
    while (t--)
    {
        cout << "Test Case #" << temp - t << endl;
        int num;
        cin >> num;   // number of elements in the array ex: 5
        int arr[num]; // array of size num ex: 1 2 3 4 5
        int k;
        cin >> k; // number of places to shift the array ex: 2
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        cout << "Array before rotate: ";
        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        shiftArrayByKPlaces(arr,num,k);
        cout << "Array after rotate: ";
        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        // cout << "Array after rotate" << k << " places: ";
        // for (int i = k; i < num; i++)
        // {
        //     cout << arr[i] << " "; //
        // }
        // for (int i = 0; i < k; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }
    return 0;
}