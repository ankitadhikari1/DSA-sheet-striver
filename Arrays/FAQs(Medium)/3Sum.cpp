#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                
            
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j>0 && nums[j]==nums[j-1])j++;
                    while(k<n-1 && nums[k]==nums[k-1])k++;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        return ans;
    }
};