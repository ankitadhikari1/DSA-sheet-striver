#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    bool func(vector<int>&nums , int k , int ind){
        if(ind == nums.size()){
            return k == 0;
        }
        bool take = false;
        if(nums[ind]<=k){
            take = func(nums,k-nums[ind],ind+1);
        }

        bool notTake = func(nums, k , ind+1);

        return take | notTake;
    }


    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return func(nums , k , 0);
    }
};