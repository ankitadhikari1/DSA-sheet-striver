#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largestEle = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            largestEle = max(largestEle,nums[i]);
        }
        return largestEle;
    }
};