#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:

        int func(int ind, vector<int>nums){
            int n = nums.size();
            if(ind==n-1)return nums[n-1];
            return nums[ind] + func(ind+1,nums);
        }

		int arraySum(vector<int>& nums){
			int sum = func(0,nums);
            return sum;
		}
};