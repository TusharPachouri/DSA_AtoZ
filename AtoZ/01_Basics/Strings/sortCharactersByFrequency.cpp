#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<char> res;
    map<char, int> freq_map;
    multimap<int, char> char_Map;
    for (int i = 0; i < str.size(); i++)
    {
        freq_map[str[i]]++;
    }
    for (const auto &it : freq_map)
    {
        char_Map.insert({it.second, it.first});
    }
    int index = 0;
    for (auto it : char_Map)
    {
        res.push_back(it.second);
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}