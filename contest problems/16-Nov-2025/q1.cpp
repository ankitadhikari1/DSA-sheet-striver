#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size();
        int maxVal = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                for(int k = 0;k<n;k++){
                    if(i!=j && i!=k && j!=k)
                    maxVal = max(maxVal,nums[i] + nums[j] - nums[k]);
                }
            }
        }
        return maxVal;
    }
};