#include <iostream>
using namespace std;

int maxProductSubArray(int arr[], int len)
{
    int res = 1;
    for (int i = 0; i < len - 1; i++)
    {
        int curProduct = arr[i];
        for (int j = i + 1; j < len; j++)
        {
            curProduct = curProduct * arr[j];
            if (curProduct > res)
            {
                res = curProduct;
            }
        }
    }
    return res;
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
        int max = maxProductSubArray(arr, num);
        cout << "Maximum Product Sub-array is: " << max << endl;
    }
    return 0;
}