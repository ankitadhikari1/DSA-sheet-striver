#include<bits/stdc++.h>
using namespace std;


class Solution {
   public:


    long long int merge(vector<int>&nums, int low ,int mid ,int high){
        int i = low;
        int j = mid+1;
        vector<int>temp;
        long long cnt = 0;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                cnt+=(mid-i+1);
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=high){
            temp.push_back(nums[j++]);
        }

        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }
        return cnt;
    }


    long long int mergeSort(vector<int>&nums,int lo ,int hi){
        if(lo>=hi){
            return 0;
        }
        long long cnt = 0;
        int mid = lo + (hi-lo)/2;
        cnt+=mergeSort(nums,lo,mid);
        cnt+=mergeSort(nums,mid+1,hi);
        cnt+=merge(nums,lo,mid,hi);
        return cnt;
    }


    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n - 1);
    }
};