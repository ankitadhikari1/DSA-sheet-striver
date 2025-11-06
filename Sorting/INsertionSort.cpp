#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j>=1 && nums[j]<nums[j-1];j--){
                swap(nums[j],nums[j-1]);
            }
        }
        return nums;
    }
};
