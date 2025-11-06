#include<bits/stdc++.h>
using namespace std;


class Solution{	
	public:

        bool check(int ind , vector<int>&nums){
            int n = nums.size();
            if(ind==n)return true;
            bool flag = nums[ind] >= nums[ind-1];
            if(!flag)return false;
            return check(ind+1,nums);
        }


		bool isSorted(vector<int>& nums){
            int n = nums.size();
			if(n==1)return true;
            int ind = 1;
            bool ans = check(ind,nums);
            return ans;
		}
};