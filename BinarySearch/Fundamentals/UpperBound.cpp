#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<=x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return low;
    }
};