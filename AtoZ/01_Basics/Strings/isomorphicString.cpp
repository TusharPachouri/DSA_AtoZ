#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << false;
    }
    unordered_map<char, char> map_st;
    unordered_map<char, char> map_ts;
    for(int i = 0; i < s.size(); i++){
        if(map_st.count(s[i]) > 0 && map_st[s[i]] != t[i] ||
            map_ts.count(t[i]) > 0 && map_ts[t[i]] != s[i]
        ){
            cout << false;
        }
        
        map_st[s[i]] = t[i];
        map_ts[t[i]] = s[i];
    }
    cout << true;

    return 0; 
}