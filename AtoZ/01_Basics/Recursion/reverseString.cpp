#include <iostream>
using namespace std;

class Solution{	
	public:		
		vector<char> reverseString(vector<char>& s){
			//your code goes here
			reverseString(s, 0, s.size() - 1);
			return s;
		}
	private:
		void reverseString(vector<char>& s, int start, int end){
			if(start >= end) return;
			swap(s[start], s[end]);
			return reverseString(s, start + 1, end - 1);
		}
};

int main()
{
    int num;
    cin >> num;
    vector<chat> str;
    for (int i = 0; i < num; i++)
    {
        cin >> str[i];
    }
    // cout << "Digits sum of " << num << " is: " << reverseString(num);
    reverseString(str, num);
    return 0;
}