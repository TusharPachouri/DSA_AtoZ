#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double medianFinder(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    double median;
    int num = arr.size();
    if (num % 2 == 0)
    {
        median = (arr[num / 2] + arr[(num / 2) - 1]) / 2.0;
    }
    else
    {
        median = arr[num / 2];
    }
    return median;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        vector<int> arr(num);
        for (int i = 0; i < num; ++i)
        {
            cin >> arr[i];
        }
        cout << "Median is: " << medianFinder(arr) << endl;
    }
    return 0;
}
