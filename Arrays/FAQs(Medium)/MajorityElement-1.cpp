#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = -1;
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt = 1;
                ele = nums[i];
                continue;
            }
            if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ele;
    }
};