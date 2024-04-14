#include <iostream>
using namespace std;
int averageFinder(int arr[], int n)
{
    double res = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i];
    }
    res = sum / n;
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
        cout << "Average is: " << averageFinder(arr, num) << endl;
    }
    return 0;
}