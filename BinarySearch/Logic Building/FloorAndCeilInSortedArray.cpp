#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
      int floorFind(vector<int>&nums,int x){
        int low= 0;
        int n = nums.size();
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=x){
                ans = nums[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;

    }


    int ceilFind(vector<int>&nums,int x){
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int ans = -1;

        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(nums[mid]<=x){
                ans = nums[mid];
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

        return ans;
    }




    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int low = floorFind(nums,x);
        int high = ceilFind(nums,x);
        return {high,low};
    }
};