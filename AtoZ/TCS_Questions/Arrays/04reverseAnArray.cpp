#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 4, 6, 7, 4, 9, 10, 2};
    int len = arr1.size();

    //optimal approach:- 
    int start = 0;
    int end = len - 1;
    while(start <= end){
        swap(arr1[start], arr1[end]);
        start++;
        end--;
    }
    for(auto it: arr1){
        cout << it <<" ";
    }

    //Print from the last element
    // for(int i = len - 1; i >= 0; i--){
    //     cout << arr1[i]<<" ";
    // }

    //using reverse function
    // reverse(arr1.begin(), arr1.end());
    // for (auto it : arr1)
    // {
    //     cout << it << " ";
    // }
}