#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, goal;
    cin >> s >> goal;
    int index_rotate = 0;
    bool res = false;
    for (int i = 0; i < s.size(); i++)
    {
        string temp = s.substr(index_rotate, s.size() - 1) + s.substr(0, index_rotate);
        if (goal == temp)
        {
            res = true;
        }
        index_rotate++;
    }
    cout << res;
    return 0;
}