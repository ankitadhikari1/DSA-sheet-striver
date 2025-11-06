#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findPivot(vector<int>&nums,int low,int high){
        int i = low;
        int j = high;
        while(i<j){
            while(nums[i]<=nums[low]){
                i++;
            }
            while(nums[j]>nums[low]){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[low],nums[j]);
        return j;
    }


    void quickSortFunc(vector<int>&nums,int low , int high){
        if(low>=high)return;
        int pivot = findPivot(nums,low,high);
        quickSortFunc(nums,low,pivot-1);
        quickSortFunc(nums,pivot+1,high);
    }

    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        quickSortFunc(nums,0,n-1);
        return nums;
    }
};
