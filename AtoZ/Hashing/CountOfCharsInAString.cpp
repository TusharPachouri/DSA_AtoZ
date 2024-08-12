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
        int index = 'a' - str[i];
        hash[index]++;
    }
    while (q--)
    {
        char ch;
        cin >> ch;
        int index = 'a' - ch;
        cout << hash[index] << endl;
    }
    return 0;
}