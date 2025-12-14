
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:  

    int func(vector<int>&nums , int k , int ind){
        if(ind == nums.size()){
            if(k==0){
                return 1;
            }
            return 0;
        }
        int take = 0;
        if(nums[ind]<=k){
            take = func(nums , k - nums[ind], ind+1);
        }
        int notTake = func(nums , k , ind + 1);
        return take + notTake;
    }


    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	int cnt = func(nums,k,0);
        return cnt;

    }
};