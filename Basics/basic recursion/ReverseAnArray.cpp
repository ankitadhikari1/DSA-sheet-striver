#include<bits/stdc++.h>
using namespace std;



class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){			
			reverse(nums.begin(),nums.end());
            return nums;
		}
};