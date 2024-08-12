#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    unordered_map<int, int> map;
    int maxFreq = 0, secondMaxFreq = 0;
    int maxFreqNum = INT_MAX, secondMaxFreqNum = INT_MAX;
    
    // Count the frequency of each element
    for (int num : nums)
    {
        map[num]++;
    }
    
    // Identify the most and second most frequent elements
    for (auto it : map)
    {
        int num = it.first;
        int freq = it.second;

        if (freq > maxFreq)
        {
            secondMaxFreq = maxFreq;
            secondMaxFreqNum = maxFreqNum;

            maxFreq = freq;
            maxFreqNum = num;
        }
        else if (freq == maxFreq && num < maxFreqNum)
        {
            maxFreqNum = num;
        }
        else if (freq > secondMaxFreq && freq < maxFreq)
        {
            secondMaxFreq = freq;
            secondMaxFreqNum = num;
        }
        else if (freq == secondMaxFreq && num < secondMaxFreqNum)
        {
            secondMaxFreqNum = num;
        }
    }
    
    cout << ((secondMaxFreq > 0) ? secondMaxFreqNum : -1) << endl;
    
    return 0;
}
