#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nums[n];
    map<int, int> map;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        map[nums[i]]++;
    }
    for(auto it : map){
        cout << "First: " << it.first << "--> Second: " << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << map[num] << endl;
    }
    return 0; 
}