#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void repeatedElements(const vector<int>& arr)
{
    unordered_map<int, int> mp;
    for (auto it : arr)
    {
        ++mp[it];
    }
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cout << it.first << " ";
        }
    }
    cout << endl;
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
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        repeatedElements(arr);
    }
    return 0;
}
