#include<bits/stdc++.h>
using namespace std;


class Solution {
public:


    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto & it : nums){
            mp[it]++;
        }

        int maxFrq = 0;
        int maxInd = -1;
        for(auto & it : mp){
            if(it.second>maxFrq){
                maxFrq = it.second;
                maxInd = it.first;
            }
            else if(it.second==maxFrq){
                maxInd = min(maxInd,it.first);
            }
        }

        return maxInd;
    }
};