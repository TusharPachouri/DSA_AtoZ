#include <iostream>
#include <vector>
using namespace std;
class Solution {
private: 
    void reverse(vector<int>& arr, int start, int end) {
        if (start >= end) return;
        swap(arr[start], arr[end]);
        reverse(arr, start + 1, end - 1); 
    }

public:
    vector<int> reverseArray(vector<int>& nums) {
        reverse(nums, 0, nums.size() - 1); 
        return nums;
    }
};

int main(){
    
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5}; 
    vector<int> result = solution.reverseArray(nums); 
    for (int num : result) {
        cout << num << " "; 
    }
    return 0; 
}