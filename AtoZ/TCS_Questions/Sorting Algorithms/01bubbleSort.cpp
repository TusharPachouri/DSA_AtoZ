#include <iostream>
using namespace std;

void displayArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[i]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    // int len = size(arr);
    cout << "Before sorting array: ";
    displayArray(arr, len);
    bubbleSort(arr, len);
    cout << "After sorting array: ";
    displayArray(arr, len);
    return 0;
}
// output:-
// Before sorting array: 13 46 24 52 20 9
// After sorting array: 9 20 13 24 46 52
