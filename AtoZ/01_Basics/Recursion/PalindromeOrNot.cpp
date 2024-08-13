#include <iostream>
using namespace std;

class Solution
{
private:
    bool check(string &s, int start, int end)
    {
        if (s[start] != s[end])
            return false;
        else if (start >= end)
            return true;
        return check(s, start + 1, end - 1);
    }

public:
    bool palindromeCheck(string &s)
    {
        return check(s, 0, s.size() - 1);
    }
};

int main()
{
    Solution solution;
    cout << boolalpha; // Print bool values as true/false

    string str1 = "hannah";
    string str2 = "aabbaaa";
    string str3 = "aba";

    cout << solution.palindromeCheck(str1) << endl; // Output: true
    cout << solution.palindromeCheck(str2) << endl; // Output: false
    cout << solution.palindromeCheck(str3) << endl; // Output: true

    return 0;
}
