#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    int countReversepairs(int low , int mid ,int high , vector<int>&nums){
        int j = mid + 1;
        int cnt = 0;
        for(int i=low;i<=mid;i++){
            while(j<=high && (long long )nums[i] > 2LL * nums[j]){
                j++;
            }
            cnt += (j-(mid+1));

        }

        return cnt;
    }


    void merge(int low ,int mid ,int high ,vector<int>&nums){
        int i = low;
        int j = mid + 1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }

        while(j<=high){
            temp.push_back(nums[j]);
            j++;
        }


        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }

    }

    int mergeSort(int low,int high,vector<int>&nums){
        if(low>=high)return 0;
        int mid = (low + high)/2;
        int cnt = 0;
        cnt+=mergeSort(low,mid,nums);
        cnt+=mergeSort(mid+1,high,nums);
        cnt+=countReversepairs(low,mid,high,nums);
        merge(low,mid,high,nums);
        return cnt;
    }


    int reversePairs(vector<int>& nums) {
        int cnt = mergeSort(0,nums.size()-1,nums);
        return cnt;
    }
};

