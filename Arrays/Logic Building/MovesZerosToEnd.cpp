#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                idx = i;
                break;
            }
        }
        if(idx==-1)return;
        for(int i = idx;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[idx]);
                idx++;
            }
        }
    }
};