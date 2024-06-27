#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int result = 0;
    int n = nums.size();

    // XOR all elements in the array
    for (int num : nums) {
        result ^= num;
    }

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result ^= i;
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 4, 4, 5};
    int duplicate = findDuplicate(nums);
    cout << "Duplicate element: " << duplicate << endl;
    return 0;
}