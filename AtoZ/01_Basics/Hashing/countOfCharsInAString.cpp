#include <iostream>
#include <vector>

using namespace std;
int main()
{
    string str;
    cin >> str;
    int q;
    cin >> q;
    vector<int> hash(1000, 0);
    for(int i = 0; i < str.size(); i++){
        // int index = str[i] - 'a';
        hash[str[i]]++;
    }
    while (q--)
    {
        char ch;
        cin >> ch;
        // int index = ch - 'a';
        cout << hash[ch] << endl;
    }
    return 0;
}