#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int pt1 = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[pt1] != arr[i])
        {
            pt1++;
            arr[pt1] = arr[i];
        }
    }
    return pt1 + 1;
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
        cout << "Original Array: ";
        for (int i = 0; i < num; i++)
        {
            cout << arr[i]<< " ";
        }
        cout << endl;
        int numberOfElements = removeDuplicate(arr, num);
        cout << "After Removal of duplicate: ";
        for (int i = 0; i < numberOfElements; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}