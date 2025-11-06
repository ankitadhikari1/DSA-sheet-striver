#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int ele = nums[0];
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            nums[i] = nums[i+1];
        }
        nums[nums.size()-1]= ele;
        
    }
};