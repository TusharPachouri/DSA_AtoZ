#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    sort(str.begin(), str.end());
    string first = str[0], last = str[n - 1];
    int index = 0;
    bool flag = true;
    while (first[index] == last[index])
    {
        index++;
        flag = false;
    }
    if (flag)
    {
        cout << "No Prefix";
    }
    else
    {
        cout << first.substr(0, index);
    }

    return 0;
}