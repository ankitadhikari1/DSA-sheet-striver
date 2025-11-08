#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        int currentSc = 0;
        long long cnt = 0; 
        long long totalC = 0; 
        
        mp[0] = 1;

        for (int i=0;i<nums.size();i++) {
            int it = nums[i];
            if (it == target) {
                cnt += mp[currentSc];
                currentSc++;
            } else {
                currentSc--;
                cnt -= mp[currentSc];
            }
            
            totalC += cnt;
            mp[currentSc]++;
        }
        
        return (int)totalC;
    }
};