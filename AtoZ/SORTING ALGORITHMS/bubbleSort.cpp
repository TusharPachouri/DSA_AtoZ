#include <iostream>
using namespace std;

void bubbleSort(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return;
}

void printArray(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int arr[] = {5, 8, 9, 7, 8, 4, 76, 46};
    printArray(arr, 8);
    bubbleSort(arr, 8);
    printArray(arr, 8);

    return 0;
}