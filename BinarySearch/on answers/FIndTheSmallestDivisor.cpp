#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

  bool check(int mid , vector<int> nums , int limit){
      int sum = 0;
      for(int i=0;i<nums.size();i++){
        sum += ceil((double)nums[i]/(double)mid);
      }

      if(sum <= limit)return true;
      return false;
  }


  int smallestDivisor(vector<int> &nums, int limit) {
      int low = 1;
      int high = *max_element(nums.begin(),nums.end());
      int ans = -1;
      while(low<=high){
        int mid = low + (high - low)/2;
        int flag = check(mid,nums,limit);
        if(flag == 1){
            ans = mid;
            high = mid - 1 ;
        }
        else {
           low = mid + 1;
        }
      }

      return ans;

    }
};