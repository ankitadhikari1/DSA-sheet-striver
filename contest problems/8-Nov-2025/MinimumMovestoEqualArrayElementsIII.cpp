#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxE = *max_element(nums.begin(),nums.end());
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            cnt+=(maxE-nums[i]);
        }
        return cnt;
    }
};