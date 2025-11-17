
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int maxCnt = 0;
        for(int i=0;i<n;i++){
            if(!st.count(nums[i]-1)){
                int cnt = 0;
                int start = nums[i];
                while(st.count(start)){
                    cnt++;
                    start++;
                }
                maxCnt = max(maxCnt,cnt);

            }
        }

        return maxCnt;
    }
};