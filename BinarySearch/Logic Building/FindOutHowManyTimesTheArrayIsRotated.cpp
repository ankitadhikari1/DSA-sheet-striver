#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int ans = INT_MAX;
        int ind = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[low]<=nums[mid]){
                if(nums[low]<ans){
                    ans = nums[low];
                    ind = low;
                }
                low = mid + 1;
            }
            else{
                if(nums[mid]<ans){
                    ans = nums[mid];
                    ind = mid;
                }
                high = mid -1 ;
            }
        }
        return ind;
    }
};