#include <iostream>
#include <vector>
using namespace std;

class Solution{	
	private:
		int sumFind(vector<int>& nums, int start, int end){
			if(start == end) return nums[end];
			return nums[start] + sumFind(nums, start + 1, end); 
		}
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
			return sumFind(nums, 0, nums.size() - 1);
		}
};

int main(){
    Solution solution;
    vector<int> nums = {1, 2, 3};   
    int result = solution.arraySum(nums); 
    cout << result << endl;     
    return 0; 
}