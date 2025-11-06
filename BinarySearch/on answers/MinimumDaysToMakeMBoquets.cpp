#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

bool check(int mid , vector<int>&nums , int k ,int m){
  int bouquet = 0;
  int cnt = 0;
  for(int i=0;i<nums.size();i++){
      if(nums[i] > mid){
        cnt = 0;
      }
      else{
        cnt++;
        if(cnt == k){
          bouquet++;
          cnt = 0;
        }
      }
  }

  return bouquet >= m;
}


int roseGarden(int n,vector<int> nums, int k, int m) {
    int low = *min_element(nums.begin(),nums.end());
    int high = *max_element(nums.begin(),nums.end());
    int ans = -1;
    while(low<=high){
      int mid = low + (high - low)/2;
      bool flag = check(mid , nums , k , m);
      if(flag){
        high = mid - 1;
        ans = mid;
      }
      else{
        low = mid + 1;
      }

    }

    return ans;
  }
};