#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int start = 0, end = n - 1;
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    for(char ch: s){
        cout << ch << " ";
    }

    return 0;
}