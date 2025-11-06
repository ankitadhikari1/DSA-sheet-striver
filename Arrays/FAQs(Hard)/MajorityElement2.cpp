#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int ele1 = -1;
        int ele2 = -1;
        int cnt1 = 0;
        int cnt2 = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(cnt1 == 0 && nums[i]!=ele2 ){
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=ele1){
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if( nums[i]==ele1){
                cnt1++;
            }
            else if(nums[i]==ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }


        int actualCount1 = 0;
        int actualCount2 = 0; 
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                actualCount1++;
            }
            else if(nums[i]==ele2){
                actualCount2++;
            }
        }

        vector<int>ans;
        if(actualCount1 >= (n/3)+1){
            ans.push_back(ele1);
        }
        if(actualCount2 >= (n/3)+1){
            ans.push_back(ele2);
        }

        return ans;



    }
};