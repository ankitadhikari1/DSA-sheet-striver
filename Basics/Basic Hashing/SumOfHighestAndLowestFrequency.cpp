


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        map<int,int>mp;
        for(auto &it : nums){
            mp[it]++;
        }
        int highE = INT_MIN;
        int highF = INT_MIN;
        int lowE = INT_MAX;
        int lowF = INT_MAX;


        for(auto &it : mp){
            if(it.second>highF){
                highF = it.second;
                highE = it.first;
            }

            if(it.second<lowF){
                lowF = it.second;
                lowE = it.first;
            }
        }

        return lowF + highF;
    }
};
