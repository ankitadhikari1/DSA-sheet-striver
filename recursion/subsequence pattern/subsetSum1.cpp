#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:


    void func(int ind , vector<int>&nums , int sum , vector<int>&ans){
      if(ind == nums.size()){
        ans.push_back(sum);
        return;
      }

      func(ind+1,nums,sum,ans);
      func(ind+1,nums,sum+nums[ind],ans);
      

    }


    vector<int> subsetSums(vector<int>& nums) {
        vector<int>ans;
        int sum = 0;
        func(0,nums,sum,ans);
        return ans;
    }
};