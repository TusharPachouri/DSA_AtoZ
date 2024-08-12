#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "not Valid Anagram";
        return 0;
    }
    unordered_map<char, int> s_map;
    unordered_map<char, int> t_map;
    for(int i = 0; i < s.size(); i++){
        s_map[s[i]]++;
        t_map[t[i]]++;
    }
    for (const auto& pair : s_map) {
        if (t_map[pair.first] != pair.second) {
            cout << "Not an Anagram";
            return 0;
        }
    }
    cout << true;
    return 0; 
}